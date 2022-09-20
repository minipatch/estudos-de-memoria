#include <iostream>
#include <string>
#include <map>
#include <vector>


class Fatura {
    private:
        std::string _codigo;
        char _tipo;
        double _valor;
    
    public:
        Fatura(std::string codigo, char tipo, double valor) : _codigo(codigo), _tipo(tipo), _valor(valor) {}

        void imprimir() {
            std::cout << _tipo << " " << _valor << " " << _codigo << std::endl;
        }

        double getValor() {
            return _valor;
        }

        char getTipo() {
            return _tipo; 
        }
};

class Colecao{
    private:
        std::vector<Fatura*> _faturas;
        std::map<char, int> _tipos;

    public:
    Colecao() {
        _tipos['p'] = 0;
        _tipos['b'] = 0;
        _tipos['g'] = 0;
    }

    void adcionar(Fatura& fatura) {
        if(_faturas.empty() || fatura.getValor() > _faturas.back()->getValor()) {
            _faturas.push_back(&fatura);
        } else {
            for(std::vector<Fatura*>::iterator itr = _faturas.begin(); itr < _faturas.end(); itr++){
                if(fatura.getValor() < (*itr)->getValor()){
                    _faturas.insert(itr, &fatura);
                    break;
                }
            }
        }
        _tipos[fatura.getTipo()]++;
    }

    void proxima() {
        if(!(_faturas.empty())) {
            _faturas.back()->imprimir();
            _tipos[_faturas.back()->getTipo()]--;
            delete (_faturas.back());
            _faturas.pop_back();
        }
    }
    
    void imprimir() {
        for(Fatura* fatura : _faturas) {
            fatura->imprimir();
        }
    }


    void status() {
        for(auto it : _tipos){
            std::cout << it.first << " " << it.second << std::endl;
        }
    }
};


int main() {
    Colecao colecao;
    Fatura* fatura;

    char comando = 'p';
    char tipo = 'p';
    double valor = 0;
    std::string codigo = "00000";
    
    while(comando != 'e') {

        std::cin >> comando;
        if (comando == 'f') 
            std::cin >> tipo >> valor >> codigo;

        switch(comando) {
            case 'f': {
                fatura = new Fatura(codigo, tipo, valor); 
                colecao.adcionar(*fatura);
                break;
            }
            case 'r' : {
                colecao.proxima();
                break;
            }
            case 'p' : {
                colecao.imprimir();
                break;
            }
            case 's' : {
                colecao.status();
                break;
            }
        }
    }
    return 0; 
}

