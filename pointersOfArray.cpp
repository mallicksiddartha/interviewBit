#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main(){

    /*int arr[10];
    arr[0]=1, arr[1]=2, arr[2]=3, arr[3] = 4;
    printf("%d\n", arr);
    printf("%d\n", *arr);
    printf("%d\n", arr+1);
    printf("%d\n", *(arr+1));

    for(int i=0;i<5;++i){
        printf("address %d, %d\n", &arr[i], arr+i);
        printf("value %d, %d\n", arr[i], *(arr+i));
    }

    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d\n", p);
    printf("%d\n", p+1);
    printf("%d\n", &a);
    //de-referencing
    printf("%d\n", *(p));

    printf("**************");*/
    int b[2][3] = {{1, 2, 3}, {4, 5, 6} };
    int (*s)[3] = b;

    printf(" print b, %d\n", b);
    printf("print &b[0], %d\n", &b[0]);
    printf(" print b+1, %d\n", *(b+1));
    printf(" print *(b+1) + 2, %d\n", *(b+1) + 2);
    printf(" print *(*b+1), %d\n", *(*b+1));

    /*for(int j=0;j<3;++j){
        printf("b address %d\n", &b[0][j]);
        printf("b value %d\n", b[0][j]);
        printf("%d\n", s+j);
        printf("value %d\n", (*s)[j]);
    }*/


    return 0;
}
