#include<stdio.h>

int senha;
int tentativa;
int main()
{
	int senha=0;// criando um variavel da senha
	printf("digite uma senha");//pedindo para digitar
	scanf("%d",&senha); //digitando uma senha

	for(int i =0; i < 10; i++) {
		for(int x =0; x <10; x++) {
			for(int w = 0; w<10; w++) {
				for(int z =0; z<10; z++) {
					printf("valor: %d %d %d %d \n", i,x,w,z); //imprime a tentativa
					tentativa = i*1000 + x *100 + w *10 + z;
					if(senha == tentativa) {
						printf("sua senha C) : %d%d%d%d \n", i,x,w,z);
						return 0;
					}
					else {
						printf("tentativa %d%d%d%d \n", i,x,w,z);
					}
				}
			}
		}
	}
}
