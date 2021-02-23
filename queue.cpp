#include <iostream>
using namespace std;
int main() {
    int queue[100],x,j,front=1,rear=0,choice=1;
    while(1){
        cout<<"\n1.enqueue, 2.dequeue, 3.front, 4.rear 5.print 0.exit\n";
        cin>>choice;
        switch(choice){
            case 1: cout<<"enqueue:";
                    cin>>x;
                    rear++;
                    queue[rear] = x;
                    break;
            case 2: if(front>=1){
                        cout<<"dequeue:"<<queue[front]<<"\n";
                        front++;
                    }
                    else
                        cout<<"queue is empty\n";
                    break;
            case 3: if(front>=1)
                        cout<<"front:"<<queue[front]<<"\n";
                    else
                        cout<<"queue is empty\n";
                    break;
            case 4: if(front>=1)
                        cout<<"rear:"<<queue[rear]<<"\n";
                    else
                        cout<<"queue is empty\n";
                    break;
            case 5: cout<<"queue:";
                    if(front>=1){
                        for(j=front;j<=rear;j++)
                            cout<<queue[j]<<",";
                    }
                    else
                        cout<<"queue is empty\n";
                    break;
            case 0: exit(1);
            default:cout<<"Error! choice is not correct\n";
        }
    }
    return 0;
}