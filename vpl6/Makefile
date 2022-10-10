CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main.out

main.out: acai.o util.o pizza.o cachorro_quente.o pedido.o venda.o produto.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) build/acai.o build/pizza.o build/cachorro_quentie.o build/pedido.o build/venda.o build/produto.o

produto.o: acai.o util.o pizza.o cachorro_quente.o pedido.o venda.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/produto.cpp -o build/produto.o 

acai.o: util.o pedido.o venda.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/acai.cpp -o build/produto.o

pizza.o: util.o pedido.o venda.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/pizza.cpp -o build/pizza.o

cachorro_quente.o: util.o pedido.o venda.o
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/cachorro_quente.cpp -o build/cachorro_quente.o


util.o: venda.o produto.o pedido.o venda.o
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/util.cpp -o build/util.o 

pedido.o: venda.o produto.o util.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/pedido.cpp -o build/pedido.o 

venda.o: produto.o util.o pedido.o 
	@mkdir -p $(BUILD)
	$(CC) $(FLAGS) -c src/venda.cpp -o build/venda.o

clean: $(RM) -r $(BUILD)/* $(TARGET)