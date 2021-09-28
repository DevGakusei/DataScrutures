#include<stdio.h>
void imprimir(int *v){
	for(int i=0;i<sizeof(v);i++)
		printf("%d\n",v[i]);
	}
void SelectionSort(int* v){
	int p_menor=0,i,j,aux;
	int n = sizeof(v);
	//printf("n: %d\n",n);
	for(i=0;i<n;i++){
		p_menor=i;
		for(j=i+1;j<n;j++){
			//printf("i: %d j:%d\n",i,j);
			if(v[j]<v[p_menor]){
				p_menor=j;
				//printf("j: %d Menor: %d\n",v[j],v[p_menor]);	
			}
				aux =v[p_menor];
				v[p_menor]=v[i];
				v[i]=aux;
		}
		//imprimir(v);
	}
	
}
int main(){
	int v[] ={10,5,32,2,34,7,14,8};
	SelectionSort(v);
	imprimir(v);
}
