#include "Counter.h"

Counter::Counter() :
    count_(0) {}

int Counter::Increment() {
    return ++count_;
}

int Counter::Decrement() {
    return --count_;
}

int Counter::Reset() {
    count_ = 0;
    return count_;
}
