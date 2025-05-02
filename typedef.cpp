#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pair_list_t;

//typedef std::string str_t;
//typedef int num_t; 

//**typedef has been replaced with using in C++11 and later since it is more readable and useful for templates.*/

using str_t = std::string;
using num_t = int;

int main() {
        
    str_t name = "Vicky";
    std::cout << "Name: " << name << std::endl;
    num_t age = 17;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
    

