# Structures
how structures works







+++++++++++++++




Structures

is helpful to collect data in a single variable, grouping related data of different types in an sinle space, this is use most for
organize data combining related variables into a single unit
ex. lets support we want a student information




struct Student student{

char name[50];

int age;

double GPA;

}

struct student std1={"Sofia", 21,3.0};


Also is used to functions Parameters that pass multiples related values to functions using a single struct , helping to avoid to type every single parameter
in more advance ways this is helpful to create linked list, binary trees or inclusive graphs where nodes are create.
helps to have a manage in memory  use the function [malloc()] to allocate memory dynamically for data types to make a programs more scalable

we can use typedef in structures to create more simple the struct
ex


typedef struct{

char name[50];

int age;

double GPA;

}Student;

Strudent std1 = {"Sofia", 21,3.0};

more simple to read
notice that the name of the struct is in the bottom part of the structure so we can only use Student as a the reference of the structure

to access to a structure we can use a '.' operator
std1.age;
if we print this the out put is the age of the strudent '21'

+++++++++++
