# Insertion sort (Ordenamiento por inserción)
If you want to see a full review of this code visit: https://www.youtube.com/watch?v=NKV0I3892eQ&t=11s
Si quieres ver una explicacion completa de este codigo visita: https://www.youtube.com/watch?v=NKV0I3892eQ&t=11s

```c++
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>&arreglo){
    for(int i = 1; i < arreglo.size(); i++){
        int j = i;
        int aux = arreglo[i];
        while(j > 0 && aux < arreglo[j-1]){
            arreglo[j] = arreglo[j-1];
            j--;
        }
        arreglo[j] = aux;
    }
}

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> test1 = {1,5,0,10,62,6,2,8,0,1,6};
    imprimirArreglo(test1);
    insertionSort(test1);
    imprimirArreglo(test1);
}

```
