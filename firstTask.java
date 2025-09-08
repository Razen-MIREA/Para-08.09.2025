public class Main {
    public static void main(String[] args) {
        // Работа со строкой
        String str_1 = "AaBbCcDd";
        
        // Эквивалент str_1[::2] - получаем символы с шагом 2, начиная с 0
        String result1 = getSubstring(str_1, 0, 2);
        System.out.println("str_1[::2] -> " + result1);
        
        // Эквивалент str_1[1::2] - получаем символы с шагом 2, начиная с 1
        String result2 = getSubstring(str_1, 1, 2);
        System.out.println("str_1[1::2] -> " + result2);
        
        // Работа со списком
        String[] li = {"a", "1", "b", "2", "c", "3"};
        
        // Создаем два новых массива
        String[] li_1 = getElements(li, 0, 2);
        String[] li_2 = getElements(li, 1, 2);
        
        // Эквивалент del li - очищаем массив
        li = null;
        
        // Выводим результаты
        printArray(li_1);
        printArray(li_2);
    }
    
    // Метод для получения подстроки с заданным шагом
    private static String getSubstring(String str, int start, int step) {
        StringBuilder result = new StringBuilder();
        for (int i = start; i < str.length(); i += step) {
            result.append(str.charAt(i));
        }
        return result.toString();
    }
    
    // Метод для получения элементов массива с заданным шагом
    private static String[] getElements(String[] arr, int start, int step) {
        List<String> temp = new ArrayList<>();
        for (int i = start; i < arr.length; i += step) {
            temp.add(arr[i]);
        }
        return temp.toArray(new String[0]);
    }
    
    // Метод для вывода массива
    private static void printArray(String[] arr) {
        for (String s : arr) {
            System.out.print(s + " ");
        }
        System.out.println();
    }
}
