#include <iostream>
using namespace std;
    // segregate 0 and 1 
    void segregate0and1(int arr[],int n ){
        int start = 0, end = n-1;
        while (start<end){
            if(arr[start]==0)
            start ++;
            else{
                if (arr[end]==0){
                    swap(arr[start],arr[end]);
                    start++,end--;

                }
                else 
                end--;
            }
        }

    }
    void printarray(int array[],int m ){
         m = sizeof(array);
        for(int i=0;i<m;i++){
cout << array[i]<<" ";
        }

    }
    int main (){
        int arr []={0,0,1,1,0,1,0,1,0,0};
        int n = sizeof(arr);
        segregate0and1(arr,n);
printarray(arr,n );
return 0 ;
    }


