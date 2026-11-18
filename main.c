#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// Task 1: 218
// Task 2: 225
// Task 3: 244
// Task 4: 1
// Task 5: 62
// Task 6: 153
// Task 7: 280
// Task 8: 169 ya ne ponyal
// Task 9: 106
// Task 10: 97
int task1(void) { // Условие |a(n)-a(n-1)|<x будет выполняться в бесконечном цикле, исходя из условий задания 218
    int n=1;
    double x=0, ans1=0, ans2=0, ans3=0;
    printf("218) Enter x (x>0):\n");
    while (scanf("%lf", &x)!=1 || x<=0) {
        printf("Invalid input!\n");
        printf("218) Enter x (x>0):\n");
        while (getchar() != '\n');
    }
    printf("a[%d] = %.10f\n", n, ans1);
    while (n!=25) { // Итерации ограничены до 25 из-за странного условия задания, приводящего к бесконечности
        ans1=-n-1;
        ans2=exp(ans1);
        ans3=fabs(ans2-(n-1));
        n++;
        printf("a[%d] = %.10f\n", n, ans2);
        if (ans3<x) {
            break;
        }
    }
    printf("Smallest n = %d\n", n);
    return 0;
}
int task2(void) {
    int n=0, c=0;
    double x=0, a=0, b=0, y=0, f=0;
    printf("225) Enter a, b, y(y>0; a<b):\n");
    while (scanf("%lf" "%lf" "%lf", &a, &b, &y)!=3 || a>b || y<=0) {
        printf("Invalid input!\n");
        printf("225) Enter a, b, y:\n");
        while (getchar() != '\n');
    }
    c=floor((b-a)/y);
    printf("      x                   F(x)    \n");
    while (n<=c) {
        x=a+n*y;
        f=pow(sin(x), 2);
        printf("    %.10f       %.10f   \n", x, f);
        n++;
    }
    return 0;
}
int task3(void) {
    int n=0, c=0;
    double x=0, a=0, b=0, y=0, f=0;
    printf("244) Enter a, b, y(y>0; a<b):\n");
    while (scanf("%lf" "%lf" "%lf", &a, &b, &y)!=3 || a>b || y<=0) {
        printf("Invalid input!\n");
        printf("244) Enter a, b, y:\n");
        while (getchar() != '\n');
    }
    c=floor((b-a)/y);
    printf("      x                   F(x)    \n");
    while (n<=c) {
        x=a+n*y;
        f=sin(x)+0.5*cos(2*x);
        printf("    %.10f       %.10f   \n", x, f);
        n++;
    }
    return 0;
}
int task4(void) {
    unsigned long int a=0, b=0, r=0;
    printf("1) Enter a:\n");
    while (scanf("%lu", &a)!=1 || a<=0) {
        printf("Invalid input!\n");
        printf("1) Enter a:\n");
        while (getchar() != '\n');
    }
    r=a;
    while (r>0) {
        b=b*10+r%10;
        r /=10;
    }
    printf("a = %lu\n", a);
    printf("b = %lu\n", b);
    if (a>b) {
        printf("a > b\n");
    } else if (a<b) {
        printf("a < b\n");
    } else
        printf("a = b\n");
    return 0;
}
int task5(void) {
    long int a=1, b=0, c=0,n=0;
    printf("62) 1^2+2^2+3^2...10^2\n");
    while (n!=10) {
        b=a+b;
        a=a+2;
        c=c+b;
        printf("%2d^2 = %3d\n", n+1, b);
        n++;
    }
    printf("c=%u\n", c);
    return 0;
}
int task6(void) {
    int a=0, b=0, x=0, y=0, n=0, m=0;
    printf("153) Enter a, b (a > b; b!=0):\n");
    while (scanf("%i" "%i", &a, &b)!=2 || a<=b || b==0) {
        printf("Invalid input!\n");
        printf("153) Enter a, b:\n");
        while (getchar() != '\n');
    }
     x=a;
    if (a<0) {
        x=-a;
    }
    y=b;
    if (b<0) {
        y=-b;
    }
    while (x>=y) {
        x=x-y;
        n++;
    }
    m=x;
    if (a<0) {
        m=-m;
    }
    if ((a<0) != (b<0)) {
        n=-n;
    }
    printf("a) %i\n", n);
    printf("b) %i\n", m);
    return 0;
}
int task7(void) {
    int rq=0, bq=0, rr=0, br=0, q=0;
    printf("280) Enter Q:\n");
    while (scanf("%i", &q)!=1 || q<0) {
        printf("Invalid input!\n");
        printf("280) Enter Q:\n");
        while (getchar() != '\n');
    }
    while (q!=0) {
        br=rand()%3+1;
        bq=bq+br;
        printf("%2i) Blue team scrore: %2i\n",q, bq);
        rr=rand()%3+1;
        rq=rq+rr;
        printf("    Red team scrore: %2i\n", rq);
        q--;
    }
    printf("Blue team final scrore: %2i\n", bq);
    printf("Red team final scrore: %2i\n", rq);
    if (bq>rq) {
        printf("Blue team wins!");
    } else if (bq<rq){
        printf("Red team wins!");
    } else {
        printf("Draw, no winner!");
    }
    return 0;
}
int task9(void) {
    int x=-1, n=0, m=0, q=0, c=0;
    printf("106) Enter sequence (not empty and natural number):\n");
    while (x!=0){
    while (scanf("%i", &x)!=1 || x<0) {
        printf("Invalid input!\n");
        printf("106) Enter sequence (not empty and natural number):\n");
        while (getchar() != '\n');
        }
        n++;
        if (x>m) {
            m=x;
            q=n;
        }
    }
    printf("The largest element = %lld, its ordinal number = %d\n", m, q);
    return 0;
}
int task10(void) {
    int s1=0, s2=0, s1q=0, s2q=0, i1=0, i2=0;
    printf("97) Enter s1 sequence(max 5):\n");
    while (i1!=5) {
    while (scanf("%i", &s1)!=1 || s1<0) {
        printf("Invalid input!\n");
        printf("97) Enter s1 sequence(max 5)\n");
        while (getchar() != '\n');
        }
        i1++;
        s1q+=s1;
    }
    printf("97) Enter s1 sequence(max 5):\n");
    while (i2!=5) {
        while (scanf("%i", &s2)!=1 || s2<0) {
            printf("Invalid input!\n");
            printf("97) Enter ss sequence(max 5)\n");
            while (getchar() != '\n');
        }
        i2++;
        s2q+=s2;
    }
    printf("Athlete 1 score: %i\n", s1q);
    printf("Athlete 2 score: %i\n", s2q);
    if (s1q>s2q) {
        printf("Athlete 1 wins!");
    } else if (s1q<s2q) {
        printf("Athlete 2 wins!");
    } else {
        printf("Draw, no winner!");
    }
    return 0;
}
int main(void) {
    srand(time(NULL));
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task9();
    task10();
    return 0;
}
