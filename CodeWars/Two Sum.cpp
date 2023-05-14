#include <map>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target)
{
    std::pair<std::size_t, std::size_t> res;

    for (int i = 0; i < numbers.size(); i++)
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (target == numbers[i] + numbers[j])
            {
                res = std::make_pair(i, j);
            }
        }

    return res;
}
