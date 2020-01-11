package round1_1;


public class SecretMap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 5;
		int arr1[] = {9,20,28,18,11};
		int arr2[] = {30,1,21,17,28};
		String result[] = new String[n];
		System.out.println("");	
		for(int i=0; i <n; i++) {
			int targetBit = 1;
			String resultString = "";
			int arr = arr1[i]|arr2[i];
			for(int j=0; j<n; j++) {
			resultString =((arr &targetBit)>0?"#":" ")+resultString  ;

			targetBit = targetBit <<1; // ÀÌÇØ OK
			}
			result[i] = resultString;
			System.out.println(result[i]);
		}
	}

}
