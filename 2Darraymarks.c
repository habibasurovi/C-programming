#include<stdio.h>
int main()
{
    int i,j,sum,max;
    float avg;
    int marks[3][5]; //rows=3(student), columns=5( mark of each student)
    for(i=0; i<3; i++)//row wise operation
    {
        sum=0;

        printf("Enter the marks of student %d: ",i+1);
        for(j=0; j<5; j++)
        {
            scanf("%d", &marks[i][j]);
            printf(" marks %d\n", marks[i][j]);
        }
        max= marks[i][0];
        for(j=0; j<5; j++)
        {
            if(marks[i][j] > max)
            {
                max = marks[i][j];
            }
            sum=sum + marks[i][j];
        }
        printf("student %d's total marks %d\n",i+1,sum);
        avg= (float)sum/5;
        printf("avarage: %f\n",avg);
        printf("maximum:%d\n", max);


    }

}
