#include <iostream>
using namespace std;


namespace first{
    int x=1;
    int y=2;
}

namespace second{
    int x=3;
    int y=29;
}

main(){

    using namespace second;
    int x=5;
    int y = 6;

    cout << "x: "<<x;
    cout << "y: "<<y;

    return 0;
}