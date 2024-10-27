#include <stdio.h>
#include <stdlib.h>
double circle(double redius);
double circunference(double redius);
double Area (double redius);
int main()
{
    int redius;
    double diameter,area,circum;
     printf("Enter redius: ");
    scanf("%d", &redius);
  diameter=  circle(redius);
    circum=  circunference(redius);
      area=  Area(redius);
           printf("diametar is %0.1f\n",diameter);
           printf("circumference is %0.1f\n",circum);
           printf("area is %0.1f\n",area);
    return 0;
}
double circle(double redius){
      return(redius*2);
}
double circunference(double redius){
     return(redius*2*3.14);
}
double Area (double redius){
     return(redius*0.5*redius*3.14);
}
