import java.util.*;

public class Exercise2 {
	public static void main(String args[]) {
		HashMap<String, String> map = new HashMap<String, String>();
		map.put("[", "");
		map.put("]", "[");
		map.put("(", "");
		map.put(")", "(");

		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		while (m != 0) {
			String str = sc.next();

			char[] c = str.toCharArray();
			Stack<String> s1 = new Stack<String>(), s2 = new Stack<String>();

			for (int i =0; i <= c.length-2; i++) {
				s1.push(c[i] + "");
			}
			
			s2.push(c[c.length - 1] + "");

			while (!s1.isEmpty()) {
				if (!map.get(s2.peek()).equals(s1.peek())) {
					String tmp = s1.pop();
					s2.push(tmp);
				} else {
					if (!map.get(s2.peek()).equals("")&&!(s1.isEmpty() && s2.isEmpty())) {
						s1.pop();
						s2.pop();
					}
					if (!s1.isEmpty() && s2.isEmpty()) {
						s2.push(s1.pop());
					}

				}
 
			}

			if (s1.empty() && s2.empty())
				System.out.println("Yes");
			else
				System.out.println("No");
			m--;
		}

	}
}
