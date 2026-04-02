#include<iostream>
#include <vector>
using namespace std;
int main (){
    int n ;
    cout << "enter earray element ";
    cin >>n;
    int arr[n];
    cout <<" enter array element ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    /*// left rotate the array by 1 place 
    int temp =arr[0];
    for (int i =1;i<n;i++){
        arr[i-1]=arr[i];
    }
arr[n-1]=temp;
//cout <<arr[n-1]<<endl;
for (int i=0;i<n;i++){
    cout<< arr[i]<<endl;
}
    
   int d ;
   cout <<"enetr d";
   cin >> d;
d=d%n;
int temp [d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
for (int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
}
for (int i=0;i<n;i++){
    cout<< arr[i] << endl;
}
   

   // move all zeros to the end of the array
   int j =-1;
   for (int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
   }
   for (int i =j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}
    for (int i=0;i<n;i++){
cout << arr[i] << " " ;
    }

// linear search 
int target;
cout<< "enter target";
cin >> target;
for (int i =0;i<n;i++){
    if (arr[i]==target){
        cout<<i<<endl;
        break;
    }
    else{
        return -1;
    }
}*/
// union of two sorted array 


//taking input another array
int m ;
cout <<"enter array size";
cin >> m;
int arr2[m];
cout<<"enter array element ";
for (int j=0;j<m;j++){
    cin >> arr2[j];
}

   /*int i=0,j=0;
   vector<int>unionArr;
   while(i<n && j<m){
    if(arr[i] <=arr[j]){
    if(unionArr.size()==0 || unionArr.back()!=arr[i]){
        unionArr.push_back(arr[i]);
      }
      i++; }
    else{
    if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
    }
    j++;
}

   }
   while(j<m){
    if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
        unionArr.push_back(arr2[j]);
    }
    j++;
   }
   while(i<n){
    if(unionArr.size()==0 || unionArr.back()!=arr[i]){
        unionArr.push_back(arr[i]);
      }
      i++; }
   for (int i=0;i<unionArr.size();i++){
    cout<<unionArr[i] << " ";
   }*/
  //intersection of two sorted array
  int i=0,j=0;
  vector<int>answer;
  while(i<n && j<m){
    if(arr[i]<arr2[j]){
        i++;
    }
    else{
        if(arr[i]==arr2[j]){
            answer.push_back(arr[i]);
        }
        i++;
        j++;
    }
  }
  for (int i=0;i<answer.size();i++){
    cout << answer[i]<<" ";
  }

return 0;
}