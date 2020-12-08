/* 0. 【重要】自己另建文件夹在本地实现函数后在拷贝到共享文件夹中!!!
 * 1. 注意使用已定义的宏，如果有需要添加的宏可以在头文件中添加
 * 2. 函数如需添加参数，记得在头文件中修改
 * 3. 有需要添加的辅助函数自行填写声明
 * 4. 为了调试方便，可以在本地自行创建main.cpp单独调试自己的函数
 */

#include "snake.h"

void Snake::init()
{
    //重置随机数种子
	srand(time(0));

    //地图初始状态置空
    for(int i = 0; i < LENGTH; i++)
        for(int j = 0; j < WIDTH; j++)
            status[i][j] = NONE;
    
    //蛇的初始状态
    head = 3;
    tail = 0;
    length = 4;
	head_x = 3;
	head_y = 0;
    direction = RIGHT;

    //蛇坐标状态置零
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 400; j++)
            snake[i][j] = 0;
    for (int i = 0; i < 4; i++)//蛇的初始位置
	{
		snake[0][i] = i;
		snake[1][i] = 0;
		status[snake[1][i]][snake[0][i]] = BODY;//将蛇身状态保存
	}
    status[head_y][head_x] = 2;//蛇头

    //游戏初始状态
    score = 0;
    game_over = 0;
}

Snake::Snake()
{
    init();
}