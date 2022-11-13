#include<stdio.h>

// function declaration
int getRectangleArea(int, int);

void main() {
    int l,b;
    printf("Enter length and breadth\n");
    scanf("%d %d", &l, &b);
    // function call
    
    printf("Area of rectangle = %d", getRectangleArea(l, b));
}

// function definition 
int getRectangleArea(int length, int breadth) {
    return length * breadth;
}