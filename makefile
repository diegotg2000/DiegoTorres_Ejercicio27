graficas.png: graficador.py datos.txt
	python graficador.py

datos.txt: solucion.x
	./solucion.x
	
solucion.x: solucion.cpp
	g++ solucion.cpp -o solucion.x
