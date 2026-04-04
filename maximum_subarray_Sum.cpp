       // total number of subarray = n*(n+1)/2
#include<iostream>
#include<climits>
using namespace std;
int main ()
{// kadane's alogrithm
   int n = 7;
   int arr[7]={3,-4,5,4,-1,7,-8};
 int currsum =0, maxsum=INT_MIN;
   for (int i =0 ; i<n;i++){
    currsum+=arr[i];
 maxsum=max(currsum,maxsum);
    if (currsum<0){
        currsum=0;
    }
}
 cout << maxsum<<endl;
return 0;
   
}
