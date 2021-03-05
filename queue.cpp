#include <iostream>
#define SIZE 4
using namespace std;
int main() {
    int queue[SIZE],x,j,front=0,rear=0,choice=1;;
    while(1){
        cout<<"\n1.enqueue, 2.dequeue, 3.front, 4.rear 5.print 0.exit\n";
        cin>>choice;
        switch(choice){
            case 1: if(rear==SIZE){
                        cout<<"Queue is full";
                    }
                    else{
                        cout<<"enqueue:";
                        cin>>x;
                        queue[rear] = x;
                        rear++;
                    }
                    break;
            case 2: if(front!=rear){
                        cout<<"dequeue:"<<queue[front]<<"\n";
                        front++;
                        if(front==SIZE && rear==SIZE){
                            front=0;
                            rear=0;
                        }
                    }
                    else
                        cout<<"queue is empty\n";
                    break;
            case 3: if(front!=rear)
                        cout<<"front:"<<queue[front]<<"\n";
                    else
                        cout<<"queue is empty\n";
                    break;
            case 4: if(front!=rear)
                        cout<<"rear:"<<queue[rear-1]<<"\n";
                    else
                        cout<<"queue is empty\n";
                    break;
            case 5: cout<<"queue:";
                    if(front!=rear){
                        for(j=front;j<=rear-1;j++)
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