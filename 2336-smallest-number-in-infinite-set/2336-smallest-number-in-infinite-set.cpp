class SmallestInfiniteSet {
    int small;
    set<int> add;
public:
    SmallestInfiniteSet() {
     small=1;   
    }
    
    int popSmallest() {
        if(!add.empty()){
            int smallest=*add.begin();
            add.erase(add.begin());
            return smallest;}
            int smallest=small;
            small++;
            return smallest;
    }
    
    void addBack(int num) {
        if(num<small){
            add.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */