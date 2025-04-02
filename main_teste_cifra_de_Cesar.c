#include "cifra_de_Cesar.h"
#include <stdio.h>

#define TAM 28

int main()
{

    char mensagem[TAM] = "Insira aqui sua mensagem :)";

    char* cif_Ce_alf = cifra_de_Cesar_Alfabetica(mensagem, TAM, 20);
    
    char* cif_Ce_cpl = cifra_de_Cesar_Completa(mensagem, TAM, 20);

    printf("Mensagem: %s\n", mensagem);
    printf("Mensagem letras Cifradas: %s\n", cif_Ce_alf);
    printf("Mensagem Cifrada: %s\n\n", cif_Ce_cpl);

    //Decifrando as mensagens

    char* dcif_Ce_alf = cifra_de_Cesar_Alfabetica(cif_Ce_alf, TAM, -20);
    
    char* dcif_Ce_cpl = cifra_de_Cesar_Completa(cif_Ce_cpl, TAM, -20);

    printf("Mensagem letras Decifrada: %s\n", dcif_Ce_alf);
    printf("Mensagem Decifrada: %s\n\n", dcif_Ce_cpl);

    return 0;
}