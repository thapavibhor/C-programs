#include<stdio.h>
int main(){
    double a,r,gst,f,sc,u;
    printf("Enter the total amount of units consumed : ");
    scanf("%lf",&u);
    if (u<=100){
        r=u*3.40;
    }
    else if (u<=200 && u>100){
        a=u-100;
        r=(100*3.40)+(a*4.30);    
    }
    else if (u<=400 && u>200){
        a=u-200;
        r=(100*3.40)+(100*4.30)+(a*6.70);
    }
    else if (u>400){
        a=u-400;
        r=(100*3.40)+(100*4.30)+(100*6.70)+(a*7.35);
    }
    gst=r*0.0006;    
    f=18;
    sc=4;
    printf("+-------------Electricity bill--------------\n");
    printf("|Energy Charges:                        %lf \n",r);
    printf("|Fixed Charges (FC):                    %lf \n",f);
    printf("|Electricity Duty (ED) and Taxes:       %lf \n",gst);
    printf("|Surcharges/Other Fees:                 %lf \n",sc);
    printf("|Total bill:                            %lf \n",(r+f+gst+sc));
    printf("+-------------------------------------------\n");
return 0;
}