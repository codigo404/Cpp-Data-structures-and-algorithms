#include <iostream>
#include <vector>
using namespace std;

void swap(int &a,int &b){
    int aux = a;
    a = b;
    b = aux;
}

void IntercambioSort(vector<int>&array){ 
    int auxiliar;
    for(int i = 0; i < array.size()-1; i++){
        for(int j = i + 1; j < array.size(); j++){
            if(array[j] < array[i]){
                swap(array[j],array[i]);
            }
        }
    }
}

void imprimirArreglo(vector<int>array){  
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> test1 = {12,6,2,83,9,3,0};
    imprimirArreglo(test1);
    IntercambioSort(test1);
    imprimirArreglo(test1);
    return 0;
}
