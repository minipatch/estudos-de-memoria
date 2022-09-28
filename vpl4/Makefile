CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main.out

# Modifique a funcao main
main.out: fogao.o geladeira.o estoque.o
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(BUILDDIR)/fogao.o $(BUILDDIR)/geladeira.o $(BUILDDIR)/estoque.o $(SRCDIR)/main.cpp -o $(TARGET)

estoque.o: fogao.o geladeira.o
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $(SRCDIR)/estoque.cpp -o $(BUILDDIR)/estoque.o

fogao.o:
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $(SRCDIR)/fogao.cpp -o $(BUILDDIR)/fogao.o

geladeira.o:
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $(SRCDIR)/geladeira.cpp -o $(BUILDDIR)/geladeira.o

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)