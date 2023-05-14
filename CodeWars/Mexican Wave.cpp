#include <vector>
#include <string>

std::vector<std::string> wave(std::string y) {

    std::vector<std::string> res;
    std::string temp = y;


    if (y.size() == 0)
        return { };


    for (int i = 0; i < y.size(); i++)
    {
        if (y[i] == ' ')continue;

        temp[i] = std::toupper(temp[i]);

        res.push_back(temp);

        temp = y;
    }

    return res;
}
