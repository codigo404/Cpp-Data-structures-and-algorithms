#include <iostream>
#include <vector>
using namespace std;

void swap(int& num1, int& num2){
    int auxiliar = num1;
    num1 = num2;
    num2 = auxiliar;
}

void selectionSort(vector<int>&arreglo){
    int indice_menor;
    for(int i = 0; i < arreglo.size()-1; i++){
        indice_menor = i;
        for(int j = i + 1; j < arreglo.size(); j++){
            if(arreglo[j] < arreglo[indice_menor]){
                indice_menor = j;
            }
        }
        swap(arreglo[i],arreglo[indice_menor]);
    }
}

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> test1 = {10,0,12,2,5,1,20,43,4,3};
    imprimirArreglo(test1);
    selectionSort(test1);
    imprimirArreglo(test1);
    return 0;
}
