#include<iostream>
using namespace std;
int main() {
    int elements[10];
    cout<<"Enter Numbers: "<<endl;
    for(int i=0; i<10; i++){
        cin>>elements[i];
    }

    int diff= elements[1]-elements[0];
    cout<<"The Maximum difference Between the numbers you entered.\n"<<diff<<endl;
    return 0;
}
