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
    int A;
    cin>>A;
    int resNumber, resPower;
    for(int num = 2; num*num <= A; ++num)
    {
        for(int power = 2; power < 32; ++power)
        {
            if(pow( num, power) == A)
            {
                resNumber = num;
                resPower = power;
                cout<<resNumber << "    " <<resPower<<endl;
            }
        }
    }


    return 0;
}
