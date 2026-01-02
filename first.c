#include<stdio.h>

main(){
    int m1,m2,m3,m4,m5;
    float avg;

    printf("Enter marks of 5 subject : \n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    printf("Average = %.2f\n",avg);

    if (avg >= 90)
    {
        printf("Grade A");
    }
    else if (avg >= 80){
        printf("Grade B");
    }
    else if (avg >= 70){
        printf("Grade C");
    }
    else if (avg >= 60){
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    
}