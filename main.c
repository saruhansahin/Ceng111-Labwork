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
int lab5_1(void){
    float w,d;
    printf("Enter weight and distance:");
    scanf("%f %f",&w,&d);
    if(w<=7&&w>0){
        if(d<5&&d>0){
        printf("Cost of the shipping: %.2f",w*d);
        }else if(d<=10&&d>=5){
            printf("Cost of the shipping: %.2f",w*d*3);
        }else if(d>10){
            printf("Cost of the shipping: %.2f",w*d*7.5);
        }else{
            printf("Enter a valid distance!");
        }
    }else{
        printf("Enter weight between 0 and 7!");
    }
    return 0;
}
int lab5_2(void){
    int a,b,c;
    float d,x,y;
    printf("Enter the indices of the equation (ax^2 + b^x + c):");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        x=((-b)+(sqrt(d)))/(2*a);
        y=((-b)-(sqrt(d)))/(2*a);
        printf("The roots of the equation (%dx^2) + (%dx) + (%d) are: %.2f and %.2f.",a,b,c,x,y);
    }else{
        printf("The discriminant value is not greater than 0.");
    }
    return 0;
}
int lab5_3(void){
    int a;
    printf("Enter a value:");
    scanf("%d",&a);
    if(a%7==0&&a%50==0){
        printf("%d is divisible by both 7 and 50.",a);
    }else{
        printf("%d is not divisible by both 7 and 50.", a);
    }
    return 0;
}
int lab5_4(void){
    float t,k;
    printf("Enter a temperature value in terms of Fahrenheit:");
    scanf("%f",&t);
    k = (t + 459.67)*(5.0/9);
    if(abs(k)==0.00){
        printf("%.2f Fahrenheit equals to %.2f Kelvin and its right at absolute zero.",t ,k);
    }else if (k>0){
        printf("%.2f Fahrenheit equals to %.2f Kelvin and its above absolute zero.",t,k);
    }else {
        printf("%.2f is not a valid temperature!",t);
    }
    return 0;
}
int lab6_1(void){
    int x,n,b;
    int a=0;
    int s=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    n=x;
    
    int t = x;
    while(t!=0){
        t=t/10;
        a=a+1;
    }
    t=x;
    while(t!=0){
        b=t%10;
        s+=pow(b,a);
        t=t/10;
    }

    if(s==n){
        printf("%d is an Armstrong number.", x);
    }else{
        printf("%d is not an Armstrong number.", x);
    }
    
    return 0;
}
int lab6_2(void){
    int x,y,z,a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    if(x>y){
        z = x;
    }else {
        z=y;
    }
    while(1){
        if(z%x==0 && z%y ==0){
            printf("LCM of %d and %d is: %d",x,y,z);
            break;
        }
        z = z+1;
    }
    return 0;
}
int lab6_3(void){
    int binary, bin;
    int a,b,c,d;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    bin = binary;
    d=binary%10;
    binary/=10;
    c=binary%10;
    binary/=10;
    b=binary%10;
    binary/=10;
    a=binary%10;
    binary/=10;
    printf("%d in binary, equals to %d in decimal.",bin, (a*8)+(b*4)+(c*2)+d);
    return 0;
}
int lab6_4(void){
    int n;
    float max,min,x;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    scanf("%f",&x);
    max=x;
    min=x;
    while(n>1){
        scanf("%f",&x);
        n--;

        if(max<x ){
            max=x;
        }
        if(min>x){
            min=x;
        }
        
    }
    printf("Smallest Value: %.2f \nLargest Value: %.2f",min,max);
    return 0;
}
int lab6_5(void){
    int x,sum=0,t;
    int a;
    printf("Enter a number: ");
    scanf("%d",&x);
    t=x;
    while (x!=0){
        a=x%10;
        x/=10;
        sum=sum+a;
        if(x<1){
            break ;
        }
    }

    printf("Sum of the digits of the number %d is: %d",t, sum);
    return 0;
}
int lab7_1(void){
    int x,t,i;
    printf("Enter a number:");
    scanf("%d",&x);
    t=x;
    printf("Prime factors of %d are:",x);
    for(i=2;i<=t;i++){
        while(t%i==0){
            printf(" %d",i);
            t=t/i;
        }
    }
    return 0;
}
int lab7_2(void){
    int n,a,b;
    printf("Enter n:");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=n*a;b++){
            if(a==b){
                printf(" %d",a);
            }
            if(n>b){
                printf(" 0");
            }
            
            
        }
        printf("\n");
    }
    return 0;
}
int lab7_3(void){
    int up,low,a,b,sum;
    printf("Enter lower bound:");
    scanf("%d",&low);
    printf("Enter upper bound:");
    scanf("%d",&up);
    printf("Perfect Numbers between %d and %d are:",low,up);
    for(a=1;a<up;a++){
        sum=0;
            for(b=1;b<a;b++){
                if(a%b==0){
                    sum +=b;
                }
            }
            if(sum==a&&a!=0){
                printf(" %d",a);
            }
    }
    return 0;
}
int lab7_4(void){
    int x,t,i,sum=0,f,ti;
    printf("Enter a number:");
    scanf("%d",&x);
    t=x;
    while(t>0){
        i = t%10;
    
        ti=i;
        f=1;
        while(ti>0){
            f = f*ti;
            ti--;
        }
        sum = sum + f;
        t=t/10;
    }
    if(sum == x){
        printf("%d is a Strong Number",x);
    }else {
        printf("%d is not a Strong Number",x);
    }
    return 0;
}
int lab8_1(void){
    int n,a,b;
    printf("Enter n:");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            if(b%2!=0){
                printf("O ");
            }else{
                printf("E ");
            }
        }
        printf("\n");
    }
    return 0;
}
int lab8_2(void){
    int n,a=1,b=2,t;
    char x=' ';
    printf("Enter n:");
    scanf("%d",&n);
    t=n;
    
    while(a<=n){
        if(a==1||a==n){
        
            while(t>0){
                printf("%d",a);
                t--;
            }
        }else if(a>1 && a<n){
            printf("%d",a);
            while(b<n){
                printf("%c",x);
                b++;
            }
            printf("%d",a);
            b=2;
        }
        printf("\n");
        a++;
        t=n;
    }
    return 0;
}
int lab8_3(void){
    int low,up,a,tl,sum=0,x=0,t,y;
    printf("Enter lower bound: ");
    scanf("%d",&low);
    tl=low;
    printf("Enter upper bound: ");
    scanf("%d",&up);
    printf("Power-Sum Mirror Numbers between %d and %d are:",low,up);
    
    while(tl<up){
        a=0;
        t=tl;
        y=tl;
        while(y>=1){
            y=y/10;
            a++;
        }
        while(t>=1){
            x=t%10;
            t=t/10;
            sum = pow(x,a) + sum;
            a--;
    }
        if(sum==tl){
            printf("%d ",tl);
        }
    sum=0;
    tl++;
    }
    return 0;
}
int lab8_4(void){
    int n,a=1,b=1,t=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(b<=n){
        while(a<=t){
            printf("%d",a);
            a++;
        }
        a-=2;
        while(a>0){
            printf("%d",a);
            a--;
        }
        a=1;
        t++;
        b++;
        printf("\n");
    }
    return 0;
}
int lab9_1(void){
    int n,x,a,b,sum,t=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    while(n>0){
        scanf("%d",&x);
        if(t==1){
            printf("Abundant numbers out of the entered values are:");
            t--;
        }
        a=x;
        b=1;
        sum=0;
        while(b<a){
            if(a%b==0){
                sum+=b;
            }
            b++;
        }
        if(sum>x){
        printf(" %d",x);
    }
        n--;
    }
    
    return 0;
}
int lab9_2(void){
    int n,t,a,b,c;
    printf("Enter n:");
    scanf("%d",&n);
    a=n;
    while(a>0){
        printf("*");
        a--;
    }
    printf("\n");
    t=n-2;
    while(t>0){
        b=t;
        while(b>0){
            printf(" ");
            b--;
        }
        printf("*");
        t--;
        printf("\n");
    }
    c=n;
    while(c>0){
        printf("*");
        c--;
    }
    return 0;
}
int lab9_3(void){
    int n,x=0,t,a;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(t>=1){
        a=t%10;
        x+=a;
        t/=10;
    }
    if(n%x==0){
        printf("%d is a Harshad Number.",n);
    }else{
        printf("%d is not a Harshad Number.",n);
    }
    return 0;
}
int lab9_4(void){
    int n,x,t,a=0,b,c,d;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    c=n-1;
    while(t>0){
        x=n;
        b=a;
        d=c;
        while(b>0){
            printf("0 ");
            b--;
        }
        while(x==n){
            printf("2 ");
            x--;
        }
        while(d>0){
            printf("1 ");
            d--;
        }
        t--;
        a++;
        c--;
        printf("\n");
    }
    return 0;
}
int main(void) {
/*write function here-->*/
    // example --> lab4_4();
    printf("\n");
    return 0;
}
