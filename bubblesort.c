#include <stdio.h>
#include <stdlib.h>

//printing function
void imprimir(int *p){
	int size = sizeof(p) - sizeof(int)/2;
	//printf("Size: %d\n",size);
	for(int i=0;i<size;i++){
		printf("%d\n",p[i]);
	}
}

void bubblesort(int *p){
	//we need two variables for the array size because, in boublesort
	//the value at the last position in every loop is locked in the end.
	// In order to do this,we are going to decrease the variable n2 every loop.
	int n1 = sizeof(p) - sizeof(int)/2;
	int n2 = n1;

	int aux=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
		//I'm using pointer aritimetics to access its content
			if(*(p+j)>*(p+j+1)){
				aux = *(p+j+1);
				*(p+j+1)=*(p+j);
				*(p+j) = aux;
				//In the end of this internal loop, the biggest value is going to
				//the end of the vector
			}
		}
		n2--;//Doing this, we are locking the values at the end of the vector,
			// So, they will not change
		}
}

int main(){
	//I made a vector in heap memory
	int *v = (int *) malloc(4*sizeof(int));
	*(v)=3;
	*(v+1)=10;
	*(v+2)=4;
	*(v+3)=5;
	*(v+4)=1;
	*(v+5)=9;

	bubblesort(v);
	imprimir(v);
}