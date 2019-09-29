#include <stdio.h>
#include<iostream>
#include<cmath>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int solution(int A, int B)
{
    int k = (A > B) ? B-1 : A-1;
    int n = A+B-2;

    int result = 1;
    for(int i=0;i<k;++i)
    {
        result *= (n-i);
        result /= (i+1);
    }

    return result;
}

int main()
{

    printf("%d\n", solution(10, 3));

    return 0;
}
