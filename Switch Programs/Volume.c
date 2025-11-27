#include <stdio.h>
int main() {
    int ch;
    float s,l,br,h,r,v;
    printf("---- VOLUME CALCULATOR ----\n");
    printf("1. Volume of Cube\n");
    printf("2. Volume of Cuboid\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Enter side of cube: ");
            scanf("%f", &s);
            v= s*s*s;
            printf("Volume of Cube = %.2f\n", v);
            break;
        case 2:
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Enter breadth: ");
            scanf("%f", &br);
            printf("Enter height: ");
            scanf("%f", &h);
            v= l*br*h;
            printf("Volume of Cuboid = %.2f\n",v);
            break;
        case 3:
            printf("Enter radius of sphere: ");
            scanf("%f", &r);
            v= (4.0/3.0)*3.14*r*r*r;
            printf("Volume of Sphere = %.2f\n",v);
            break;
        default:
            printf("Invalid choice!\n");
    }
return 0;
}
