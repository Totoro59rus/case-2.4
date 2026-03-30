#pragma once

template<typename T>
class Heap {
public:
    virtual ~Heap() = default;

    virtual void push(const T& value) = 0;
    virtual T pop() = 0;
    virtual bool empty() const = 0;
};
