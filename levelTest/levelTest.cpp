#include <iostream>

int main()
{
    //-----피보나치----
    int num = 0;
    int t1 = 0, t2 = 1;
    int fibo = 0;

    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        std::cout << t1 << std::endl;
        fibo = t1 + t2;
        t1 = t2;
        t2 = fibo;
    }

    //-----------------


    return 0;
}
