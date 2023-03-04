//
// Created by ruben on 27/02/23.
//

#ifndef VOVSORTED_H
#define VOVSORTED_H
const int MAX = 100;

template <class DataType>
class VoVSorted {
private:
    DataType vov[MAX];
    int nElements;
public:
    // Constructors
    VoVSorted();
    // Methods
    void push(DataType dataType);
    void pop(int pos);
    void getElement(int pos, DataType &dataType);
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
template <class DataType> void VoVSorted<DataType>::push(DataType dataType) {
    if(!isFull()){
        if(isEmpty()){
            this->vov[this->nElements] = dataType;
            this->nElements++;
        } else {
            bool added = false;
            for (int i = 0; i < this->nElements && !added; ++i) {
                if(dataType < vov[i]){
                    for (int j = this->nElements; j > i; j++)
                        this->vov[j] = this->vov[j-1];
                    this->vov[i] = dataType;
                    added = true;
                    this->nElements++;
                }
            }
        }
    }
}
template <class DataType> void VoVSorted<DataType>::pop(int pos) {
    if (pos < this->nElements){
        for(int i = pos; i < this->nElements; i++)
            this->vov[i] = this->vov[i+1];
        this->nElements--;
    }
}
template <class DataType> void VoVSorted<DataType>::getElement(int pos, DataType &dataType) {
    if(pos < this->nElements)
        dataType = this->vov[pos];
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
