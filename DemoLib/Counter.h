
class Counter {
public:
    Counter();

    int GetCount() { return count_; }
    int Increment();
    int Decrement();

private:
    int count_;
};