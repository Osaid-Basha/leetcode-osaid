class MinStack {
private:
    int* data;   // القيم
    int* mins;   // أقل قيمة حتى هذا الموضع
    int  sz;     // عدد العناصر
    int  cap;    // السعة الحالية

    void grow() {
        int newCap = (cap == 0 ? 4 : cap * 2);
        int* nd = new int[newCap];
        int* nm = new int[newCap];
        for (int i = 0; i < sz; ++i) {
            nd[i] = data[i];
            nm[i] = mins[i];
        }
        delete[] data;
        delete[] mins;
        data = nd;
        mins = nm;
        cap = newCap;
    }

public:
    MinStack() : data(nullptr), mins(nullptr), sz(0), cap(0) {}

    ~MinStack() {
        delete[] data;
        delete[] mins;
    }

    void push(int val) {
        if (sz == cap) grow();
        data[sz] = val;
        mins[sz] = (sz == 0 ? val : (val < mins[sz - 1] ? val : mins[sz - 1]));
        ++sz;
    }

    void pop() {
        // على منصات مثل LeetCode يفترض عدم النداء على ستاك فاضي
        if (sz > 0) --sz;
    }

    int top() {
        return data[sz - 1];
    }

    int getMin() {
        return mins[sz - 1];
    }
};
