#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int num= rand()%100 +1;  //logic to lock guess from 1 to 100
    int guess =0;
    int guessed;
    do{
        cout<<"guess the number : ";
        cin>>guessed;
        if(guessed>num){
            cout<<"lower the guessed number ";
        }
        else if(guessed<num){
            cout<<"higher the guessed number ";
        }
        else{
            cout<<"CONGRATS"<<endl;
        }
        guess++;  //counter for the number of guesses
    }
    while(guessed!=num);
    cout<<"you guessed the number in "<<guess<<" turns!!";
    return 0;
}
