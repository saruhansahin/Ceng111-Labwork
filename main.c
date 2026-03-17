#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define PI 3.14

int lab2_1(void){
    printf("Name:Saruhan\nSurname:Sahin\nAge:18\nHomeown:Kirikkale");

    return 0;
}
int lab2_2(void){
    printf("***********\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n***********");
    return 0;
}
int lab2_3(void){
    int x;
    x = 10;
    int y;
    y = 7;
    printf("Value of variable x is: %d\n", x);
    printf("Value of variable y is: %d", y);

    return 0;
}
int lab2_4(void){
    char x;
    x = 'A';
    float y;
    y= 3.45645;
    printf("The letter grade is: %c ", x);
    printf("and its coefficient is: %f", y);

    return 0;
}
int lab3_1(void){
    float r;
    printf("Enter Radius:");
    scanf("%f",&r);
    float v;
    v = r*r*r*PI*4/3;
    printf("The volume of the sphere wih radius %f is:%.2f", r, v);
    return 0;
}
int lab3_2(void){
    int mid;
    printf("Enter Midterm Grade: ");
    scanf("%d",&mid);
    int fin;
    printf("Enter Final Grade: ");
    scanf("%d",&fin);
    int lab;
    printf("Enter Labratory Grade: ");
    scanf("%d",&lab);
    int hom;
    printf("Enter Homework Grade: ");
    scanf("%d",&hom);
    float tot;
    tot = mid * 0.3 + fin * 0.4 + lab * 0.2 + hom * 0.1;
    printf("Total Grade is:%.2f", tot);
    return 0;
}
int lab3_3(void){
    double bud;
    printf("Enter your budget: ");
    scanf("%lf",&bud);
    double tech;
    printf("Enter your technology expenses: ");
    scanf("%lf",&tech);
    double ent;
    printf("Enter your entertainment expenses: ");
    scanf("%lf",&ent);
    double gro;
    printf("Enter your grocery expenses: ");
    scanf("%lf",&gro);
    double per;
    double last;
    last=bud-tech-ent-gro;
    per = (last/bud)*100;
    printf("You still have %.2lf percent of your money, and it is %.2lf\$" , per,last);
    return 0;
}
int lab3_4(void){
    float a;
    printf("Enter a : ");
    scanf("%f",&a);
    float b;
    printf("Enter b : ");
    scanf("%f",&b);
    float c;
    printf("Enter c : ");
    scanf("%f",&c);
    float func1;
    func1= sqrt(a*a*a*a*a+(b*(1100/(c*c*c))*5*4));
    
    printf("Result of Function 1 is:%f\n", func1);
    float func2;
    func2= b*b-4*a*c+(57.0/75)*21;
    
    printf("Result of Function 2 is:%f\n", func2);
    float func3;
    func3= 5*(c*c*c*c*c*c*c + 2*b + (9*a/99));
    
    printf("Result of Function 3 is:%f\n", func3);
    return 0;
}
int lab4_1(void){
    float x;
    float y;
    printf("Enter x:");
    scanf("%f",&x);
    printf("Enter y:");
    scanf("%f",&y);
    if(x>0 && y>0){
        printf("The point (%.1f, %.1f) lies in I. quadrant.", x, y);
    } else if (x<0 && y>0){
        printf("The point (%.1f, %.1f) lies in II. quadrant.", x, y);
    }else if (x<0 && y<0){
        printf("The point (%.1f, %.1f) lies in III. quadrant.", x, y);
    }else if (x>0 && y<0){
        printf("The point (%.1f, %.1f) lies in IV. quadrant.", x, y);
    } else {
        printf("Enter Valid Numbers");
    }
    
    return 0;
}
int lab4_2(void){
    double x;
    printf("Enter m3 of natural gas:");
    scanf("%lf",&x);
    x *= 5;
    if(x<100){
        printf("Your bill is %.1lf\$ and your natural gas consumption is OK", x);
    } else if (x>= 100 && x<=200){
        printf("Your bill is %.1lf\$ and your natural gas consumption is above average." , x);
    }else if(x>200){
        printf("Your bill is %.1lf\$ and your natural gas consumption is excessively high!", x);
    } else {
        printf("Enter Valid Numbers");

    }
    
    return 0;
}
int lab4_3(void){
    float x;
    float y;
    float z;
    printf("Enter three angles of the triangle:",x,y,z);
    scanf("%f %f %f",&x,&y,&z);
    
    if(x+y+z==180){
        if (x==60 && y==60 && z==60){
            printf("This is a valid triangle and it is an equilateral one!");

        }else if(x==y || x==z || y==z){
            printf("This is a valid triangle and it is an isosceles one!");
        }else{
            printf("This is a valid triangle.");
        }
        
    }
    else {
        printf("This is not a valid triangle.");
    }
    
    return 0;
}
int lab4_4(void){
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    
    if ((65<=x && x<=90)||(97<=x && x<=122)){
        if(x==toupper(x)){
            printf("%c is an upper-case letter.",x);
        } else if (x==tolower(x) ){
            printf("%c is an lower-case letter.",x);
        }
    } else {
        printf("%c is not a character!",x);
    }
    return 0;
}
int main(void) {
/*write function here-->*/
    // example --> lab4_4();
    printf("\n");
    return 0;
}
