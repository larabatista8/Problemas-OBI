#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

 int main(){
 	int diaria, aumento, chegada, total,conta;
 	
 	scanf("%d", &diaria);
 	scanf("%d", &aumento);
 	scanf("%d", &chegada);
 	
 	if(chegada == 1) total = 31*diaria;
 	else if(chegada>=2 && chegada<=15) total = diaria + (aumento*(chegada-1));
 	else total = diaria + (aumento*14);
 	
 	if(chegada ==1) conta=total;
 	
    else conta = (31-(chegada-1))*total;
 	printf("%d", conta);
 	return 0;
 }
