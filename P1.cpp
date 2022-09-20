#include<iostream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"Ingrese el número de valores que quiere que tenga el arreglo: ";
        cin>>n;
    }while(n<=0);

    int a;
    int numeros[n];
    for(a=0 ; a<n ; a++ ){
        cout<<"Ingrese el valor del arreglo en la posición "<< a+1 << ": ";
        cin>>numeros[a];
    }

    int i,j,min,aux;

    for(i=0 ; i<n ; i++){
        min = i; 
        for(j=i+1 ; j<n ; j++){
            if(numeros[j] < numeros[min]){
                min=j;
            }

        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min]=aux;
    }
    cout<<"Orden ascendente ";
    for(i=0 ; i<n ; i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden descendente ";
    for(i=n ; i>=0 ; i--){
        cout<<numeros[i]<<" ";
    }
    

}