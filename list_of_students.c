#include<stdio.h>
int main()
{ int n,i;
 printf("Enter number of student: ");
 scanf("%d",&n);
    int student_arr[n];
 for(i=0;i<n;i++)
 {
    printf("%d. Marks: ",i+1);
    scanf("%d",&student_arr[i]);
 }
 printf("Grades:\n");
 for(i=0;i<n;i++)
 {
    if(student_arr[i]<=40)
    {
      printf("%d. Grade F\n",i+1);
    }
    else if(student_arr[i]>40&&student_arr[i]<=50)
    {
      printf("%d. Grade C\n",i+1);
    }
    else if(student_arr[i]>50&& student_arr[i]<=60)
    { 
      printf("%d. Grade B\n",i+1);
    }
   else if(student_arr[i]>60&& student_arr[i]<=80)
    {
      printf("%d. Grade A\n",i+1);
    }
    else    
    {
      printf("%d. Grade O\n",i+1);
    } 
 }
 printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
 return 0;
 }
 
    
