/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package soal1;

/**
 *
 * @author Ananda
 */
public class Main {
    public static void main(String[] args) {
        EquilibriumIndex equi = new EquilibriumIndex();
        int arr[] = {7, -7, 1, 5, -2, -4, 3, 0};
        int arr_size = arr.length;
        System.out.println(equi.equilibrium(arr, arr_size));
    }
}
