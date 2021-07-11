//用两个栈实现队列
// https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/

//自己的写法，时间复杂度 O(N) 空间复杂度O(1)
//问题，其实不需要把deleteHead的stack归位
class CQueue {
 public:
  stack<int> stack1, stack2;
  CQueue() {
    while (!stack1.empty()) {
      stack1.pop();
    }
    while (!stack2.empty()) {
      stack2.pop();
    }
  }

  void appendTail(int value) { stack1.push(value); }

  int deleteHead() {
    if (!stack1.empty()) {
      while (!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
      }
    }
    if (stack2.empty()) {
      return -1;
    }
    int res = stack2.top();
    stack2.pop();
    while (!stack2.empty()) {
      stack1.push(stack2.top());
      stack2.pop();
    }
    return res;
  }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

////////////////////////
///////////
//推荐写法 将stack2的数都用完以后，再存放新的数
//时间复杂度 O(1) 空间复杂度O(1)
class CQueue {
 public:
  stack<int> stack1, stack2;
  CQueue() {
    while (!stack1.empty()) {
      stack1.pop();
    }
    while (!stack2.empty()) {
      stack2.pop();
    }
  }

  void appendTail(int value) { stack1.push(value); }

  int deleteHead() {
    if (stack2.empty()) {
      while (!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
      }
    }
    if (stack2.empty()) {
      return -1;
    } else {
      int res = stack2.top();
      stack2.pop();
      return res;
    }
  }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */