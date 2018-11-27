import java.util.Scanner;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		String []str = new String[30];
		str[0]="1";
		for(int i=1;i<30;++i)
		{
			str[i]="";
			int c=0;
			int len=str[i-1].length();
			while(c<len)
			{
				int mark=1;
				char ch=str[i-1].charAt(c);
				while(++c < len && ch==str[i-1].charAt(c))++mark;
				str[i]+=mark+""+ch;
			}
		}
		while(s.hasNext())
		{
			int n=s.nextInt();
			System.out.println(str[n-1]);
		}
	}
}
