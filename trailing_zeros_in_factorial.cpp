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

int main()
{
    int A;

    while(scanf("%d", &A) == 1)
    {
        int fives = 5, temp = A, result = 0;
        while (temp/fives > 0)
        {
            result += temp/fives;
            printf("result = %d, fives = %d\n", result, fives);
            fives *= 5;

        }

        cout<< "Count of trailing Zeros: " << result<<endl;
    }

    return 0;
}
