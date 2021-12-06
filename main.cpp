#include <iostream>
#include <fstream>

using namespace std;
int v[100];
int helyi(int k)
{
    int ok=1,i;
    for(i=0 ; i<k-1 ; i++)
        if(v[k-1]<v[i])
        ok=0;
    return ok;
}
int main()
{
    ifstream in("bac.txt");
    int k=0,n,i=0,x;
    in>>x;
    v[0]=x;
    cout<<x<<" ";
    while(in>>x)
    {
        i++;
        v[i]=x;
        if(helyi(i)==1)
            cout<<v[i]<<" ";
    }
    cout<<k;
    in.close();
    return 0;
}
