#include <stdio.h>
#include <stdbool.h>
#define PI 3.14

int o;
float radius;
bool cond = true;

void main(){
    while (cond){
        printf("\n=================== MENU ===================\n");
        printf("\t1) Area Of A Circle\n");
        printf("\t2) Circumference Of A Circle\n");
        printf("\t3) Exit\n");
        printf("============================================\n");

        printf("\nEnter Your Option: ");
        scanf("%d", &o);

        switch (o){
            case 1:
                printf("\nEnter The Radius: ");
                scanf("%f", &radius);

                float area = PI*radius*radius;
                printf("\nArea Of The Circle = %.2f\n", area);
                break;

            case 2:
                printf("\nEnter The Radius: ");
                scanf("%f", &radius);

                float circ = 2*PI*radius;
                printf("\nCircumference Of The Circle = %.2f\n", circ);
                break;

            case 3:
                printf("Closing...");
                cond = false;
                break;
            
            default:
                printf("\nPlease Enter A Valid Option!\n");
                break;
        }
    }
}