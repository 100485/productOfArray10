#include <iostream>
using namespace std;

int main(){

    //Declaring and Initializing
    int Nums [10] = {10,20,30,40,50,60,70,80,90,100};
    int Product = 1;
    
for (int i = 0; i < 10; i++){
//Formula
Product= Product * Nums[i];

}
   cout << " The Product of the array is:"<< Product <<endl;

    return 0;

}