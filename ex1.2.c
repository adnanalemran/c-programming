#include<stdio.h>

void main()
{
    int r;
    float pi=3.14,area,ci;
    printf("Enter the Radius of a Circle:");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of a Circle is: %f\n",area);
    ci=2*pi*r;
    printf("Circumference is: %f",ci);
}
