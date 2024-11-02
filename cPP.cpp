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
        {}
        else{
        cout<<"You have entered the wrong number, Please check your number.";
            }
        }

        if (x==5)
        {
            cout<<"\nPage no. 2\nEnter 6 to get the multiplication table of your given number.\nClick 7 to get the square of your given number.\nClick 8 to get the cube of your given number.\nClick 9 to check if the given number is even number or odd number.\nEnter 10 to view the next page.\nEnter your number: ";
            cin>>x;

            if (x==6)
            {
                cout<<"Enter the number of which you want the table: ";
                cin>>y;
                for (int i = 1; i <= 10; i++)
                {
                    cout<<y<<" x "<<i<<" = "<<y*i<<endl;
                }
            }
            else{
                if (x==7)
                {
                    cout<<"Enter the number of which you want the square of: ";
                    cin>>y;
                    cout<<"The Square of the given number is: "<<y*y<<".";
                }
                else{
                    if (x==8)
                    {
                        cout<<"Enter the number of which you want the square of: ";
                        cin>>y;
                        cout<<"The Square of the given number is: "<<y*y*y<<".";
                    }
                    else{
                        if (x==9)
                        {
                            int i;
                            cout<<"Enter the number: ";
                            cin>>y;
                            if (i%2==0)
                            {
                                cout<<"It is a even number.";
                            }
                            else{
                                cout<<"It is a odd number.";
                                }
                        }
                        else{
                            if (x==10)
                            {}
                            else{
                                cout<<"You have entered the wrong number, Please check your number.";
                                }
                            } 
                        }   
                    }
                }   
        }
    return 0;
}