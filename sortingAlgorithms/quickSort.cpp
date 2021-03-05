#include <iostream>
#include <vector>
using namespace std;

int particion(vector<int>&arreglo,int inicio,int final){
    int pivote = arreglo[inicio];
    int i = inicio + 1;
    for(int j = i; j <= final; j++){
        if(arreglo[j] < pivote){
            swap(arreglo[i],arreglo[j]);
            i++;
        }
    }
    swap(arreglo[inicio],arreglo[i-1]);
    return i-1;
}

void quicksort(vector<int>&array,int inicio,int final){
    if(inicio < final){
        int pivote = particion(array,inicio,final);
        quicksort(array,inicio,pivote-1);
        quicksort(array,pivote+1,final);
    }
}

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> test1 = {15,0,2,10,20,17,5};
    imprimirArreglo(test1);
    quicksort(test1,0,test1.size()-1);
    imprimirArreglo(test1);
    return 0;
}

