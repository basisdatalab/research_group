/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package equilibrium;

/**
 *
 * @author aka
 */
import java.util.*;

public class Equilibrium {
    int equilibrium(int arr[], int n) 
    {
        int a, b;
        int kiri, kanan;
 
        for (a = 0; a < n; ++a) 
        {
            kiri = 0; 
            kanan = 0;
 
            for (b = 0; b < a; b++)
                kiri += arr[b];
 
            for (b = a + 1; b < n; b++)
                kanan += arr[b];
 
            if (kiri == kanan)
                return a;
        }
 
        return -1;
    }
 
    public static void main(String[] args) 
    {
        Equilibrium equi = new Equilibrium();
        int arr[] = {8, 4, 2, 9, -4, 3, 0};
        int panjang = arr.length;
        System.out.println(equi.equilibrium(arr, panjang));
    }   
}
