//
// Created by ruben on 27/02/23.
//

#ifndef VOVSORTED_H
#define VOVSORTED_H

#include "constants.h"

template <class DataType>
class VoVSorted {
private:
    DataType *vov[MAX];
    int nElements;
public:
    // Constructors

    // Pre   = { }
    // Compl = O(1)
    // Desc: Constructor por defecto.
    VoVSorted();
    // Methods
    void push(DataType *dataType);
    void pop(int pos);
    void getElement(int pos, DataType *&dataType);
    bool findElementByDataType(DataType *&dataType);
    int getNElements();
    bool isEmpty();
    bool isFull();
    // Destructors
    ~VoVSorted();
};

// Constructors
template <class DataType> VoVSorted<DataType>::VoVSorted() {
    this->nElements = 0;
}
// Methods
/*
 * PRE:
 * POST:
 * COM: O(n)
 */
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
