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
class EquilibriumIndex {
    int equilibrium(int arr[], int n) 
    {
        int i, j;
        int leftsum, rightsum;
 
        /* Check for indexes one by one until an equilibrium
           index is found */
        for (i = 0; i < n; ++i) 
        {
            leftsum = 0;  // initialize left sum for current index i
            rightsum = 0; // initialize right sum for current index i
 
            /* get left sum */
            for (j = 0; j < i; j++)
                leftsum += arr[j];
 
            /* get right sum */
            for (j = i + 1; j < n; j++)
                rightsum += arr[j];
 
            /* if leftsum and rightsum are same, then we are done */
            if (leftsum == rightsum)
                return i;
        }
 
        /* return -1 if no equilibrium index is found */
        return -1;
}
}
