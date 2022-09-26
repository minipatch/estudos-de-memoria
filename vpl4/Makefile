CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

fogao:
	@mkdir build/fogao
	$(CC) $(CFLAGS) -c src/fogao -o build/fogao.o

geladeira:
	@mkdir build/geladeira
	$(CC) $(CFLAGS) -c src/geladeira -o build/geladeira.o
estoque:
	@mkdir build/estoque
	$(CC) $(CFLAGS) -c src/estoque -o build/estoque.o

# Remova as tres linhas abaixo

# Modifique a funcao main
main:
	@mkdir src/main.cpp
	$(CC) $(CFLAGS) build/fogao.o build/geladeira.o build/estoque.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)