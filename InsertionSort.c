#include <stdio.h>
#include <stdlib.h>

//Printing array function
void imprimir(int *v){
	int l = sizeof(v);
	for(int i = 0;i<l;i++){
		printf("%d\n",v[i]);
	}
}

void InsertionSort(int *p){
	int s = sizeof(p);
	int aux;
	for(int i=1;i<s;i++){
		
		for(int j=i;j>0 && p[j]<p[j-1];j--){
			aux = p[j];
			p[j]=p[j-1];
			p[j-1]=aux;
			
		}
	}
}

int main(){
	//Array in heap memory
	int *v = (int *) malloc(sizeof(int)*8);
	v[0]=10;
	v[1]=5;
	v[2]=32;
	v[3]=2;
	v[4]=34;
	v[5]=7;
	v[6]=14;
	v[7]=8;
	InsertionSort(v);
	imprimir(v);
}
