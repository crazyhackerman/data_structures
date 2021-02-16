import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);  
        int[] stack = new int[100];
        int x,i=0,j,top=0,choice=1;
        while(true){
            System.out.println("\n1.push, 2.pop, 3.top, 4.print 0.exit\n");
            choice= sc.nextInt();
            switch(choice){
                case 1: System.out.println("Push:");;
                        x = sc.nextInt();  
                        stack[i]=x;
                        top=stack[i];
                        i++;
                        break;
                case 2: if(i>=0){
                            if(i>0)
                                System.out.println("Pop:"+top);
                            i--;
                            if(i>0)
                                top=stack[i-1];
                        }
                        else
                            System.out.println("stack is empty\n");
                        break;
                case 3: if(i>=0)
                            System.out.println("Pop:"+top);
                        else
                            System.out.println("stack is empty\n");
                        break;
                case 4: System.out.println("stack:");
                        if(i>=0){
                            for(j=0;j<i;j++)
                                System.out.println(stack[j]+",");
                        }
                        else
                            System.out.println("stack is empty\n");
                        break;
                    
                case 0: System.exit(0);
                default:System.out.println("Error! choice is not correct\n");
            }
        }
    }
}