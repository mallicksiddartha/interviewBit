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

int isPelindrome(int A)
{
    printf("%d\n", A);
    int arr[11];
    int countt = 0, i;
    bool flag = true;

    while(A > 0)
    {
        arr[countt++] = A%10;
        A = A/10;
    }
    for(i=0;i<countt/2;++i)
    {
        if(arr[i] != arr[countt - i - 1])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        printf("Is pelindrome\n");
    }
    else
    {
        printf("Not pelindrome\n");
    }
}

int main()
{

    int n;

    while(scanf("%d", &n) == 1)
    {
        isPelindrome(n);
    }
    return 0;
}
