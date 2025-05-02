#include <iostream>

int main(){
    
    int x = 10; //Integer
    float y = 5.5; //Float
    double z = 10.55555; //Double
    char c = 'A'; //Character
    bool isTrue = true; //Boolean
    std::string str = "Hello, World!"; //String

    int arr[5] = {1, 2, 3, 4, 5}; //Array
    int* ptr = &x; //Pointer
    int** ptrToPtr = &ptr; //Pointer to Pointer
    std::string* strPtr = &str; //Pointer to String
    std::string** strPtrToPtr = &strPtr; //Pointer to Pointer to String
    std::string& strRef = str; //Reference to String
    std::string* strArr[5]; //Array of Pointers to String
    std::string strArr2[5] = {"Hello", "World", "C++", "Programming", "Language"}; //Array of Strings
    std::string strArr3[5][5]; //2D Array of Strings
    std::string strArr4[5][5] = {{"Hello", "World"}, {"C++", "Programming"}, {"Language", "Example"}}; //2D Array of Strings with Initialization

    int sum = x + x;
    std:: cout << sum << std::endl;

//calculate the circumference of a circle
    const double PI = 3.14159;
    double radius =  14;
    double circumference = 2 * PI * radius;
    std::cout << circumference << " centimeters";
    return 0;
}