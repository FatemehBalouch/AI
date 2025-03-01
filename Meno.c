#include <stdio.h>
#include <stdlib.h>

void fisaghors(){
    int a , b , c2;
    printf("Enter the a:");
    scanf("%d",&a);

    printf("Enter the b:");
    scanf("%d",&b);
    c2 = (a*a) +  (b*b);
    printf("c^2 it is : %d",c2);
}

void mosalas(){
    int b , h;
    float A;

    printf("Enter the b:");
    scanf("%d",&b);

    printf("Enter the h:");
    scanf("%d",&h);

    A = 0.5* b * h;
    printf("The Area it is : %f",(float)A);

}

void mostatil(){
    int lengh , width , A;

    printf("Enter the lengh:");
    scanf("%d",&lengh);

    printf("Enter the width:");
    scanf("%d",&width);
    A = lengh*width;
    printf("The Area it is : %d",A);


}

int main()
{
    printf("formol handase:\n");
    printf(" 1)fisaghors\n 2)masahat mosalas \n 3)masahat mostatil");
    printf("\n");
    printf("please enter the number of the Menu: ");
    int ans;
    scanf("%d",&ans);

    switch(ans)
    {
        case 1:
            fisaghors();
            break;
        case 2:
            mosalas();
            break;
        case 3:
            mostatil();
            break;
    }
    return 0;
}
