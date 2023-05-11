class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers(1, 1);
        int i2 = 0, i3 = 0, i5 = 0;

       while (uglyNumbers.size() < n) {
          int nextUgly = min({uglyNumbers[i2] * 2, uglyNumbers[i3] * 3, uglyNumbers[i5] * 5});
          uglyNumbers.push_back(nextUgly);

          if (uglyNumbers[i2] * 2 == nextUgly)
            ++i2;
          if (uglyNumbers[i3] * 3 == nextUgly)
            ++i3;
          if (uglyNumbers[i5] * 5 == nextUgly)
            ++i5;
    }

    return uglyNumbers.back();
    }
};