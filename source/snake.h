#pragma once
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <random>
#include <time.h>

//地图的长和宽
#define LENGTH 20
#define WIDTH 20

//地图状态
#define NONE 0
#define HEAD 1
#define BODY 2
#define FOOD 3

//方向
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

class Snake
{
private:
    int status[LENGTH][WIDTH];          //20x20地图位置的状态，0表示无，1表示蛇头，2表示蛇身，3表示食物
    int snake[2][400];                  //记录蛇身的坐标，2表示横纵坐标，400表示蛇身节点
	int head_x, head_y;                 //蛇头的坐标
	int head, tail;                     //头和尾在snake中的下标
	int length;                         //蛇的长度

	int food_x, food_y;                 //食物的坐标
	int direction;                      //方向 72上 80下 75左 77右

    int score;                          //得分
    bool game_over;                     //判断游戏结束

    //初始化
    void init();
    //打印地图，根据status数组打印对应符号，需要根据修改的地方（蛇头、食物）移动光标位置
    void print_map();
    //移动蛇，需要修改蛇的坐标和地图状态
    void move();
    //生成食物，需要修改食物坐标和地图状态
    void create_food();
    //add more functions here
public:
    //构造函数
    Snake();
    //析构函数
    ~Snake();
    //开始游戏，返回值为1时继续游戏，为0时退出游戏
    int Start();
};