
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
        System.out.println("Input num of direction : ");
        int num = Integer.parseInt(sc.nextLine());
        ArrayList<Coordinat> list = new ArrayList<Coordinat>();
        float[] current_coordinat = new float[2];
        current_coordinat[0]=0;
        current_coordinat[1]=0;
        for(int i=0; i<num;i++){
            System.out.println("Angle & Distance "+(i+1)+" : ");
            float angle = Float.valueOf(sc.next());
            float dist = Float.valueOf(sc.next());
            Coordinat c = new Coordinat(angle,dist);
            list.add(c);
        }
        for(int i=0; i<list.size();i++){
            float coordinatX = (float) ((list.get(i).getDistance())*Math.cos(Math.toRadians(list.get(i).getAngle())));
            float coordinatY = (float) ((list.get(i).getDistance())*Math.sin(Math.toRadians(list.get(i).getAngle())));
            current_coordinat[0] += coordinatX;
            current_coordinat[1] += coordinatY;
        }
        System.out.println("Koordinat akhir : ("+current_coordinat[0]+","+current_coordinat[1]+")");
    }
}
