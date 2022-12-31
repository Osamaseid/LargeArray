# include<iostream>
using namespace std;
int main(){
    int mareke[5];
    cout<<"enter five numbers";
    for (int i=0; i<5; i++)
        cin>>mareke[5];//99,55,67,89,100
    int large=mareke[0];
    for (int j=0; j<5; j++)

        if (mareke[j]>large)
    large=mareke[j];
    cout<<"the large number is "<<large<<endl;
    return 0;
}
