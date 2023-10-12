#include <iostream>

template <typename T>
T max(T a, T b){  // diğer değişkeni farklı yapabiliriz
    return (a > b) ? a:b ;
}



int main(){
    // std::cout << max(10.1,5.5);
    std::cout << max <int>(10,5);
}