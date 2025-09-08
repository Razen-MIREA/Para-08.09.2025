import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Работа со строкой
        String str_1 = "AaBbCcDd";
        
        // Эквивалент str_1[::2]
        StringBuilder evenChars = new StringBuilder();
        for (int i = 0; i < str_1.length(); i += 2) {
            evenChars.append(str_1.charAt(i));
        }
        System.out.print("str_1[::2] -> " + evenChars);
        System.out.println();
        
        // Эквивалент str_1[1::2]
        StringBuilder oddChars = new StringBuilder();
        for (int i = 1; i < str_1.length(); i += 2) {
            oddChars.append(str_1.charAt(i));
        }
        System.out.print("str_1[1::2] -> " + oddChars);
        System.out.println();
        
        // Работа со списком
        List<String> li = new ArrayList<>();
        li.add("a");
        li.add("1");
        li.add("b");
        li.add("2");
        li.add("c");
        li.add("3");
        
        List<String> li_1 = new ArrayList<>();
        List<String> li_2 = new ArrayList<>();
        
        // Эквивалент li[0::2]
        for (int i = 0; i < li.size(); i += 2) {
            li_1.add(li.get(i));
        }
        
        // Эквивалент li[1::2]
        for (int i = 1; i < li.size(); i += 2) {
            li_2.add(li.get(i));
        }
        
        // Эквивалент del li
        li = null; // В Java это освободит память при сборке мусора
        
        // Вывод результатов
        System.out.println(String.join(" ", li_1));
        System.out.println(String.join(" ", li_2));
    }
}
