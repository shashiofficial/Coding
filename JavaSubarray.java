import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
            
        
        int negativeSums=0;

        for(int i=0;i<n;i++){
        
            for(int j=i;j<n;j++){
            
                int curr=0;
                
                for(int k=i;k<=j;k++){
                    curr+=a[k];                
                }
                
                if(curr<0)
                    negativeSums++;
                    
            }
            
        }


        System.out.println(negativeSums);

    }
}
