#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float x, y, z;
    cout<<"Page no. 1\nEnter 1 for addition.\nEnter 2 for subtraction.\nEnter 3 for multiplication.\nEnter 4 for division.\nEnter 5 to view the next page.\nEnter your number: ";
    cin>>x;

    if (x==1 || x==2 || x==3 || x==4)
    {
        cout<<"Enter your first number: ";
        cin>>y;
        cout<<"Enter your second number: ";
        cin>>z;
        if (x==1)
        {
            cout<<"\nThe addition of your given two number is: "<<y+z<<".";
        }
        else{
            if (x==2)
            {
                cout<<"\nThe subtraction of your given two number is: "<<y-z<<".";
            }
            else{
                if (x==3)
                {
                    cout<<"\nThe multiplication of your given two number is: "<<y*z<<".";
                }
                else{
                    if (x==4)
                    {
                        cout<<"\nThe division of your given two number is: "<<y/z<<".";
                    }
                    }
                }
            }
    }
    else{
        if (x==5)
        {
            cout<<"Coming Soon...";
        }
        else{
        cout<<"You have entered the wrong number, Please check your number.";
            }
        }

    return 0;
}