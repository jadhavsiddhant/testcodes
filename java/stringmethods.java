public class Q15 {
public static void main(String[] args) {
String str = "Hello, World!";
      
       // 1. int length()
       System.out.println("Length: " + str.length());
      
       // 2. char charAt(int index)
       System.out.println("Char at index 1: " + str.charAt(1));
      
       // 3. int indexOf(int ch)
       System.out.println("Index of 'o': " + str.indexOf('o'));
      
       // 4. int indexOf(int ch, int fromIndex)
       System.out.println("Index of 'o' from index 5: " + str.indexOf('o', 5));
      
       // 5. int indexOf(String substring)
       System.out.println("Index of 'World': " + str.indexOf("World"));
      
       // 6. int indexOf(String substring, int fromIndex)
       System.out.println("Index of 'o' from index 5: " + str.indexOf("o", 5));
      
       // 7. lastIndexOf()
       System.out.println("Last index of 'o': " + str.lastIndexOf('o'));
      
       // 8. String substring(int beginIndex)
       System.out.println("Substring from index 7: " + str.substring(7));
      
       // 9. String substring(int beginIndex, int endIndex)
       System.out.println("Substring from index 7 to 12: " + str.substring(7, 12));
      
       // 10. boolean contains(CharSequence s)
       System.out.println("Contains 'World': " + str.contains("World"));
      
       // 11. String concat(String s)
       System.out.println("Concat with '!!!': " + str.concat("!!!"));
      
       // 12. boolean equals(Object o)
       System.out.println("Equals 'Hello, World!': " + str.equals("Hello, World!"));
      
       // 13. boolean equalsIgnoreCase(String s)
       System.out.println("Equals ignore case 'hello, world!': " + str.equalsIgnoreCase("hello, world!"));
      
       // 14. boolean isEmpty()
       System.out.println("Is empty: " + str.isEmpty());
      
       // 15. boolean equals(Object o)
       System.out.println("Equals 'Hello, World!': " + str.equals("Hello, World!"));
      
       // 16. boolean equalsIgnoreCase(String s)
       System.out.println("Equals ignore case 'hello, world!': " + str.equalsIgnoreCase("hello, world!"));
      
       // 17. String toLowerCase()
       System.out.println("To lower case: " + str.toLowerCase());
      
       // 18. String toUpperCase()
       System.out.println("To upper case: " + str.toUpperCase());
      
       // 19. int compareTo(String anotherString)
       System.out.println("Compare to 'Hello': " + str.compareTo("Hello"));
      
       // 20. int compareToIgnoreCase(String anotherString)
       System.out.println("Compare to ignore case 'hello, world!': " + str.compareToIgnoreCase("hello, world!"));
      
       // 21. String trim()
       System.out.println("Trimmed string: " + str.trim());
      
       // 22. String replace(char oldChar, char newChar)
       System.out.println("Replace 'o' with 'a': " + str.replace('o', 'a'));
      
       // 23. char[] toCharArray()
       System.out.println("To char array: " + java.util.Arrays.toString(str.toCharArray()));
      
       // 24. boolean startsWith(String s)
       System.out.println("Starts with 'Hello': " + str.startsWith("Hello"));
      
       // 25. boolean endsWith(String s)
       System.out.println("Ends with 'World!': " + str.endsWith("World!"));
      
       // 26. static String join(CharSequence delim, CharSequence... strs)
       System.out.println("Join with '-': " + String.join("-", "Hello", "World"));
   }
}
