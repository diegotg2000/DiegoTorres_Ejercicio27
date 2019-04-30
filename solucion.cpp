#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


const float V0=100;
const int N=101;
const float L=1;
const float Delta=L/(N-1);
const int intentos=50000;

void solucion(void);

int main(){
    solucion();
    return 0;
}

void solucion(void){
    float V[N][N]={0};
    for(int j=20;j<=80;j++){
        V[40][j]=V0;
        V[60][j]=-V0;
    }
    for(int m=0; m<intentos;m++){
        for(int i=1; i<N-1;i++){
            for(int j=1;j<N-1;j++){
                if(i!=40 && i!=60 && j>80 && j<20){
                V[i][j]=0.25*(V[i-1][j]+V[i+1][j]+V[i][j-1]+V[i][j+1]);
                }
            }
        }
    }

    
  ofstream outfile;
  outfile.open("datos.txt");
  for(int i=0; i<N;i++){
        for(int j=0;j<N;j++){
                outfile<<V[i][j]<<endl;
        }
  }

      outfile.close();
}
