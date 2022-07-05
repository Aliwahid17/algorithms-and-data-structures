// JavaScript program to implement Priority Queue
// using Arrays

// Structure for the elements in the
// priority queue

class item {
  constructor() {
    this.value;
    this.priority;
  }
}

// Store the element of a priority queue
let pr = [];
for (let i = 0; i < 100000; i++) {
  pr.push(new item());
}

// Pointer to the last index
let size = -1;

// Function to insert a new element
// into priority queue

function enqueue(value, priority) {
  // Increase the size
  size++;

  // Insert the element
  pr[size] = new item();
  pr[size].value = value;
  pr[size].priority = priority;
}

// Function to check the top element
function peek() {
  let highestPriority = Number.MIN_SAFE_INTEGER;
  let ind = -1;

  // Check for the element with highest priority

  for (var i = 0; i <= size; i++) {
    //If priority is same choose
    // the element with the
    // highest value

    if (
      highestPriority == pr[i].priority &&
      ind > -1 &&
      pr[ind].value < pr[i].value
    ) {
      highestPriority = pr[i].priority;
      ind = i;
    } else if (highestPriority < pr[i].priority) {
      highestPriority = pr[i].priority;
      ind = i;
    }
  }
  // Return position of the element
  return ind;
}
// Function to remove the element with
// the highest priority
function dequeue() {
  // Find the position of the element
  // with highest priority
  let ind = peek();

  // Shift the element one index before
  // from the position of the element
  // with highest priority is found
  for (var i = ind; i < size; i++) {
    pr[i] = pr[i + 1];
  }

  // Decrease the size of the
  // priority queue by one
  size--;
}

// Function Call to insert elements
// as per the priority
enqueue(10, 2);
enqueue(14, 4);
enqueue(16, 4);
enqueue(12, 3);

// Stores the top element
// at the moment
let ind = peek();

console.log(pr[ind].value);

// Dequeue the top element
dequeue();

// Check the top element
ind = peek();
console.log(pr[ind].value);

// Dequeue the top element
dequeue();

// Check the top element
ind = peek();
console.log(pr[ind].value);
