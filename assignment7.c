#include <stdio.h>
struct student
{
 int rollno;
 char name[30];
 float marks;
 };
 int main(){
 struct student s[3];
 int i;
 for(i=0;i<3;i++){
 printf("enter roll no, name and marks: ");
 scanf("%d %29s %f", &s[i].rollno, s[i].name, &s[i].marks );
 }
 for(i=0;i<3;i++){
 printf("%d %29s %f", s[i].rollno, s[i].name, s[i].marks );
 }
 return 0;
 }
