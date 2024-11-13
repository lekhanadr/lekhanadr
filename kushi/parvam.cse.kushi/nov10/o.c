#include<stdio.h>
struct Address{
    char street[50];
    char city[50];
};
struct person{
    char name[50];
    struct Address addr;
    };