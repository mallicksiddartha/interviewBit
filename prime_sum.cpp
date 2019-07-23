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
    cin>>A;

    vector<bool> prime;
    vector <int> result;
    for(int j = 0;j<A+1;++j)
    {
        prime.push_back(true);
    }

    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=A; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=A; i += p)
                prime[i] = false;
        }
    }
    for(int i = 2;i<=A;++i)
    {
        if(prime[i] == true && prime[A - i] == true)
        {
            result.push_back(i);
            result.push_back(A-i);
            break;
        }
    }
}
