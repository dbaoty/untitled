#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

template <typename T> class Stack {
public:
    Stack() : _capacity(1), _size(0) {
        _sspace = (T*)calloc(_capacity, sizeof(T));
    }

    explicit Stack(size_t capacity) : _capacity(capacity), _size(0) {
        _sspace = (T*)calloc(_capacity, sizeof(T));
    }

    ~Stack() { delete(_sspace); }

    int push(T element) {
        if (_size == _capacity) {
            std::cerr << "ERROR: stack space full" << std::endl;
            return 1;
        }

        *(_sspace + _size) = element;
        _size += 1;

        return 0;
    }

    T pop() {
        if (_size < 1) {
            std::cerr << "ERROR: stack space empty" << std::endl;
            return 1;
        }

        size_t prev = _size - 1;
        _size -= 1;
        return *(_sspace + prev);
    }

    friend std::ostream& operator<<(std::ostream& os, const T& obj)
    {
        return obj.width;
    }

    [[nodiscard]] T get(size_t idx) const {
        return *(_sspace + idx);
    }

    [[nodiscard]] size_t capacity() const { return _capacity; }
    [[nodiscard]] size_t size() const { return _size; }

private:
    size_t _capacity{};
    size_t _size{};
    T *_sspace{};
};

#endif //UNTITLED_STACK_H
