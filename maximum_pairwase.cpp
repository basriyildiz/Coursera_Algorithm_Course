#include <iostream>
#include <vector>
#include <algorithm>

long int MaximumPairwise(const std::vector<long int>& numbers)
{
    long int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first)
    {
        for (int second = first + 1; second < n; ++second)
        {
            if (max_product < numbers[first] * numbers[second])
            {
                max_product = numbers[first] * numbers[second];
            }
        }
    }
    return max_product;
}

int main()
{
    int n;

    std::cin >> n;
    std::vector<long> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    std::cout << MaximumPairwise(numbers) << "\n";

    return 0;
}