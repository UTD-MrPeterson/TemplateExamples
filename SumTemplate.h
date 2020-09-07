//
// Created by Erik Peterson on 9/7/20.
//

#ifndef TEMPLATEEXAMPLES_SUMTEMPLATE_H
#define TEMPLATEEXAMPLES_SUMTEMPLATE_H

template<typename T>
T sumArray(T theArray[], int sizeOfArray) {
    T sum = 0;
    for ( int i=0; i<sizeOfArray; i++) {
        sum += theArray[i];
    }
    return sum;
}

#endif //TEMPLATEEXAMPLES_SUMTEMPLATE_H
