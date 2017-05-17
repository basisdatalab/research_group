
import java.util.ArrayList;
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
        ArrayList<Rectangle> list = new ArrayList<Rectangle>();
        for(int i=0; i<2; i++){
            System.out.println("Rectangle "+(i+1)+" : ");
            int x1 = Integer.parseInt(sc.next());
            int x2 = Integer.parseInt(sc.next());
            int y1 = Integer.parseInt(sc.next());
            int y2 = Integer.parseInt(sc.next());
            Rectangle r = new Rectangle(x1, x2, y1, y2);
            list.add(r);
        }
        Checker check = new Checker();
        
        System.out.println("Overlap ? --> "+check.RectangleChecker(list.get(0), list.get(1)));
    }
}
