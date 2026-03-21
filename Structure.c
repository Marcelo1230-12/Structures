//
// Created by marce on 3/21/2026.
//Create a program to find the difference between tree complex numbers

#include <stdio.h>
 typedef struct {

  int real;
  int imaginary;
 }complex;

int main() {
complex c1 = {.real =10, .imaginary=20.2 };
 complex c2 = {.real =30, .imaginary=30.3 };
 complex c3 = {.real =50, .imaginary=40.4 };
 complex sub;
 sub.real = c1.real - c2.real-c3.real;
 sub.imaginary = c1.imaginary - c2.imaginary-c3.imaginary;
 printf("real: %d,\nimaginary:%di",sub.real,sub.imaginary);
}