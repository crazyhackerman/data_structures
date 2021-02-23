#include <stdio.h>
int main() {
    int queue[100],x,i=0,j,front=1,rear=0,choice=1;
    while(1){
        printf("\n1.enqueue, 2.dequeue, 3.front, 4.rear 5.print 0.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("enqueue:");
                    scanf("%d",&x);
                    rear++;
                    queue[rear] = x;
                    break;
            case 2: if(front>=1){
                        printf("dequeue:%d\n",queue[front]);
                        front++;
                    }
                    else
                        printf("queue is empty\n");
                    break;
            case 3: if(front>=1)
                        printf("front:%d\n",queue[front]);
                    else
                        printf("queue is empty\n");
                    break;
            case 4: if(front>=1)
                        printf("rear:%d\n",queue[rear]);
                    else
                        printf("queue is empty\n");
                    break;
            case 5: printf("queue:");
                    if(front>=1){
                        for(j=front;j<=rear;j++)
                            printf("%d,",queue[j]);
                    }
                    else
                        printf("queue is empty\n");
                    break;
            case 0: exit(1);
            default:printf("Error! choice is not correct\n");
        }
    }
    return 0;
}