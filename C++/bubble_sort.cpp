#include <iostream>

using namespace std;

int main(){

    int A[50],N,temp;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>A[i];

    for(int i=1;i<N;i++){
        for(int j=0;j<N-i;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
   }

    cout<<"Sorted\n";
    for(int i=0;i<N;i++)
        cout<<" "<<A[i];
}
