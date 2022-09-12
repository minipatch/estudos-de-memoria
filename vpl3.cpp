#include <iostream>
#include <string>
#include <list>

class fatura{
    private:
    
        std::string codigo;
        char tpFatura;
        double valor;
    
    public:
    
        fatura(std::string _codigo,char _tpFatura, _double _valor){
            this->codigo=_codigo;
            this->tpFatura=_tpFatura;
            this->valor=_valor;
        }

        void imprimir(){
            std::cout<<tpFatura <<valor <<codigo<<std::endl;
        }

        double getValor(){
            return valor;
        }

        char getTpFatura(){
            return tpFatura; 
        }
};


class colecao{
    private:    
        std::list<int> faturas;
    
    public:
        colecao(){
            this->faturas=0;
        }

        void adicionar(fatura f){

        }

        void proxima(){

        }

        void imprimir(){

        }

        void status(){
            
        }



};