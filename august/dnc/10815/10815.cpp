#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int a[500001];
int n;
int binary_search(int num){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid] == num)
            return 1;
        else if(a[mid] > num)
            r=mid-1;
        else
            l=mid+1;
    }
    return 0;
}
int main(){
    int temp;;
    scanf("%d",&n);
    for(int i=0;i<n; i++)
        scanf("%d",a+i);
    scanf("%d",&n);
    sort(a,a+n);
    for(int i=0; i<n; i++){
        scanf("%d",&temp);
        printf("%d ",binary_search(temp));
    }
    puts("");
}
