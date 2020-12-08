#include <iostream>
#include <cstdio>
using namespace std;
#include "snake.h"

int main()
{
    int flag = 1;
    while(flag)
    {
        Snake snake;
        flag = snake.Start();
    }
    return 0;
}