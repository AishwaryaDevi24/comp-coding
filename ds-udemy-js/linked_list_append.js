// Create the below linked list:
// myLinkedList = {
//   head: {
//     value: 10
//     next: {
//       value: 5
//       next: {
//         value: 16
//         next: null
//       }
//     }
//   }
// };
class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}
class LinkedList {
    constructor(value) {
      this.head = {
        value: value,
        next: null
      };
      this.tail = this.head;
      this.length = 1;
    }
    append(value) {
      //Code here
      const new_node = new Node(value);
      this.tail.next = new_node;
      this.tail = new_node;
      this.length++;
      return this;
    }

    prepend(value) {
        const new_node = new Node(value);
        new_node.next = this.head;
        this.head = new_node;
        this.length++;
        return this;
    }

    printList() {
        const arr = [];
        let currentNode = this.head;
        while(currentNode != null) {
            arr.push(currentNode.value);
            currentNode = currentNode.next;
        }
        console.log(arr)
    }

    insert(index, value) {
        if (index === 0) {
            return this.prepend(value);
        }
        if (index >= this.length) {
            return this.append(value);
        }
        let newNode = new Node(value);
        let currentNode = this.head;
        let prevNode = this.head;
        let count = 0;
        while (index != count && currentNode.next != null) {
            prevNode = currentNode;
            currentNode = currentNode.next;
            count++;
        }
        prevNode.next = newNode;
        newNode.next = currentNode;
        this.length++;
        return this;
    }
  }
  
  let myLinkedList = new LinkedList(10);
  myLinkedList.append(5);
  myLinkedList.append(16);
  myLinkedList.prepend(1);
  myLinkedList.insert(1000, 1000);
  myLinkedList.printList();