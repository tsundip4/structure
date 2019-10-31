#include <stdio.h>
#include <stdlib.h>
/*
struct student// struct is a keyword for creating structure
{
    int roll;// roll is a member variable of integer data type
    char name[10];
    int marks;
}info;// here info is a structure variable whose name is info which is global variable


int main()
{
    info.roll=10;
    strcpy(info.name, "sandeep");
    info.marks= 75;

    printf("%d %s %d", info.roll, info.name, info.marks);

    return 0;
}
*/
/* data structure for accessing of structure through pointer */
/*
struct car
{
    int car_model;
    char color[10];
    int miles;
};// structure declaration
void func(struct car *suzuki);
int main()
{
    struct car nano;// local variable declaration
    struct car suzuki;//
    printf("enter the car model color and miles for nano");
    scanf("%d %s %d", &nano.car_model, &nano.color, &nano.miles);// allowing value for each member of struct block
    printf("car model: %d , nano color: %s  ,miles: %d\n", nano.car_model, nano.color, nano.miles);
    func(&suzuki);

}
void func(struct car *suzuki){
    printf("enter the car model color and miles for suzuki\n");
    scanf("%d %s %d", &suzuki->car_model, &suzuki->color, &suzuki->miles);//-> is the method of entering and accessing of the using pointer
    printf("car model: %d ,  color: %s  ,miles: %d", suzuki->car_model, suzuki->color, suzuki->miles);

}
*/

/* passing of structure variable through function*/
/*
struct student
{
    int roll;
    char name[10];
    int rank;
};
void print(struct student rank1);
int main()
{
    struct student info;
    info.roll = 10;
    strcpy(info.name, "sandeep");
    info.rank = 4;
    print(info);
}
void print(struct student rank1)
{
    printf("%d %s %d", rank1.roll, rank1.name, rank1.rank);
}

*/
/* array in c structure*/
/*
struct student
{
    int roll;
    char name[20];
    int marks;
}info[2];// this will create two structure

int main()
{
    int i;
    printf("take the information of 5 students\n");
    // using of loop for user input
    for(i=0; i<2; i++){
      scanf("%d\n", &info[i].roll);
      scanf("%s\n", &info[i].name);
      scanf("%d", &info[i].marks);
    }
    printf("\n");

    // use of for loop for ptinting the value from user
    for(i=0; i<2; i++){
    printf("student information: %d\n", i+1);
    printf("Roll:%d\n", info[i].roll);
    printf("name:%s\n", info[i].name);
    printf("Marks:%d\n", info[i].marks);
    }
}
*/







