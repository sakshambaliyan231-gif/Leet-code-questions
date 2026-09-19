class Solution {
    public int countPrimes(int n) {
        if (n <= 2) return 0;

        boolean[] isComposite = new boolean[n];

        int count = 1; // Prime number 2

        for (int i = 3; i < n; i += 2) {
            if (!isComposite[i]) {
                count++;

                if (i <= (n - 1) / i) {
                    for (int j = i * i; j < n; j += 2 * i) {
                        isComposite[j] = true;
                    }
                }
            }
        }

        return count;
    }
}