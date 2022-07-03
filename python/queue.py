# Queue implementation in Python

from ast import If, main
from multiprocessing.spawn import _main
from turtle import mainloop
from unicodedata import name


class Queue:
    def __init__(self):
        self.queue = []
    
    # Adding an element

    def enqueue(self,item):
        self.queue.append(item)
    
    # Removing an element

    def dequeue(self):
        return None if len(self.queue) < 1 else self.queue.pop(0)
    
    # Display the queue

    def display(self):
        print(self.queue)
    
    def size(self):
        return len(self.queue)


if __name__ == "__main__":
    q = Queue()
    q.enqueue(1)
    q.enqueue(2)
    q.enqueue(3)
    q.enqueue(4)
    q.enqueue(5)

    q.display()

    q.dequeue()

    print("After removing an element")
    q.display()