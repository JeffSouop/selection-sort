#include<stdlib.h>
#include<stdio.h>
int main(){
	int t[10];
	int i,j,n,min;
	int aux;
	for(i=0; i<=9; i++){
		printf("entrer les valeurs",i);
		scanf("%d",&t[i]);
	}
	n=10;
	i=1;
	while(j<n){
		j=i+1;
		min=i;
		while(j<=n){
			if(t[j]<t[min]){
				min=j;
			}
			j=j+1;
		}
		if(min =!i){
			aux=t[i];
			t[i]=t[min];
			t[min]=aux;
		}
		i=i+1;
	}
	printf("tableau trie\t");
	for(i=0; i<=9; i++){
		printf("%d\t",t[i]);
	}
}