#include <iostream>

using namespace std;
int VeriPrimo(int a);
int Collatz(int x);

int main()
{
    int N;
    cout<<"Ingrese un numero: ";
    cin>>N;
    int cont=0;
    int salida;
    int num=2;
    do{
        bool veri=VeriPrimo(num);
        if(veri==true){
            salida=num;
            cont=cont+1;
        }
        num=num+1;
    }while(cont!=N);
    int elementos=Collatz(salida);
    cout<<"El numero primo en la posicion "<<N<<" es: "<<salida<<" ,y genera una serie de: "<<elementos<<" terminos."<<endl;
    return 0;
}
int VeriPrimo(int a){
   for(int ver=2;ver<a;ver++){
       if(a%ver==0){
           return false;
       }
   }
   return true;
}

int Collatz(int x){
    int cont=1;
    int aux=x;
    while(aux!=1){
        if(aux%2==0){
            aux=aux/2;
            cont=cont+1;
        }
        else{
            aux=(3*aux)+1;
            cont=cont+1;
        }

    }
    return cont;
}
