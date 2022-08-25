#include <iostream>

int main(){
    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada

    int variavel;

    std::cin<<variavel;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    
    int *ponteiro;
    ponteiro=nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com os dados passados
    int v;
    std::cin>>v;
    int vetor[v];
    for(int i=0;i>v;i++){
        std::cin>>vetor;  
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    std::cout<<&variavel<<std::endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    std::cout<<variavel<<std::endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    std::cout<<&ponteiro<<std::endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    std::cout<<ponteiro<<std::endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    std::cout<<&vetor<<std::endl;



    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    std::cout<<&vetor[0]<<std::endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    std::cout<<vetor[0]<<std::endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    &variavel=ponteiro;

    // 12) Imprima o VALOR da variável declarada em (2)
    std::cout<<ponteiro<<std::endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout<<(&ponteiro)<<std::endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    std::cout<<(&variavel==ponteiro)<<std::endl;
    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    &ponteiro=5;

    // 16) Imprima o VALOR da variável declarada em (1)
    std::cout<<variavel<<std::endl;

    // 17) Atribua o VALOR da variável (3) à variável declarada em (2)
    vetor=*ponteiro;

    // 18) Imprima o VALOR da variável declarada em (2)
    std::cout<<ponteiro<<std::endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout<<&ponteiro<<std::endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    &vetor[0]=ponteiro;

    // 21) Imprima o VALOR da variável declarada em (2)
    std::cout<<ponteiro<<std::endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout<<&ponteiro<<std::endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i=0;i<v;i++)
    {
        *(ponteiro+i) *= 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i=0 ;i<v;i++)
    {
        std::cout<<vetor[i]<<std::endl;
    }
    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for(int i=0;i<v;i++)
    {
        std::cout<<(vetor+i)<<std::endl;
    }

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for(int i=0;i<v;i++)
    {
        std::cout<<*(ponteiro+i)std::endl;
    }

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    &vetor[4]=ponteiro;

    // 28) Imprima o VALOR da variável declarada em (2)
    std::cout<<ponteiro<<std::endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout<<&ponteiro<<std::endl;

    // 30) Imprima o VALOR que é obtido quando acessamos o ENDEREÇO do ponteiro (2) decrementado de 4
    

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    

    // 32) Imprima o VALOR da variável declarada em (31)
    

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    

}