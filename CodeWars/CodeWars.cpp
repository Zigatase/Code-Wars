#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> zero { 1, 2, 0, 1, 0, 3, 0, 1  };

    for (int i = 0; i < zero.size(); i++)
    {
        if (zero[i] == 0)
        {
            zero.erase(zero.begin() + i);
            zero.push_back(0);
        }
    }

    return 0;
}