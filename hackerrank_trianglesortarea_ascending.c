#include<stdio.h>
#include<math.h>
typedef struct
{
    int a, b, c;
    float area;
} triangle;
float triangle_area( int a, int b, int c)
{
    float s= (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    triangle t[n];
    for(i=0;i<n; i++)
    {
        scanf("%d %d %d",&t[i].a,&t[i].b,&t[i].c);
        t[i].area=triangle_area(t[i].a,t[i].b,t[i].c);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j< n-1-i; j++)
        {
            if(t[j].area> t[j+1].area)
            {
                triangle temp = t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d %d %d \n",t[i].a,t[i].b,t[i].c);
    }



}

