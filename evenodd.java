class evenodd {

	public static void main(String[] args) {

		int x;

		int y;

		for (x = 2; x <= 50; x++) {

			if(x % 2 == 0) {

				System.out.println("Even Numbers between 1 and 50 : " +x);

			
			}

			for (y = 50; y <=100; y++) {

				if (y % 2 == 1) {

					System.out.println("Odd Numbers between 50 and 100 :" +y);
				}
			}

			

		}
	}
}