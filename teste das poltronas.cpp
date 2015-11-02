#include <stdio.h>

/*algoritimo com o numero de poltronas da orientacao, */


int main(){
	/* variaveis das poltronas em matriz separadamente para facilitar a vizualizção do numero das poltronas em direito e esquerdo*/
int polt1 [9] [2] = {{1,2},{5,6},{9,10},{13,14},{17,18},{21,22},{25,26},{29,30},{33,34}};
int polt2 [9] [2] = {{3,4},{7,8},{11,12},{15,16},{19,20},{23,24},{27,28},{31,32},{35,36}};

int cont1, cont2, num1, num2, op, poltvendid;

/* preenchend as fileiras*/

num1=1;

for (cont1=1;cont1<=9;cont1++){
	for (cont2=1;cont2<=2;cont2++){
		polt1 [cont1,cont2] = num1;
		num1=num1+1;
	}
	num1 = num1+2;
}





}
