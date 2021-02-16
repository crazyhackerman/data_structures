import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);  
        Stack<Integer> stack= new Stack<>();
        int x,i=0,j,top=0,choice=1;
        while(true){
            System.out.println("\n1.push, 2.pop, 3.top, 4.print 0.exit\n");
            choice= sc.nextInt();
            switch(choice){
                case 1: System.out.println("Push:");;
                        x = sc.nextInt();  
                        stack.push(x);
                        break;
                case 2: System.out.println("Pop:"+stack.peek());
                        stack.pop();
                        break;
                case 3: System.out.println("top:"+stack.peek());
                        break;
                case 4: System.out.println("stack:"+stack);
                        break;
                case 0: System.exit(0);
                default:System.out.println("Error! choice is not correct\n");
            }
        }
    }
}