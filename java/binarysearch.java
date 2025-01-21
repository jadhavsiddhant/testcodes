public class Q5 {
   public static void main(String[] args) {
       int[] arr = {2, 3, 4, 10, 40};
       int n = arr.length;
       int x = 10;
       int left = 0, right = n - 1;
       int result = -1;


       while (right >= left) {
           int mid = left + (right - left) / 2;


           // If the element is present at the middle itself
           if (arr[mid] == x) {
               result = mid;
               break;
           }
           if (arr[mid] > x)
               right = mid - 1;


           else
               left = mid + 1;
       }


       if (result == -1)
           System.out.println("Element not present");
       else
           System.out.println("Element found at index " + result);
   }
}
