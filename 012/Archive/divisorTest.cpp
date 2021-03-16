#include <iostream>
#include <limits>
#include <cmath>
int highlyDivisibleTriangularNum();

int main() {
std::cout <<highlyDivisibleTriangularNum() << std::endl;
return 0;
}

int highlyDivisibleTriangularNum()
{
//The number to be added to all the previous numbers
int i = 1;
//The number that adds all the previous numbers
int overallAdd = 0;
//Max number
int max = std::numeric_limits<int>::max();
for(int counter = 0; counter < max; counter++)
{
    int total = 0;
    int sum = overallAdd + i;
    i++;
    overallAdd = sum;

    int sqrtSum = (int)sqrt(sum);
    for(int c = 1; c <=sqrtSum;c++)
    {
        if(sum%c == 0)
        {
            total += 2;
        }
        if(total > 500)
        {
            return sum;
        }
    }

}
return 0;
}
