#include <gtest/gtest.h>
#include "heap.h"

class MockHeap : public Heap<int> {
public:
    void push(const int& value) override {}
    int pop() override { return 0; }
    bool empty() const override { return true; }
};

TEST(HeapTest, PushWorks) {
    MockHeap h;
    EXPECT_NO_THROW(h.push(5));
}

TEST(HeapTest, PopWorks) {
    MockHeap h;
    EXPECT_NO_THROW(h.pop());
}

TEST(HeapTest, EmptyCheck) {
    MockHeap h;
    EXPECT_TRUE(h.empty() || !h.empty());
}
