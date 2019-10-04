import java.util.*;
public class Kaden{
    public static void main(String Args[]) {
        System.out.println("Enter the size of array:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("Enter the array");
        int a[]=new int [n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int curSum=0,sum=0;
        for(int i=0;i<n;i++){
            curSum+=a[i];
            if(curSum>sum)
                sum=curSum;
            if(curSum<0)
                curSum=0;
        }
        System.out.println("Largest sum subarray: "+sum);
    }
}
