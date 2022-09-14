#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ostream>

class fatura{
    private:
    
        std::string codigo;
        char tpFatura;
        double valor;
    
    public:
        fatura(){

        }
        fatura(std::string _codigo,char _tpFatura, double _valor){
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
        std::map<char,int> status;
        std::vector<fatura> lista;
    
    public:
        colecao(){
            
        }

        void adicionar(fatura f){
            lista.push_back(f);
            for(int i=0;i<lista.size();i++){
                status[i];
            }
        }

        void proxima(){
            lista.pop_back();
            imprimir();
            for(int i=lista.size();0<i;i--){
                status[i];
            }
        }

        void imprimir(){
        //preciso de help
        //std::cout<<lista<<std::endl;                
            
        }

        void status(){
            for(auto it:status){
                std::cout<<it.first<<std::endl<<it.second<<std::endl;
            }
        }



};


int main(){
    const char f='f',r='r',p='p',s='s',e='e';
    char letra;
    std::cin>>letra;
    
    if(letra==f){
        std::string cod;
        char tpFatura;
        double valor; 
        std::cin>>cod>>tpFatura>>valor;
        fatura Fatura(cod,tpFatura,valor);
    }
    if(letra==r){
        Fatura.proxima();
    }

    if(letra==p){
        
    }
}