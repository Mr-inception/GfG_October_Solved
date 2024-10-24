// Rotate and delete

// TC: O(1) SC: O(1)
class Solution {
    public static int rotateDelete(ArrayList<Integer> arr) {
        int size = arr.size();
        return arr.get(size - (size / 2 + size / 4));
    }
}
