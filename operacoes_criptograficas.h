/**
 * @file operacoes_criptograficas.h
 * @brief Definicoes e Operacoes basicas para criptografia.
 *
 * Este arquivo contém a definição de funções e ferramentas auxiliares,  
 * incluindo operações como módulo, conversão de caracteres para inteiros  
 * e outras utilidades para uso em programas de criptografia.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 28/03/2025
 * @version 1.0
 */

#ifndef OPERACOES_CRIPTOGRAFICAS_H
#define OPERACOES_CRIPTOGRAFICAS_H

// Apenas declaramos malloc para o linker, sem ter que incluir stdlib.h
void* malloc(unsigned long size);

/**
 * @brief Retorna a entrada em um valor entre 0 e modulo
 *
 * Faz o modulo de um valor de entrada até ele estar entre o valor 0 e o parametro modulo. 
 *
 * @param modulo Valor que define o intevalo aceito [0 - modulo[.
 * @return int O valor modularizado.
 */
int mod(int entrada, int modulo);

/**
 * @brief Retorna o valor absoluto de um inteiro i.
 *
 * Retorna o valor absoluto de um inteiro i, sendo ele mesmo,
 * ou seu inverso aditivo caso negativo.
 *
 * @param i Um inteiro qualquer.
 * @return int O valor absoluto.
 */
 int abs(int i);

/**
 * @brief Converte uma letra em um inteiro.
 *
 * Converte um char entre ['a' - 'z'] ou ['A' - 'Z'] em um valor entre 0 e 25.
 * Caso o valor nao esteja nesses intervalos retorna -1. 
 * @note nao faz destinção entre maiuscula e minuscula ('A' = 'a')
 *
 * @param letra Uma letra entre ['a' - 'z'] ou ['A' - 'Z'].
 * @return int valor no intervalo [0 - 25] ou -1 caso invalido.
 */
int l_para_i(char letra);

/**
 * @brief Converte um inteiro para uma letra.
 *
 * Converte um numero entre [0 - 25] em uma letra entre ['a' - 'z'].
 * Caso o valor nao esteja nesse intervalo retorna '\0'. 
 * @note Retorna sempre minuscula.
 *
 * @param i Um inteiro no intervalo [0 - 25].
 * @return char Letra entre ['a' - 'z'] ou '\0' caso invalido.
 */
int i_para_l(int i);

/**
 * @brief Converte um inteiro para uma letra.
 *
 * Converte um numero entre [0 - 25] em uma letra entre ['A' - 'Z'].
 * Caso o valor nao esteja nesse intervalo retorna '\0'. 
 * @note Retorna sempre maiuscula.
 *
 * @param i Um inteiro no intervalo [0 - 25].
 * @return char Letra entre ['a' - 'z'] ou '\0' caso invalido.
 */
int i_para_L(int i);

/**
 * @brief Converte um caracter para um inteiro.
 *
 * Converte um caracter da tabela ASCII em um inteiro entre [0 - 127].
 *
 * @param c Um caracter qualquer.
 * @return int um inteiro no intervalo [0 - 127].
 */
int c_para_i(char c);

/**
 * @brief Converte um inteiro para um caracter.
 *
 * Converte um inteiro qualquer em um caracter da tabela ASCII.
 * @note Modulariza qualquer valor fora desse intervalo.
 *
 * @param c Um caracter qualquer.
 * @return char um caracter da tabela ASCII entre a posição [0 - 127].
 */
char i_para_c(int i);

/**
 * @brief Confere se um char é uma letra.
 *
 * Confere se um char esta no intervalo ['a' - 'z'] ou ['A' - 'Z'].
 * Caso o valor nao esteja nesse intervalo retorna 0. 
 *
 * @param c Um caracter qualquer.
 * @return int 1 caso seja uma letra e 0 do contrario.
 */
int e_letra(char c);

#endif