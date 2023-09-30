#include <iostream>
using namespace std;
int getU(int arr[], int  n){
  int ans = 0;
  for(int i ; i<n ; i++){
    ans = ans^arr[i];
  }
  return ans;  
}

int main() {
  int arr[]= {10,20,30,40,50,40,30,20,10};
  int n=9;
  int finalans = getU(arr, n);
  cout<<" final ans is "<<finalans<<endl;
}



#include <iostream>
using namespace std;
// print all the pairs of given output

int main(){
  int arr[]={10,20,30};
  int n =3;

  for(int i=0; i<n; i++){
    for(int j=0;j<n;j++){
      cout <<"("<<arr[i]<<" , " <<arr[j] <<")"<<endl;
    }
  }
}


#include <iostream>
using namespace std;
// print all the triplets  of given output

int main() {
  int arr[] = {1, 2, 3, 4};
  int n = 4;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        cout << "(" << arr[i] << " , " << arr[j] << " , " << arr[k] << ")"
             << endl;
      }
    }
  }
}


#include <iostream>
using namespace std;
// first print zero and than 1 

 void sortzero(int arr[],int n){
   int zerocount= 0;
   int onecount =0;

   for(int i =0 ; i<n ;i++){
     if (arr[i] == 0)
       zerocount++;
     if (arr[i]==1)
       onecount++;
   }
   int i ;
   for( i =0; i<zerocount; i++){
     arr[i] = 0;
   }
   for (int j =i; j<n;j++){
     arr[j]= 1;
       }  
 }

int main() {
  int arr[]={0,1,0,1,1,0,0,0,0};
  int n  =9;
  sortzero(arr, n );
  
  // print array 
  
  for (int i =0; i<n;i++){
    cout<< arr[i]<<" ";
  }
}






#include <iostream>
using namespace std;
// first print zero and than 1 

 void sortzero(int arr[],int n){
   int zerocount= 0;
   int onecount =0;

   for(int i =0 ; i<n ;i++){
     if (arr[i] == 0)
       zerocount++;
     if (arr[i]==1)
       onecount++;
   }

//EASY WAY 
int index=0;
while (zerocount--){
  arr[index]=0;
  index++;
}
while (onecount--){
  arr[index] =1;
  index++;
}
int main() {
  int arr[]={0,1,0,1,1,0,0,0,0};
  int n  =9;
  sortzero(arr, n );
  // print array  
  for (int i =0; i<n;i++){
    cout<< arr[i]<<" ";
  }
}
#include <iostream>
using namespace std;
// first print zero and than 1 

void shiftarray(int arr[], int n ){
  // step 1
  int temp= arr[n-1];
// step2
  for(int i =n-1; i >=1; i--){
    arr[i]= arr[i-1];
  }
  //STEP 3
  arr[0]=temp;
}
int main(){
  int arr[]={10,20,30,40,50,60};
  int n=6;

  shiftarray(arr,n);
  // print the array 

  for (int i =0; i<n ; i++){
    cout<<arr[i]<< " ";
  }
}