#include <iostream>
using namespace std;

const int N = 500;

int main(){
    int arr[N], n, indexFirstPos = -1;

    cout<<"Kolko elementa shte vuvedete [1 - "<<N<<"]: ";
    cin>>n;

    if(n<1&&n>N){
        cout<<"Vhoda e izvun intervala..";
        return 0;
    }

    for(int i = 0; i<n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    for(int i = 0; i<n && (indexFirstPos == -1); i++){
        if(arr[i] > 0){
            indexFirstPos = i;
        }
    }

    if(indexFirstPos != -1){
        cout<<"Purviq otricatelen element e : "<<arr[indexFirstPos]
            <<", i sumata na elementite sled nego e : ";

        int sum = 0;

        for(int i = indexFirstPos+1; i < n; i++){
            sum+=arr[i];
        }

        cout<<sum;
    }




    cout<<endl;
}
