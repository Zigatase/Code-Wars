#include <vector>


static long findMissing(std::vector<long> list) {

    long arf = list[2] - list[1];

    if (arf == 0)
        return 0;

    int test;

    for (auto i = list.begin(); i < list.end(); i++)
    {
        test = *i + arf;

        bool p = std::find(list.begin(), list.end(), test) != list.end();

        if (p == 0)
        {
            return test;
        }
    }
}