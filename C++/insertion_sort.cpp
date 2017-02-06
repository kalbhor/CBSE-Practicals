#include <iostream>

using namespace std;

int main(){

    int N,temp,A[50];
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>A[i];

    for(int i=1;i<N;i++){
        temp = A[i];
        int j = i-1;

        while(temp<A[j] && j>=0){
            A[j+1] = A[j];
            j--;
       }
        A[j+1] = temp;

    }
    cout<<"Sorted";
    for(int i=0;i<N;i++)
        cout<<" "<<A[i];
}


