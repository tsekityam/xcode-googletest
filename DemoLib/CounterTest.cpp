#include <gtest/gtest.h>
#include "Counter.h"

TEST(Counter, InitialState) {
    Counter counter;
    EXPECT_EQ(0, counter.GetCount());
}

TEST(Counter, Increment) {
    Counter counter;
    EXPECT_EQ(1, counter.Increment());
    EXPECT_EQ(2, counter.Increment());
    EXPECT_EQ(3, counter.Increment());
}

TEST(Counter, Decrement) {
    Counter counter;
    EXPECT_EQ(-1, counter.Decrement());
}

TEST(Counter, Reset) {
    Counter counter;
    counter.Increment();
    counter.Increment();
    EXPECT_EQ(0, counter.Reset());
}
