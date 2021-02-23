#include <stdio.h>
int main() {
    int stack[100],x,i=0,j,top,choice=1;
    while(1){
        printf("\n1.enqueue, 2.dequeue, 3.top, 4.print 0.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Push:");
                    scanf("%d",&x);
                    stack[i]=x;
                    top=stack[i];
                    i++;
                    break;
            case 2: if(i>=0){
                        if(i>0)
                            printf("Pop:%d\n",top);
                        i--;
                        if(i>0)
                            top=stack[i-1];
                    }
                    else
                        printf("stack is empty\n");
                    break;
            case 3: if(i>=0)
                        printf("top:%d\n",top);
                    else
                        printf("stack is empty\n");
                    break;
            case 4: printf("stack:");
                    if(i>=0){
                        for(j=0;j<i;j++)
                            printf("%d,",stack[j]);
                    }
                    else
                        printf("stack is empty\n");
                    break;
            case 0: exit(1);
            default:printf("Error! choice is not correct\n");
        }
    }
	return 0;
}