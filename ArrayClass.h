//
// Created by Erik Peterson on 9/7/20.
//

#ifndef TEMPLATEEXAMPLES_ARRAYCLASS_H
#define TEMPLATEEXAMPLES_ARRAYCLASS_H

template<typename T>
class ArrayClass {
public:
    ArrayClass(T theArray[], int arraySize)
    : theArray(theArray),
      arraySize(arraySize) {
    }

    T sumArray() const {
        T sum = 0;
        for (int i=0; i<arraySize; i++) {
            sum += theArray[i];
        }
        return sum;
    }

    T productOfArray() const {
        T product = 1;
        for ( int i=0; i<arraySize; i++) {
            product *= theArray[i];
        }
        return product;
    }
private:
    int arraySize;
    const T* theArray; // Remember that arrays are also pointers
};

#endif //TEMPLATEEXAMPLES_ARRAYCLASS_H
