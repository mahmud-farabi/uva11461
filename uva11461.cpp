#include <bits/stdc++.h>

using namespace std;
int main()
{
    int start, finish;
    while(scanf("%d %d",&start,&finish)&&start!=0&&finish!=0)
    {
        int counter = 0;
        for(int i = start;i<=finish;i++)
        {
            double sq_rt = sqrt(i);
            if(sq_rt == (int)sq_rt)
                counter++;
        }
        cout<<counter<<endl;
    }

}
