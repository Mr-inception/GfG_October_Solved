class Solution {
    public static ArrayList<Integer> alternateSort(int[] arr) {

       
        Arrays.sort(arr);
        ArrayList<Integer> result = new ArrayList<>();
        
        int start = 0;         // Pointer for smallest element
        int end = arr.length - 1; // Pointer for largest element

        // Alternate adding elements from end and start
        while (start <= end) {
            if (start != end) {
                result.add(arr[end--]); // Add largest element
                result.add(arr[start++]); // Add smallest element
            } else {
                result.add(arr[start]); // Add the middle element (for odd-length arrays)
                break;
            }
        }
        
        return result;
    }
}
