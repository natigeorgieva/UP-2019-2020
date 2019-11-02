#include <iostream>
using namespace std;

const int N = 500;

int main(){
    int arr[N], n, _count = 0;

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

    for(int i = 0; i<n; i++){
        int temp = arr[i], sum = 0;

        while(temp){
            sum+=temp%10;
            temp/=10;
        }

        if(sum>0&&sum<10){
            _count++;
        }
    }

    if(_count){
        cout<<"Broq na chislata izpulnqvashti uslovieto e : "<<_count;
    }
    else{
        cout<<"Nqma chisla izpulnqvashti uslovieto!";
    }

    cout<<endl;


    cout<<endl;
}
