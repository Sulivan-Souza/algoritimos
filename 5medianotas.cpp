#include <stdio.h>


using namespace std;

int main()
{
    float n1,n2,media,trabalho;// peso das notas 0.7, trabalho 0.3
    char nome[20];
    printf("Digite o nome do Aluno...:");
    scanf("%s", &nome);
    printf("Digite a primeira nota...:");
    scanf("%f",&n1);
    printf("Digite a segunda nota...:");
    scanf("%f", &n2);
    printf("Nota do Trabalho...:");
    scanf("%f", &trabalho);
    media  =((n1+n2)/2*0.7)+(trabalho*0.3);
    printf("\n O Aluno(a) ....: %s\n Obteve Media ...%.2f:", nome,media);





    }
