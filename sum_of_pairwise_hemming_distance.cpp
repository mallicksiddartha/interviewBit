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
    vector<int> A;

    int n, temp;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        A.push_back(temp);
    }

    int result = 0, notSetBits = 0;
    for(int i=0;i<32;++i)
    {
        notSetBits = 0;
        for(int j=0;j<A.size();++j)
        {
            if((A[j] & (1 << i)))
            {
                notSetBits++;
            }
        }
        result += ((notSetBits * (A.size() - notSetBits) * 2)%1000000007);
    }

    cout<<"all hemming distance: "<<result <<endl;

    return 0;
}
