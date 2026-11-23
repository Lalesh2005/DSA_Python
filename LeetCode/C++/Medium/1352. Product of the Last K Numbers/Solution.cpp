class ProductOfNumbers {
public:
    vector<int>nums;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int mul = 1;
        for(int i=nums.size()-1;i>=nums.size()-k;i--)
        {
            mul = mul*nums[i];
        }
        return mul;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */