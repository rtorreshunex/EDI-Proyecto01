//
// Created by ruben on 27/02/23.
//

#ifndef VOVUNSORTED_H
#define VOVUNSORTED_H

#include "constants.h"

template <class DataType>
class VoVUnsorted {
private:
    DataType vov[MAX];
    int nElements;
public:
    // Constructors
    VoVUnsorted();
    // Methods
    void push(DataType dataType);
    void pop(int pos);
    void getElement(int pos, DataType &dataType);
    int getNElements();
    bool isEmpty();
    bool isFull();
    // Destructors
    ~VoVUnsorted();
};

// Constructors
template <class DataType> VoVUnsorted<DataType>::VoVUnsorted() {
    this->nElements = 0;
}
// Methods
template <class DataType> void VoVUnsorted<DataType>::push(DataType dataType) {
    if(!isFull()){
        this->vov[this->nElements] = dataType;
        this->nElements++;
    }
}
template <class DataType> void VoVUnsorted<DataType>::pop(int pos) {
    if (pos < this->nElements){
        for(int i = pos; i < this->nElements; i++)
            this->vov[i] = this->vov[i+1];
        this->nElements--;
    }
}
template <class DataType> void VoVUnsorted<DataType>::getElement(int pos, DataType &dataType) {
    if(pos < this->nElements)
        dataType = this->vov[pos];
}
template <class DataType> int VoVUnsorted<DataType>::getNElements() {
    return this->nElements;
}
template <class DataType> bool VoVUnsorted<DataType>::isEmpty() {
    return (this->nElements == 0);
}
template <class DataType> bool VoVUnsorted<DataType>::isFull() {
    return (this->nElements == MAX);
}
// Destructors
template <class DataType> VoVUnsorted<DataType>::~VoVUnsorted() {}

#endif //VOVUNSORTED_H