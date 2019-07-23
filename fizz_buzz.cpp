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

int main ()
{

    int n;
    while(scanf("%d", &n) == 1)
    {
        vector<string> result;
        for(int index=1; index<=n; ++index)
        {
            if(index %3 == 0 && index % 5 == 0)
            {
                result.push_back("FizzBuzz");
            }
            else if (index %3 == 0)
            {
                result.push_back("Fizz");
            }
            else if (index %5 == 0)
            {
                result.push_back("Buzz");
            }
            else
            {
                stringstream ss;
                ss << index;
                result.push_back(ss.str());
            }
        }
        for(int i=0;i<result.size();++i)
            cout<<result[i]<<"   ";
        cout<<endl;
    }
}
