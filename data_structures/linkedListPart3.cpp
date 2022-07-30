void imprimirLista(){
    Nodo<T>* current = this->head;
    while(current){
        cout << current->getDato() << " ";
        current = current->getNext();
    }
    cout << endl;
}
