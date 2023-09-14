class SumOfEvenSquares{
    public static void main(String[] args){
        int[] listOfNumbers = {4, 2, 23, 1, 13, 9, 2};
        System.out.println("Sum of all even numbers squared: " + SumOfAllEvenSquares(listOfNumbers));
    }

    public static Integer SumOfAllEvenSquares(int[] numberList){
        int sumOfAllEvenSquares = 0;

        for(int i=0; i < numberList.length; i++){
            if(numberList[i] % 2 == 0){
                int temp = numberList[i] *= numberList[i];
                sumOfAllEvenSquares += temp;
            }
        }

        return sumOfAllEvenSquares;
    }
}