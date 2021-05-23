# singly Linked List part 2 | Lista enlazada simple parte 2
## delete head, delete at tail, delete by data | Eliminar inicio, eliminar final, eliminar por dato

if you want to see full explanation visit this link: https://www.youtube.com/watch?v=J8kYAgkxeFs&t=45s
Si quieres ver como realizamos este codigo, visita: https://www.youtube.com/watch?v=J8kYAgkxeFs&t=45s

```c++

void eliminarInicio(){
        Nodo<T>* current = this->head;
        this->head = this->head->getNext();
        current->setNext(nullptr);
        delete current;
        this->size--;
    }

    void eliminarFinal(){
        if(this->head){
            Nodo<T>*current = this->head;
            Nodo<T>*prev = nullptr;
            while(current->getNext()){
                prev = current;
                current = current->getNext();
            }
            if(current == this->head){
                this->head = this->head->getNext();
                delete current;
                this->size--;
            }else{
                prev->setNext(nullptr);
                delete current;
                this->size--;
            }
        }else{
            cout << "La lista esta vacia" << endl;
        }
    }

    void eliminarPorDato(T valor){
        if(this->head){
            Nodo<T>* current = this->head;
            Nodo<T>* prev;
            while(current){
                if(current->getDato() == valor && this->head == current){
                    eliminarInicio();
                    break;
                }
                else if(current->getDato() == valor && current->getNext() == nullptr){
                    eliminarFinal();
                    break;
                }
                else if(current->getDato() == valor && current->getNext() != nullptr){
                    prev->setNext(current->getNext());
                    current->setNext(nullptr);
                    delete current;
                    this->size--;
                }
                else{
                    prev = current;
                    current = current->getNext();
                }
            }
        }else{
            cout << "La lista esta vacia" << endl;
        }
    }

```
