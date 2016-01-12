
class Counter {
public:
    Counter();

    int GetCount() { return count_; }
    int Increment();
    int Decrement();
    int Reset();

private:
    int count_;
};