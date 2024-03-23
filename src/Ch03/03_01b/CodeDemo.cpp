// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>


enum class cow_purpose {diary, meat, hide, pet};

class cow{
    std::string name;
    int age;
    cow_purpose purpose;

    public:
        cow(std::string cname, int cage, cow_purpose cpurpose){
            name = cname;
            age = cage;
            purpose = cpurpose;
        }

        std::string get_name() const{
            return name;
        }

        int get_age() const{
            return age;
        }

        cow_purpose get_purpose() const{
            return purpose;
        }

        std::string set_name(std::string cname){
            name = cname;
        }
};

int main(){

    cow_purpose a;

    a = cow_purpose::meat;

    cow my_cow("Hindy" , 7, cow_purpose::pet);

    std::cout << my_cow.get_name() << " is a type-" << (int) a << std::endl;
    std::cout << "This cow has " << my_cow.get_age() << " years old." << std::endl;
    return (0);
}
