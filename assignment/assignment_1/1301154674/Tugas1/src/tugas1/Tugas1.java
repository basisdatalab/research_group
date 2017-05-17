/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tugas1;

/**
 *
 * @author User
 */
class EquilibriumIndex {
    int equilibrium(int arr[], int n) {
        int i, j;
        int kiri, kanan;
        
        for (i = 0 ; i<n ; i++) {
            kiri = 0;
            kanan = 0;
            
            for (j = 0; j<i; j++) {
                kiri = kiri + arr[j];
            }
            for (j = i+1; j<n; j++) {
                kanan = kanan + arr[j];
            }
            
            if (kiri == kanan) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        EquilibriumIndex e = new EquilibriumIndex();
        int arr[] = {-7, 1, 5, 2, -4, 3, 0};
        int arr_size = arr.length;
        System.out.println(e.equilibrium(arr, arr_size));
    }
    
}
