#include<stdio.h>
struct emp{
int age;
int phno;
char ename[20];
float esal;	
};
int main(){
int j;
struct emp e;
printf("Enter Employee detail \n");
printf("Enter phno:-\t");
scanf("%d",&e.phno);
printf("age.:-t");
scanf("%d",&e.age);
printf("Emp Name:-\t");
scanf("%s",&e.ename);
printf("Emp salary:-\t");
scanf("%f" ,&e.esal);
printf("\n\n");

printf("Enter 1 to print");
scanf("%d",&j);
if(j==1){
printf("Employee details are \n \n Employee name:-\t%s \n Employee age:-\t%d\n Employee salary:- \t%f Employee phone number:- \t%d",e.ename,e.age,e.esal,e.phno);	
}
else
exit(1);
}
