class Stack
{
    int *data, top, size;
  public:
    Stack();
    Stack(int n);
    Stack(Stack &other);
    ~Stack();
    bool isEmpty();
    bool pop(int &element);
    bool push(int element);
};