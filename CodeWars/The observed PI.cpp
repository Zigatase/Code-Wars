#include <vector>
#include <string>

// This can also be implemented through a map

std::vector <std::vector <std::string>> PinBoard{
          {"0","8"},
          {"1","2","4"},
          {"1","2","3","5"},
          {"2","3","6"},
          {"1","4","5", "7"},
          {"2","4","5","6","8"},
          {"3","5","6","9"},
          {"4","7","8"},
          {"5","7","8","9","0"},
          {"6","8","9"}
};

std::vector<std::string> getVariForDigit(std::string observed, int indexDigit)
{
    std::vector<std::string> res;


    char currentDigit = observed[indexDigit];
    std::vector<std::string> digitPinBoard = PinBoard[currentDigit - '0'];


    if (indexDigit == observed.size() - 1)
        return digitPinBoard;


    std::vector<std::string> varForAllNextDigits = getVariForDigit(observed, indexDigit + 1);


    for (auto i = digitPinBoard.begin(); i != digitPinBoard.end(); i++)
        for (auto j = varForAllNextDigits.begin(); j != varForAllNextDigits.end(); j++)
            res.push_back(*i + *j);

    return res;
}

std::vector<std::string> get_pins(std::string observed)
{
    std::vector<std::string> res = getVariForDigit(observed, 0);

    return res;
}