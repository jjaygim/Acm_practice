#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c;
    int ans=0;

    scanf("%d %d %d",&a,&b,&c);

    if(b-a < c-b)
        printf("%d\n",c-b-1);
    else
        printf("%d\n",b-a-1);

    return 0;
}
