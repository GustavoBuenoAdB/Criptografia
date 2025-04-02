# Definindo o compilador
COMPILADOR = gcc

# Flags de compilação (warnig, muito warning, c11)
FLAGS = -Wall -Wextra -std=c11

# Nome do executável
SAIDA = saida

# Lista de arquivos (wildcard pega todos os .c do diretorio)
CODIGOS = $(wildcard *.c)
OBJETOS = $(CODIGOS:.c=.o)

# Linkando os .o em um executavel.
$(SAIDA): $(OBJETOS)
	$(COMPILADOR) $(FLAGS) -o $(SAIDA) $(OBJETOS)

# Compilando todo .c em .o em ordem ($< o primeiro, $@ o correspondente em .o)
%.o: %.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

# Make clean (limpa apaga tudo que foi compilado).
clean:
	rm -f $(OBJETOS) $(SAIDA)

# pra nao bugar se tiver um arquivo clean
.PHONY: clean