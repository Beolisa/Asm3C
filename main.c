#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ROW 9
#define MAX_COLUMN 9
#define MAX 100

typedef struct POINT
{
    int row;    //x coordinate
    int column; //y coordinate
    int value;  //0 or 1 value of a node
    bool isVisited;
    struct POINT* prev; //Pointer points to the previous node
} point_t;

point_t matrix[MAX_ROW][MAX_COLUMN];

//Setup Queue
typedef struct
{
    point_t data[MAX]; //Lưu trữ các node
    int front;  //Chỉ số đầu của hàng đợi
    int rear;   //Chỉ số cuối của hàng đợi
} Queue;

int main()
{
    
    printf("Hello world!!");
    return 0;
}