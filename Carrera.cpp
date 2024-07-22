#include <iostream>
int main ()
{
    int valor;

    std::cout << "Coppel ya le dio trabajo chido por terminar su carrera?: 1=Y/0=N " << std::endl;
    std::cin >>valor;

    if (valor > 1){
        std::cout << "EEEHHH!! Error, entrada no valida we" << std::endl;
    }
    if (valor == 1)
    {
        std::cout << "se queda en coppel pero en algo chido" << std::endl;
    }else
    {
        std::cout << "Se va alv por algo mejor" << std::endl;
    }
    return 0;
}