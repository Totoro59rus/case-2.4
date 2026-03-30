#pragma once

template<typename T>
class BinaryTree {
public:
    virtual ~BinaryTree() = default;

    virtual void push(const T& value) = 0;
    virtual T pop() = 0;
    virtual bool search(const T& value) const = 0;
};
