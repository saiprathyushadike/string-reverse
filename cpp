#include <iostream>
#include<cstring>
#include  <bits/stdc++.h>
using namespace std;
int main() 
{
        string s,temp;
        cin>>s;
        int e=s.size()-1;
        int start=0;
        while(start<e)
        {
        swap(s[start],s[e]);
        start++;
        e--;
        }
        cout<<s;
}
 
