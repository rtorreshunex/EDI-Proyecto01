//
// Created by ruben on 27/02/23.
//

#ifndef VOVSORTED_H
#define VOVSORTED_H

const int MAX = 200;

template <class DataType>
class VoVSorted {
private:
    DataType *vov[MAX];
    int nElements;
public:
    // Constructors
    /**
       * Pre       = {}
       * Post     = {Crea una nueva instancia de VoVSorted con cero elementos.}
       * Compl = O(1)
       * Desc:    Este es el constructor por defecto de la clase VoVSorted, que crea una nueva instancia de VoVSorted con cero elementos.
    */
    VoVSorted();

    // Methods
    /**
       * Pre       = {El objeto no está lleno}
       * Post     = {Agrega un nuevo elemento de tipo DataType en orden creciente en el vector interno de la instancia de VoVSorted}
       * Compl = O(n)
       * Desc:    Agrega un nuevo elemento de tipo DataType en orden creciente en el vector interno de la instancia de VoVSorted.
                  Si el vector está lleno, no hace nada.
    */
    void push(DataType *dataType);

    /**
       * Pre       = {0 <= pos < nElements}
       * Post     = {Elimina el elemento en la posicion pos}
       * Compl = O(n)
       * Desc: Elimina el elemento en la posicion pos y desplaza los elementos siguientes una posicion a la izquierda.
    */
    void pop(int pos);

    /**
       * Pre       = {0 <= pos < nElements, y dataType debe contener un valor válido}
       * Post     = {El puntero dataType apunta al elemento en la posicion pos del vector}
       * Compl = O(1)
       * Desc: Obtiene el elemento en la posicion pos del vector y lo asigna al puntero dataType.
    */
    void getElement(int pos, DataType *&dataType);
    /**
       * Pre       = {dataType debe contener un valor válido}
       * Post     = {Si el elemento dataType esta en el vector, el puntero dataType apunta al elemento encontrado y retorna true. De lo contrario, dataType no se modifica y se retorna false.}
       * Compl = O(log n)
       * Desc: Busca un elemento en el vector utilizando una búsqueda binaria y si lo encuentra, asigna el puntero dataType al elemento encontrado.
    */
    bool findElementByDataType(DataType *&dataType);

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo nElements}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo nElements del objeto VoVSorted.
    */
    int getNElements();

    /**
       * Pre       = {}
       * Post     = {Se devuelve true si el vector está vacío, false en caso contrario}
       * Compl = O(1)
       * Desc:    Este método comprueba si el vector del objetod VoVSorted está vacío
    */
    bool isEmpty();

    /**
       * Pre       = {}
       * Post     = {Se devuelve true si el vector está lleno, false en caso contrario}
       * Compl = O(1)
       * Desc:    Este método comprueba si el vector del objetod VoVSorted está lleno
    */
    bool isFull();

    // Destructors
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc:    Este es el destructor de la clase VoVSorted, se ejecuta cuando se destruye un objeto de esta clase.
    */
    ~VoVSorted();
};

// Constructors
template <class DataType> VoVSorted<DataType>::VoVSorted() {
    this->nElements = 0;
}
// Methods
template <class DataType> void VoVSorted<DataType>::push(DataType *dataType) {
    if(!isFull()){
        int pos = 0;
        while (pos < this->nElements && *dataType > *this->vov[pos]) {
            pos++;
        }
        for (int i = this->nElements; i > pos; i--) {
            this->vov[i] = this->vov[i-1];
        }
        this->vov[pos] = dataType;
        this->nElements++;
    }
}
template <class DataType> void VoVSorted<DataType>::pop(int pos) {
    if (pos < this->nElements){
        for(int i = pos; i < this->nElements; i++)
            this->vov[i] = this->vov[i+1];
        this->nElements--;
    }
}
template <class DataType> void VoVSorted<DataType>::getElement(int pos, DataType *&dataType) {
    if(pos < this->nElements)
        dataType = this->vov[pos];
}
template <class DataType> bool VoVSorted<DataType>::findElementByDataType(DataType *&dataType) {
    bool found = false;
    int start = 0;
    int end = this->getNElements();
    while(start <= end) {
        int middle = (start + end) / 2;

        if(*this->vov[middle] == *dataType){
            dataType = this->vov[middle];
            start = end + 1;
            found = true;
        } else if(*this->vov[middle] < *dataType)
            start = middle + 1;
        else end = middle - 1;
    }
    return found;
}
template <class DataType> int VoVSorted<DataType>::getNElements() {
    return this->nElements;
}
template <class DataType> bool VoVSorted<DataType>::isEmpty() {
    return (this->nElements == 0);
}
template <class DataType> bool VoVSorted<DataType>::isFull() {
    return (this->nElements == MAX);
}
// Destructors
template <class DataType> VoVSorted<DataType>::~VoVSorted() {}



#endif //VOVSORTED_H
