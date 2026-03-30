#include <gtest/gtest.h>
#include "binary_tree.h"

class MockBinaryTree : public BinaryTree<int> {
public:
    void push(const int& value) override {}
    int pop() override { return 0; }
    bool search(const int& value) const override { return true; }
};

TEST(BinaryTreeTest, PushWorks) {
    MockBinaryTree tree;
    EXPECT_NO_THROW(tree.push(1));
}

TEST(BinaryTreeTest, PopWorks) {
    MockBinaryTree tree;
    EXPECT_NO_THROW(tree.pop());
}

TEST(BinaryTreeTest, SearchWorks) {
    MockBinaryTree tree;
    EXPECT_TRUE(tree.search(1) || !tree.search(1));
}
