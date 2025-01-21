public class Q13 {
   public static void main(String[] args) {
       int[][] matrix1 = {
           {1, 2, 3},
           {4, 5, 6},
           {7, 8, 9}
       };


       int[][] matrix2 = {
           {9, 8, 7},
           {6, 5, 4},
           {3, 2, 1}
       };


       int rows1 = matrix1.length;
       int cols1 = matrix1[0].length;
       int cols2 = matrix2[0].length;
       int[][] result = new int[rows1][cols2];


       for (int i = 0; i < rows1; i++) {
           for (int j = 0; j < cols2; j++) {
               for (int k = 0; k < cols1; k++) {
                   result[i][j] += matrix1[i][k] * matrix2[k][j];
               }
           }
       }


       System.out.println("Resultant Matrix:");
       for (int i = 0; i < result.length; i++) {
           for (int j = 0; j < result[i].length; j++) {
               System.out.print(result[i][j] + " ");
           }
           System.out.println();
       }
   }
}
