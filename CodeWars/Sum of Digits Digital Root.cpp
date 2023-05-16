
int digital_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int digital_root(int n)
{
    while (n >= 10)
        n = digital_sum(n);
    return n;
}