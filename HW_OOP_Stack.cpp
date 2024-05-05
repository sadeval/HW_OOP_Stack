#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    cout << "Elements added to the stack: ";
    stack<int> tempStack; 
    while (!myStack.empty()) {
        tempStack.push(myStack.top());
        cout << myStack.top() << " ";
        myStack.pop();
    }

    while (!tempStack.empty()) {
        myStack.push(tempStack.top());
        tempStack.pop();
    }

    cout << "\n";

    myStack.pop();
    myStack.pop();

    cout << "Elements remaining in the stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << "\n";

}
