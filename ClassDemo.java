class rrk {

	double width;

	double height;

	double depth;
}

class ClassDemo {

	public static void main(String[] args) {

		rrk rrkdemo = new rrk();

		double vol;

		rrkdemo.width = 10;
		rrkdemo.height = 20;
		rrkdemo.depth = 30;

		vol = rrkdemo.width * rrkdemo.height * rrkdemo.depth;

		System.out.println(" Volume is : " +vol);
	}
}