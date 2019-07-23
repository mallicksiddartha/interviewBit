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
    int A, index, i, j;
    //make sure n is such that n^2 is within int range
    while(scanf("%d", &A) == 1)
    {
        int squareN = A*A;
        index = 1;
        int direction = 0;
        int t=0, l = 0, r = A-1, d = A-1;
        vector< vector<int> > vec2d;
        for(i=0;i<A;++i){
            vec2d.push_back(vector<int>());
            for(j=0;j<A;++j){
                vec2d[i].push_back(0);
            }
        }

        while(index <= squareN)
        {
            if(direction == 0)
            {
                for(i=l; i<=r; ++i)
                {
                    vec2d[t][i] = index++;
                }
                t++;
                direction = 1;
            }
            else if(direction == 1)
            {
                for(i=t; i<=d; ++i)
                {
                    vec2d[i][r] = index++;
                }
                r--;
                direction = 2;
            }
            else if(direction == 2)
            {
                for(i=r; i>=l; --i)
                {
                    vec2d[d][i] = index++;
                }
                d--;
                direction = 3;

            }
            else if (direction == 3)
            {
                for(i=d; i>=t; --i)
                {
                    vec2d[i][l] = index++;
                }
                l++;
                direction = 0;
            }
        }
        for(i=0;i<A;++i){
            for(j=0;j<A;++j){
                printf("%d ", vec2d[i][j]);
            }
            printf("\n");
        }

    }

    return 0;
}
