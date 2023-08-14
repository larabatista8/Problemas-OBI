#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void leitura(int *matriz, int n){
	int i,j;
	
	for (i=0; i<n*n;i++){
		
			scanf("%d", matriz+i);	
		
	}
		
}

 
 int main(){
 	int n,linha,soma=0,coluna,numero, soma_linha=0,i,j,total;
 	scanf("%d",&n);
 	
 	int matriz[n][n];
 	leitura(matriz,n);
 	
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			if(matriz[i][j]==0){
 				coluna=j+1;
 				linha=i+1;
 				break;
			 }
		 }	
	 }
//soma dos numeros na linha q o numero esta ilegivel	 
	 for(j=0;j<n;j++){	
	 	soma_linha+=matriz[linha-1][j];	
	 }
// soma dos numeros da linha sem o numero ilegivel

for(i=0; i<n;i++){
	for(j=0;j<n;j++){
		if(i!= linha-1) soma+= matriz[i][j];	
	}
	
}
total=soma/(n-1);

numero= total-soma_linha;
printf("%d\n",numero);
printf("%d\n",linha);
printf("%d\n",coluna);

 	
 	return 0;
 }
