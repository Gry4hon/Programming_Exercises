#include <iostream>
#include <thread>

int sumOfAll = 0;

void AddToSumOne(int rangeNumberLower, int rangeNumberUpper)
{

    for (int numberToAdd = rangeNumberLower; numberToAdd <= rangeNumberUpper; numberToAdd++)
    {
        sumOfAll += numberToAdd;
    }
}

void AddToSumTwo(int rangeNumberLower, int rangeNumberUpper)
{

    for (int numberToAdd = rangeNumberLower; numberToAdd <= rangeNumberUpper; numberToAdd++)
    {
        sumOfAll += numberToAdd;
    }
}
void AddToSumThree(int rangeNumberLower, int rangeNumberUpper)
{

    for (int numberToAdd = rangeNumberLower; numberToAdd <= rangeNumberUpper; numberToAdd++)
    {
        sumOfAll += numberToAdd;
    }
}
void AddToSumFour(int rangeNumberLower, int rangeNumberUpper)
{

    for (int numberToAdd = rangeNumberLower; numberToAdd <= rangeNumberUpper; numberToAdd++)
    {
        sumOfAll += numberToAdd;
    }
}

int main()
{

    std::thread portionOfRangeOne(AddToSumOne, 1, 250);
    std::thread portionOfRangeTwo(AddToSumTwo, 251, 500);
    std::thread portionOfRangeThree(AddToSumThree, 501, 750);
    std::thread portionOfRangeFour(AddToSumFour, 751, 1000);

    portionOfRangeFour.join();

    std::cout << "The sum of all numbers from 0 to 1000: " << sumOfAll << "\n";
    return 0;
}