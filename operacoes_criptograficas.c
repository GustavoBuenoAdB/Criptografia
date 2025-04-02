#ifndef OPERACOES_CRIPTOGRAFICAS_C
#define OPERACOES_CRIPTOGRAFICAS_C

/**
 * @file operacoes_criptograficas.c
 * @brief Implementacoes de Operacoes basicas para criptografia.
 *
 * Este arquivo contém as Implementações de funções e ferramentas auxiliares,  
 * incluindo operações como módulo, conversão de caracteres para inteiros  
 * e outras utilidades para uso em programas de criptografia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 28/03/2025
 * @version 1.0
 */

#include "operacoes_criptograficas.h"

int mod(int entrada, int modulo)
{
    if (entrada < 0)
        entrada += (((abs(entrada) / modulo) + 1) * modulo);
    return entrada % modulo;
}

int abs(int i)
{
    return (i >= 0) ? i : (i*(-1));
}

int l_para_i(char letra)
{
    return (letra >= 'a' && letra <= 'z') ? letra - 'a' : 
           (letra >= 'A' && letra <= 'Z') ? letra - 'A' : -1;

}

int i_para_l(int i)
{
    return (0 <= i && i <= 25) ? i + 'a' : '\0';
}

int i_para_L(int i)
{
    return (0 <= i && i <= 25) ? i + 'A' : '\0';
}

int c_para_i(char c)
{
    return (int)c;
}
char i_para_c(int i)
{
    return (char) mod(i, 128);
}

int e_letra(char c)
{
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) ? 1 : 0;
}


#endif