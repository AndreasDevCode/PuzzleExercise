#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Function that takes an int as parameter
// and return the int with the digits in reversed ordere 
int reverseInt(int x)
{
		if (x < 0)
		{
			int reverse = 0;
			while (x)
			{
				if (reverse < (INT_MIN - x % 10) / 10)
				{
					return 0;
				}
				reverse = reverse * 10 + x % 10;
				x /= 10;
			}
			return reverse;

		}
		else
		{
			int reverse = 0;
			while (x)
			{
				if (reverse > (INT_MAX - x % 10) / 10)
				{
					return 0;
				}
				reverse = reverse * 10 + x % 10;
				x /= 10;
			}
			return reverse;
		}
}
int removeDuplicates(std::vector<int>& nums) {
    int counter = 0;
    int temp = nums[0];
    for (int i : nums)
    {

        std::cout << i << "\n";
        if (temp != i)
        {
            temp = i;
            counter++;
            nums[counter] = temp;
        }
        else {
            nums[counter] = temp;
        }

    }
    return counter + 1;
}
bool isPalindrome(int x)
{
    std::string numb = std::to_string(x);
    std::string r(numb);
    std::reverse(r.begin(), r.end());
    std::cout << numb << std::endl;
    std::cout << r << std::endl;
    if (r.compare(numb) == 0)
    {
        return true;
    }
    return false;
}
std::vector<int> gradingStudents(std::vector<int> grades) {
    for (int& i : grades)
    {

        if (i % 5 > 2 && i >= 38)
        {
            i = i + 5 - i % 5;
        }
    }
    return grades;
}
void countApplesAndOranges(int s, int t, int a, int b, std::vector<int> apples, std::vector<int> oranges) {
    int app = 0;
    int ora = 0;
    for (int i : apples)
    {
        int drop = a + i;
        if (drop >= s && t >= drop)
        {
            app++;
        }
    }
    for (int i : oranges)
    {
        int drop = b + i;
        if (drop >= s && t >= drop)
        {
            ora++;
        }
    }
    std::cout << app << std::endl << ora << std::endl;

}
std::string kangaroo(int x1, int v1, int x2, int v2) {
    std::string answer = "YES";
    if (v2 > v1&& x2 > x1)
    {
        answer = "NO";
    }
    int x = v2 + v1;
    int y = x1 - x2;
    if (y % x != 0)
    {
        answer = "NO";
    }

    return answer;
}