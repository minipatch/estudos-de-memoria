#include <iostream>
#include <string>

int main(){

    int contador1=0,contador2=0,contador3=0,contador4=0,contador5=0;
    std::string frase;
    std::cin>>frase;
    for(int l=0;l<frase.size();l++){
        if(frase[l]=='a'){
            contador1++;
        }
        if(frase[l]=='e'){
            contador2++;
        }

        if(frase[l]=='i'){
            contador3++;
        }

        if(frase[l]=='o'){
            contador4++;
        }

        if(frase[l]=='u'){
            contador5++;
        }
    
    }
    if(contador1>0){
        std::cout<<"a "<<contador1<<std::endl;
    }
    
    if(contador2>0){
        std::cout<<"e "<<contador2<<std::endl;
    }
    
    if(contador3>0){
        std::cout<<"i "<<contador3<<std::endl;
    }
    
    if(contador4>0){
        std::cout<<"o "<<contador4<<std::endl;
    }
    
    if(contador5>0){
        std::cout<<"u "<<contador5<<std::endl;
    }
    
}