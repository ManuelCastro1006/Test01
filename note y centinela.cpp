#include <iostream>
int main()
{
    int nota, suma=0, cont=0;
    const int centinela =-1;
    std::cout<<"Ingrese la nota (-1) para finalizar: ";
    std::cin>>nota;
    while (nota != centinela)
    {
        suma += nota;
        ++cont;
        std::cout<<"Ingrese la nota (-1) para finalizar: ";
        std::cin>>nota;
    }
    if (cont != 0)
    {
        double promedio = static_cast<double> (suma) / cont;
        std::cout<< "El promedio de nota es: " << promedio << std::endl;
    }else{
        std::cout<<"No se ingresaron notas"<<std::endl;
    }
    return 0;
}