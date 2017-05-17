
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Budi Pradnyana
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input num of lines : ");
        int num = Integer.parseInt(sc.nextLine());
        ArrayList<Integer> listX = new ArrayList<Integer>();
        ArrayList<Integer> listY = new ArrayList<Integer>();
        for(int i=0; i<num;i++){
            System.out.println("Coordinat "+(i+1)+" : ");
            listX.add(Integer.parseInt(sc.next()));
            listY.add(Integer.parseInt(sc.next()));
        }
        int minX = Collections.min(listX);
        int maxX = Collections.max(listX);
        int minY = Collections.min(listY);
        int maxY = Collections.max(listY);
        
        System.out.println("MBR Coordinat : ");
        System.out.println(minX+","+minY);
        System.out.println(maxX+","+minY);
        System.out.println(maxX+","+maxY);
        System.out.println(minX+","+maxY);
    }       
}
