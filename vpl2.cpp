#include <iostream>

using namespace std;

class Categoria{
  private:
    // Preencher
    
    // ************* Dados *************
 
    // *********************************

    int codigo;
    double caixa;
    
    
    // ************* Operações *************
    public:
    // Construtor
    Categoria(int codigo_categoria, double valor_caixa) {
      this->codigo=codigo_categoria;
      this->caixa=valor_caixa;

    }
    
    // Recupera o código correspondente a uma categoria.
    int getCodigo() {
      return codigo;
    }
    
    // Recupera o valor em caixa de uma categoria.
    double getValorCaixa(){
      return caixa;
    }
    
    // Adiciona uma quantia ao caixa de uma categoria.
    void adicionaCaixa(double valor) {
      caixa=caixa+valor;
    }
    
    // Remove uma quantia ao caixa de uma categoria.
    void gastaCaixa(double valor) {
      caixa=caixa-valor;

    }
    // *********************************

};



class Orcamento {
  private:
    // Preencher
    
    // ************* Dados ************    
    Categoria *saude;
    Categoria *educacao;
    Categoria *seguranca;
    Categoria *previdencia;
    Categoria *admPublica;

    
    // *********************************
    
    // ************* Operações *************
    
    // Construtor do Orçamento que deve conter um objeto categoria para cada pasta.
    // Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento.
    // Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.
    public:
    Orcamento(double impostos) {
      saude = new Categoria(0,impostos*0.15);
      educacao = new Categoria(1,impostos*0.15);
      seguranca=  new Categoria(2,impostos*0.20);
      previdencia = new Categoria(3,impostos*0.35);
      admPublica = new Categoria(4,impostos*0.15);
    }


    
    
    
    // Reduz o valor no caixa da categoria especificada.
    void gastoCategoria(int codigo_categoria, double valor) {
      for(int i=0;i>4;i++){
        if(codigo_categoria==0){
          saude->gastaCaixa(valor);
        }
        if(codigo_categoria==1){
          educacao->gastaCaixa(valor);

          
        }
        if(codigo_categoria==2){
          seguranca->gastaCaixa(valor);

        }
        if(codigo_categoria==3){
          previdencia->gastaCaixa(valor);
        
        }
        if(codigo_categoria==4){
          admPublica->gastaCaixa(valor);

        }
      }
    }
    
    // Retorna o valor em caixa da categoria especificada.
    double getSaldo(int codigo_categoria) {
      for(int i=0;i>4;i++){
        if(codigo_categoria==0){
          saude->getValorCaixa();
        }
        if(codigo_categoria==1){
          educacao->getValorCaixa();
        }
        if(codigo_categoria==2){
          seguranca->getValorCaixa();

        }
        if(codigo_categoria==3){
          previdencia->getValorCaixa();

        }
        if(codigo_categoria==4){
          admPublica->getValorCaixa();
          
        }
      }
    }
    
    // Retorna o ponteiro para o objeto da categoria especificada.
    Categoria* getCategoria(int codigo_categoria) {
    }
    
    // *********************************
};



int main() {
  Orcamento *orcamento;

  char test = 0;
  while(cin >> test) {
      switch (test) {
        case 'o': { // Inicia novo orçamento
          double valor = 0;
          cin >> valor;
          
          // PREENCHER chamada de orçamento   
          
        }
        break;
        case 'g': { // Gastar em uma categoria
          int categoria = 0;
          double valor = 0;
          cin >> categoria >> valor;
          
          // PREENCHER chamada de orçamento
          
          cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
        }
        break;
        case 'p': { // Imprimir todas as categorias e seus saldos
          for (int categoria = 0; categoria < 5; categoria++) {
            cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
          }
        }
        break;
        default: {
          cout << "----------" << endl;
        } break;
      }
  }
  return 0;
}