#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {

    std::vector<int> zero{ input };

    for (int i = 0; i < zero.size(); i++)
    {
        if (zero[i] == 0)
        {
            zero.erase(zero.begin() + i);
            zero.push_back(0);
        }
    }

    return zero;
}
