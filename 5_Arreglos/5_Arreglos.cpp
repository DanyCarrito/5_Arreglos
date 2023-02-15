
#include <iostream>
#include "Arreglo.h"

int main()
{
    std::cout << "Ejemplo de arreglos\n";

    // arreglo estático

    int edades[] = { 18, 22, 32, 45, 61, 56, 98 };

    std::cout << "edades : " << edades << "\n";

    //iterar e imprimir los elementos del arreglo 
    for (int i = 0; i <= 16; i++) {
        std::cout << 
            "0x" << (edades+i)  << 
            " = " << edades[i] << "\n";
    }

    *(edades + 3) = 555;

    for (int i = 0; i < edadesCount; i++) {
        std::cout << edades[i] << "\n";
    }

    Arreglo* myArreglo = new Arreglo(2*1024*1024*1024);
    std::cout << "arreglo size" << myArreglo->Count() << "\n";

    myArreglo->setVal(10, 3.1416);
    myArreglo->setVal(12, 2.7182);
    myArreglo->setVal(15, 1.618);
    myArreglo->setVal(25, 1.618);

    myArreglo->print();

    system("pause");

    return 0;
}


