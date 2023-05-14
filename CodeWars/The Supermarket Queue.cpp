#include <vector>

long queueTime(std::vector<int> customers, int n)
{
    std::vector<long> queues(n, 0);

    for (int i : customers)
        *std::min_element(queues.begin(), queues.end()) += i;

    return *std::max_element(queues.cbegin(), queues.cend());
}
