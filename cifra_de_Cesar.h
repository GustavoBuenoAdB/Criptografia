/**
 * @file cifra_de_Cesar.h
 * @brief Definição das cifragens de Cesar.
 *
 * Este arquivo contém a definição de funçãoes que efetuam 2 metodos de cifragem de César.
 * 
 * @author Gustavo_Bueno_AdB
 * @date 02/04/2025
 * @version 1.0
 */

#ifndef CIFRA_DE_CESAR_H
#define CIFRA_DE_CESAR_H

/**
 * @brief Cifra uma mensagem com uma rotacao qualquer no Alfabeto.
 * 
 * Faz uma mensagem cifrada em um texto qualquer com qualquer rotação desejada.
 * A cifra só é aplicada em caracteres Alfabeticos entre ['a' - 'z'] e ['A' - 'Z'].
 * 
 * @note A mensagem cifrada é toda maiuscula.
 * @warning A mensagem cifrada retornada deve ser desalocada após o uso para não causar Memory leak.
 *
 * @param texto_plano A mensagem original a ser cifrada.
 * @param tam_texto O tamanho da mensagem Original(considerando o '\0').
 * @param rotacao O valor a ser rotacionado (qualquer valor sera modularizado no intervalo [(-25) - (+25)] ).
 *  
 * @return char*: uma string de tamanho tam_texto cifrada.
 */
char* cifra_de_Cesar_Alfabetica(char* texto_plano, int tam_texto, int rotacao);

/**
 * @brief Cifra uma mensagem com uma rotacao qualquer na Tabela ASCII.
 * 
 * Faz uma mensagem cifrada em um texto qualquer com qualquer rotação desejada.
 * A cifra só é aplicada em caracteres ASCII padrão, entre os valores [32 - 127] da tabela.
 * 
 * @note Os caracteres de controle [0 - 31] da Tabela são ignorados pela cifra.
 * @warning Os caracteres entre [128 - 256] são modularizados para o intervalo [32 - 127].
 * @warning A mensagem cifrada retornada deve ser desalocada após o uso para não causar Memory leak.
 *
 * @param texto_plano A mensagem original a ser cifrada.
 * @param tam_texto O tamanho da mensagem Original(considerando o '\0').
 * @param rotacao O valor a ser rotacionado (qualquer valor sera modularizado no intervalo [(-25) - (+25)] ).
 *  
 * @return char*: uma string de tamanho tam_texto cifrada.
 */
char* cifra_de_Cesar_Completa(char* texto_plano, int tam_texto, int rotacao);

///FAZER FUNCOES OU ARQUIVO DE QUEBRA DE CEZAR.

///FAZER AS FUNCOES DE CIFRA DE CESAR A NIVEL BINARIO.

#endif