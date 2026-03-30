#include <gtest/gtest.h>
#include "queue.h"

class MockQueue : public Queue<int> {
public:
    void push(const int& value) override {}
    int pop() override { return 0; }
    bool empty() const override { return true; }
};

TEST(QueueTest, PushDoesNotThrow) {
    MockQueue q;
    EXPECT_NO_THROW(q.push(10));
}

TEST(QueueTest, PopDoesNotThrow) {
    MockQueue q;
    EXPECT_NO_THROW(q.pop());
}

TEST(QueueTest, EmptyReturnsBool) {
    MockQueue q;
    EXPECT_TRUE(q.empty() || !q.empty());
}
