#include "LibLeet.h"


int gcd(int a, int b)
{
    while (b > 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}
int getTotalX(std::vector<int> a, std::vector<int> b) 
{
    // find lcm
    int resA = a[0];
    for (int i = 1; i < int(a.size()); i++)
    {
        resA = lcm(resA, a[i]);
    }

    int resB = b[0];
    for (int i = 1; i < int(b.size()); i++)
    {
        resB = gcd(resB, b[i]);
    }

    int counter = 0;
    for (int i = resA, j = 2; i <= resB; i = resA * j, j++)
    {
        if (resB % i == 0)
        {
            counter++;
        }
    }
    std::cout << counter;
    return counter;
}

int main()
{
 
    std::vector<int> a{ -2 ,2,1};
    std::vector<int> o{ 5,-6};
    countApplesAndOranges(7,11,5,15,a,o);



    
	
	return 0;
}