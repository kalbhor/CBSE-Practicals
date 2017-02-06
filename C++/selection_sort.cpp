#include <iostream>

using namespace std;

int main(){

    int N,temp,A[50];

    cin>>N;

    for(int i=0;i<N;i++)
        cin>>A[i];

    for(int i=0;i<N-1;i++){
        int min = A[i];
        int loc = i;

        for(int j= i+1; j<N; j++){
            if(min > A[j]){
                min = A[j];
                loc = j;
            }

        }
        temp = A[i];
        A[i] = A[loc];
        A[loc] = temp;
   }

  cout<<"Sorted";

  for(int i=0;i<N;i++)
      cout<<" "<<A[i];
}

