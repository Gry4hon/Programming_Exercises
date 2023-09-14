#include <iostream>

int FibonacciOfNumber(int sequenceNumber){
    int fibonacciOfNumber;


    int currentNumber = 1;
    int lastNumber = 0;
    for(int i=1; i < sequenceNumber; i++){
         fibonacciOfNumber = currentNumber + lastNumber;

         lastNumber = currentNumber;
         currentNumber = fibonacciOfNumber;
    }
    
    return fibonacciOfNumber;

}


int main(){

    int numberToFib = 8;

    std::cout<< "The fibonacci of " << numberToFib << " is " << FibonacciOfNumber(numberToFib) << "\n";
    return 0;
}