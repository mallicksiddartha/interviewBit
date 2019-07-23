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

int solution(vector< int > &A)
{
    int i, n, result, x;
    n = A.size();
    for(i=0;i<n;++i)
    {
        if(A[i] < 1 || A[i] > n)
        {
            A[i] = n+10;
        }
    }
    for(i=0;i<n;++i)
    {
        x = abs(A[i]);
        if(x == n+10) continue;
        if(A[x-1] > 0)
        {
            A[x-1] *= -1;
        }
    }
    bool flag = false;
    for(i=0;i<n;++i)
    {
        cout<< A[i] << "   ";
        if(A[i] > 0)
        {
            result = i + 1;
            flag = true;
            break;
        }
    }
    if(!flag){
        result = n+1;
    }
    return result;
}

int main()
{
    int n, i, j, k;
    vector< int > vec1d;

    cin>>n;

    for(i=0;i<n;++i)
    {
        cin>>j;
        vec1d.push_back(j);
    }
    int result = solution(vec1d);
    cout<< endl<< result;

    return 0;
}
