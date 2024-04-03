
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // n = rowIndex
        // pascal = {C^i_n|i=0,1,...,n}
        // C^i_n = C^{i-1}_n * (n - (i-1)) / i
    	vector<int> pascal(rowIndex + 1);
    	pascal[0] = 1;
    	for(int i = 0; i < rowIndex; i++)
            pascal[i+1] = 1LL * pascal[i] * (rowIndex - i) / (i + 1);
    	return pascal;
    }
};