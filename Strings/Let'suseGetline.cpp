//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
import java.util.Scanner;
import java.util.*;
public class GetLine {
 
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner input = new Scanner(System.in);
        
        String s= input.nextLine();
        if(s.length()>=1&&s.length()<=Math.pow(10, 6)){
        String result = s.split("\\\\", 2)[0];
         System.out.println(result);

    }
    }
    
}