#include <iostream>
#include <string>

void loop(std::string t, int a) {
    for (int i=0; i<a; i++)
        std::cout << t;
}

void print(std::string greet, std::string name, int a, int width) {
    loop ("*", a);
    std::cout << std::endl;
    for (int i=0; i<(width-3)/2; i++){
        std::cout << "*";
        loop (" ", a-2);
        std::cout << "*" << std::endl;
    }
    std::cout << greet << name << "! *" << std::endl;
    for (int i=0; i<(width-3)/2; i++){
        std::cout << "*";
        loop (" ", a-2);
        std::cout << "*" << std::endl;
    }
    loop ("*", a);
    std::cout << std::endl;
}

int main() {
    std::string name;
    std::cout << "Iveskite savo varda: ";
    std::cin >> name;
    int width;
    int a = name.length();

    std::cout << "Nurodykite remelio ploti: ";
    std::cin >> width;
    
    if (name[a-1]=='a' || name[a-1]=='e'){
        print ("* Sveika, ", name, a+13, width);
    }
    else {
        print ("* Sveikas, ", name, a+14, width);
    }
}
