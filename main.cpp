#include <iostream>
#include <iomanip>
#include "SumTemplate.h"
#include "ArrayClass.h"

using namespace std;

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    cout << "Int array sum: " << sumArray(intArray, 5) << endl;
    float floatArray[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    cout << "Float array sum: " << sumArray(floatArray, 5) << endl;

    ArrayClass<int> intArrayClass(intArray, 5);
    cout << "Int array sum: " << intArrayClass.sumArray() << endl;
    cout << "Int array product: " << intArrayClass.productOfArray() << endl;

    ArrayClass<float> floatArrayClass(floatArray, 5);
    cout << "Float array product: " << floatArrayClass.productOfArray() << endl;

    /* Won't work (can't assign 1 to a string)
    string stringArray[] = {"Hello", "there"};
    ArrayClass<string> stringArrayClass(stringArray, 2);
    cout << "String product: " << stringArrayClass.productOfArray() << endl;*/


    return 0;
}
