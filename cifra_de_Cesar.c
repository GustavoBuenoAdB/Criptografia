#ifndef CIFRA_DE_CESAR_C
#define CIFRA_DE_CESAR_C

/**
 * @file operacoes_criptograficas.h
 * @brief Definicoes e Operacoes basicas para criptografia.
 *
 * Este arquivo contém a definição de funções e ferramentas auxiliares,  
 * incluindo operações como módulo, conversão de caracteres para inteiros  
 * e outras utilidades para uso em programas de criptografia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 01/04/2025
 * @version 1.0
 */

#include "cifra_de_Cesar.h"
#include "operacoes_criptograficas.h"


char* cifra_de_Cesar_Alfabetica(char* texto_plano, int tam_texto, int rotacao)
{
    char* texto_cifrado = (char*) malloc(sizeof(char) * tam_texto);
    for(int i = 0 ; i < tam_texto ; i++)
    {
        if (e_letra(texto_plano[i]))
            texto_cifrado[i] = i_para_L( mod( l_para_i(texto_plano[i]) + rotacao, 26) );
        else
            texto_cifrado[i] = texto_plano[i];
    }
    return texto_cifrado;
}

char* cifra_de_Cesar_Completa(char* texto_plano, int tam_texto, int rotacao)
{
    char* texto_cifrado = (char*) malloc(sizeof(char) * tam_texto);
    for(int i = 0 ; i < tam_texto ; i++)
    {
        int n = c_para_i(texto_plano[i]);
        if (n < 32) // preserva os caracteres de controle
            texto_cifrado[i] = texto_plano[i];
        else 
            texto_cifrado[i] = i_para_c( mod( (n - 32) + rotacao, (128 - 32)) + 32);
    }
    return texto_cifrado;
}

#endif