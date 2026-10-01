#include<stdio.h>
struct Student
{
int id;
char name[20];
};
int main()
{
struct Student s1;
s1.id=1001;
printf("学号:%d\n",s1.id);
struct Student*p=&s1;
printf("指针访问学号:%d\n",p->id);
return 0;
};
