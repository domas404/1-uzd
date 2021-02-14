#include <iostream>
#include <string>

int main() {
    std::string eil1, eil2, eil3;
    std::string name;
    std::cout << "Iveskite savo varda: ";
    std::cin >> name;
    int a = name.length();
    
    for (int i=0; i<a+14; i++)
        eil1 += "*";
    
    eil2 = "*";
    for (int i=0; i<a+12; i++)
        eil2+=" ";
    eil2 += "*";
    
    eil3 = "* Sveikas, "+ name + "! *";
    
    std::cout << eil1 << std::endl;
    std::cout << eil2 << std::endl;
    std::cout << eil3 << std::endl;
    std::cout << eil2 << std::endl;
    std::cout << eil1 << std::endl;
}
