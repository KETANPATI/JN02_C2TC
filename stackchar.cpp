#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<char> stack;
	stack.push('b');// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push('a');
	stack.push('e');
	stack.push('d');
	int num=0;
	stack.push(num);
	stack.pop();
	stack.pop();
	//stack.pop();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
