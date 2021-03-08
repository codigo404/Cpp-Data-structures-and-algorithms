# Bubble Sort
```c++
//CODIGO 404 YOUTUBE
#include <iostream>
#include <vector>
using namespace std;

void swap(int& num1, int& num2){
    int temporal = num1;
    num1 = num2;
    num2 = temporal;
}

void bubbleSort(vector<int>&arreglo){  //Complejidad computacional de O(n²)
    bool bandera = true;
    for(int i = 0; i < arreglo.size()-1; i++){
        bandera = false;
        for(int j = 0; j < arreglo.size()-1-i && bandera; j++){
            if(arreglo[j+1] < arreglo[j]){
                swap(arreglo[j+1],arreglo[j]);
                bandera = true;
            }
        }
    }
}

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> arreglo_video = {12,2,20,5};
    cout << "Arreglo desordenado: "; imprimirArreglo(arreglo_video); //Arreglo desordenado
    bubbleSort(arreglo_video); //Ordena el arreglo
    cout << "Arreglo ordenado: "; imprimirArreglo(arreglo_video); //arreglo ordenado
    return 0;
}

```
