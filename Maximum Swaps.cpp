class Solution {
public:
    int maximumSwap(int num) {
        int max_digit = -1;
        int max_digit_indx = -1;
        int l_indx = -1;
        int r_indx = -1;
        
        string str=to_string(num);
        
        for (int i = str.size() - 1; i >= 0; i--) {
 
        // current digit is the largest by far
        if (str[i] > max_digit) {
            max_digit = str[i];
            max_digit_indx = i;
            continue;
        }
 
        // best digit for swap if there is no more
        // such situation on the left side
        if (str[i] < max_digit) {
            l_indx = i;
            r_indx = max_digit_indx;
        }
    }
 
    // check for is number already in order
    if (l_indx == -1)
        return num;
 
    swap(str[l_indx], str[r_indx]);
 
    return stoi(str);
        
    }
};
