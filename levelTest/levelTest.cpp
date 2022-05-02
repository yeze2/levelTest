#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

void fibo()
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
}

void hanoi()
{
    int i = 0;
    int x = 1, y = 2, z = 3;
    // if(tower == 0 || tower > 맨위에있는거)
    
    std::cout << x << "in tower " << std::endl;
    
    // 패배


}

int main()
{
    Stack myStack;
    LinkedList myList;

    //fibo();
    //myStack.ShowStack();
    myList.ShowLinkedList();

    return 0;
}
