import java.util.*;

public class Exercise106 {
	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while (n != 0) {

			int s = sc.nextInt();
			int m = sc.nextInt();
			ArrayList<Ha> list = new ArrayList<Ha>();
			while (s != 0) {
				int v = sc.nextInt();
				int w = sc.nextInt();
				list.add(new Ha(v, w));
				s--;
			}
			Collections.sort(list, new SortByUnitValue());
			int maxvalue = 0;
			for (int i = 0; i < list.size(); i++) {
				while (list.get(i).w != 0) {
					if (m > 0) {
						maxvalue += list.get(i).v;
						list.get(i).w--;
						m--;
					} else
						break;
				}
			}

			System.out.println(maxvalue);

			n--;
		}

	}

}

class SortByUnitValue implements Comparator<Object> {
	public int compare(Object obj1, Object obj2) {
		Ha Ha1 = (Ha) obj1;
		Ha Ha2 = (Ha) obj2;
		if (Ha1.v < Ha2.v)
			return 1;
		else
			return 0;
	}
}

class Ha {
	int v;
	int w;

	public Ha(int v, int w) {
		this.v = v;
		this.w = w;
	}

}
