class evenno {

	public static void main(String args[]) {

		final long startTime = System.nanoTime();

		int rrk;

		for (rrk = 2; rrk <=100000; rrk++) {

			if (rrk % 2 == 0){

			 System.out.println(" Even Number : " +rrk);

			}

			
		}
	   

	   	final long duration = System.nanoTime();
	
	   	System.out.println(duration);
	}   

}