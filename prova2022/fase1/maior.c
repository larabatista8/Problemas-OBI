#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

 int soma (int i){
 	if (i<10)return i;
 	else return i%10 + soma(i/10);	
 }
 
 int main(){
 	int n,m,s,i, numero=-1, digito;
 	
 	scanf("%d",&n);
 	scanf("%d",&m);
 	scanf("%d",&s);
 	for(i=n; i<=m; i++){
 	
	 digito= soma(i);
	 if(digito==s) numero=i;	
	 }
 	
 	printf("%d", numero);
 	
 	return 0;
 }
