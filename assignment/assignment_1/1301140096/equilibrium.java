public static void main(String[] args){
	int[]A = {-1,3,-4,5,1,-6,2,1};
	int res = solution(A);
	System.out.println("res: " + res);
}

public static int solution(int[] A){
	long afterIndex = 0;
	long beforeIndex = 0;
	int i = 0;
	
	for (i=0;i<A.length;k++){
		for(int k = i+1;k<A.length;k++){
			afterIndex = afterIndex + A[k];
		}
		for(int j = 0;j<i;j++){
			beforeIndex = beforeIndex + A[k];
		}
		if(beforeIndex==afterIndex){
			return i;
		}
		afterIndex = 0;
		beforeIndex = 0;
	}
	return -1;
}