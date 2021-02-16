#include <iostream>
using namespace std;
int main() {
    int stack[100],x,i=0,j,top,choice=1;
    while(1){
        cout <<"\n1.push, 2.pop, 3.top, 4.print 0.exit\n";
        cin >>choice;
        switch(choice){
            case 1: cout << "Push:";
                    cin >> x;
                    stack[i]=x;
                    top=stack[i];
                    i++;
                    break;
            case 2: if(i>=0){
                        if(i>0)
                            cout <<"Pop:"<<top;
                        i--;
                        if(i>0)
                            top=stack[i-1];
                    }
                    else
                        cout <<"stack is empty\n";
                    break;
            case 3: if(i>=0)
                        cout<<"top:\n"<<top;
                    else
                        cout<<"stack is empty\n";
                    break;
            case 4: cout<<"stack:";
                    if(i>=0){
                        for(j=0;j<i;j++)
                           cout<<stack[j]<<",";
                    }
                    else
                        cout<<"stack is empty\n";
                    break;
            case 0: exit(1);
            default:cout<<"Error! choice is not correct\n";
        }
    }
	return 0;
}