#include<stdio.h>

int main()
{
    int senha=0;// criando um variavel da senha
    printf("digite uma senha");//pedindo para digitar
    scanf("%d" ,&senha);//digitando uma senha
    
    for(int i =0; i < 10;i++){
        for(int x =0; x <10; x++){
            
     printf("valor: %d %d %d %d \n" , i,x);//imprime a tentativa
        }
    }
}
