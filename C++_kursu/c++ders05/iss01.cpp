#include <iostream>

double bolme(int a, int b){

    try
    {
        if (b<1)
        {   
            throw -1 ;
        }
        if (a<1)
        {
            throw "Sıfırı bölmek istemiyorum";
        }
        
        return a / b;
    }
    catch(const char* err)
    {
        std::cout << *err <<"Bir sayı sıfıra bölünemez";
    }
        catch(int err)
    {
        std::cout << err <<"Bir sayı sıfıra bölünemez";
    }
    

    
    return a / b;
}


int main(){
    
    std::cout<< bolme(0,10);
    
}