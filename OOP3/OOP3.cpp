#include <iostream>
#include "Array.h"
int main()
{
    ArrA arr;
    arr.Add(3);
    arr.Add(4);
    arr.Add(5);
    arr.Info();
    arr.Dell();
    arr.Info();
    
    arr = !arr;
    arr.Info();
    
    std::cout<<arr[1]<<','<<arr[0];
    
    return 0;
}
