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
	int aux1,aux2;
	int l = sizeof(p);
	//Going throuht the array from position 1 to its end
	for(int i=1;i<l;i++){
		//Comparing position i to its left neightbour,
		//while i>j, keep going throut the array in the reverse way.
		//If j-1>i, we finally found the position to insert i and we need
		//to reorder the other positions of the array.
		for(int j=i-1;p[i]<p[j];j--){
			
			if(p[i]>p[j-1]){
				aux1 = p[j];
				p[j]=p[i];
				/*
				Now that we finally inserted p[i] in its right place,
				we need to reorder the other elements 

				*/
				for(int g=j+1;g<=i;g++){
					aux2 = p[g];
					p[g]=aux1;
					aux1=aux2;
				}	
			}
	
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