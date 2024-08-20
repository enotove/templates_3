#include <iostream>
#include <vector>
#include <algorithm>


struct Counter
{
private:

    size_t counter = 0;
    int sum = 0;
    void sum_and_counter(int i)
    {
        if (i % 3 == 0)
        {
            sum += i;
            counter += 1;
        }
    }

public:

    void operator ()(int number)
    {
        sum_and_counter(number);
    }
    
    int get_sum()
    {
        
        return sum;
    }
    int get_count()
    {
        return counter;
    }
};



int main()
{
    std::vector<int> arr = { 4, 1, 3, 6, 25, 54 };
    std::cout << "[IN]: ";
    for (int a : arr)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    Counter counter = for_each(arr.begin(), arr.end(), Counter());
    std::cout << "[OUT]: get_sum() = " << counter.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << counter.get_count() << std::endl;
   
    
}
