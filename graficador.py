import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

vec=np.loadtxt('datos.txt',usecols=0)

Z=np.zeros(shape=(101,101))

    
for i in range(101):
    Z[i,:]=vec[i*101:(i+1)*101]
    
X=np.array(range(101))/101
Y=-X
X,Y=np.meshgrid(X,Y)
fig=plt.figure()
ax=Axes3D(fig)
ax.plot_wireframe(X,Y,Z, color='r')
plt.show()
