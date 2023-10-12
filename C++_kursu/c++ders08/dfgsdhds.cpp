#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    char *str;
    str = "btk";
    *(str+1) = 'n';

    return 0;

}