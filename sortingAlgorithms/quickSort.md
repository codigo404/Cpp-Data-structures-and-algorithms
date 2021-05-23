# Quick Sort (ordenamiento rápido)
If you want to see a full review of this code visit: https://www.youtube.com/watch?v=PupaczLYxmA&t=2s
Si quieres ver una explicación completa de este codigo visita: https://www.youtube.com/watch?v=PupaczLYxmA&t=2s

```C++

int particion(vector<int>&array,int inicio, int fin){
    int pivote = array[inicio];
    int i = inicio + 1;
    for(int j = i; j <= fin; j++){
        if(array[j] < pivote){
            swap(array[i],array[j]);
            i++;
        }
    }
    swap(array[inicio],array[i-1]);
    return i-1;
}

void quickSort(vector<int>&arreglo, int inicio, int fin){
    if(inicio < fin){
        int pivote = particion(array,inicio,fin);
        quickSort(array,inicio,pivote-1);
        quickSort(array,pivote+1,fin);
    }
}

void imprimirArreglo(vector<int>array){  
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

```
