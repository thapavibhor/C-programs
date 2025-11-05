#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5,r;
    printf("Enter the marks of given subject out 0f 100 \n");
    printf("English =");
    scanf("%f",&s1);
    printf("Hindi =");
    scanf("%f",&s2);
    printf("Math =");
    scanf("%f",&s3);
    printf("Science =");
    scanf("%f",&s4);
    printf("SST =");
    scanf("%f",&s5);
    r=((s1+s2+s3+s4+s5)/500)*100;
    printf(" percentage %f \n",r);
    if (r>=90){
        printf("Garde A1");
    }
    else if (r<=90 && r>80){
        printf("Garde A2");
    }
    else if (r<=80 && r>70){
        printf("Garde B1");
    }
    else if (r<=70 && r>60){
        printf("Garde B2");
    }
    else if (r<=60 && r>50){
        printf("Garde C1");
    }
    else if (r<=50 && r>40){
        printf("Garde C2");
    }
    else if (r<=40 && r>35){
        printf("Garde D");
    }
    else if (r<=35 && r>0){
        printf("Garde E");
    }
return 0;

}