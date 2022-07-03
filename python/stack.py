# stack implementation in python

#creating stack




def create_stack():
    stack = []
    return stack


#creating an empty stack


def check_empty(stack):
    return len(stack) == 0


# Adding items into stack


def push(stack, item):
    stack.append(item)
    print("pushed item: " + item)


#removing element from the stack


def pop(stack):
    return "stack is empty" if (check_empty(stack)) else stack.pop()

# peeking element from stack

def peek(stack):
    return "stack is empty" if (check_empty(stack)) else stack[len(stack)-1]


if __name__ == "__main__":
    stack = create_stack()
    push(stack, str(1))
    push(stack, str(2))
    push(stack, str(3))
    push(stack, str(4))
    push(stack, str(5))

    print("popped item: " + pop(stack))
    print("stack after popping an element: " + str(stack))
    print(peek(stack[1]))

