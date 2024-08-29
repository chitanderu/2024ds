
#include <iostream>

using namespace std;

const int N = 100010;




struct ListNode {
    int val;         // 节点值
    ListNode *next;  // 指向下一节点的指针
    ListNode(int x) : val(x), next(nullptr) {}  // 构造函数
};


int  main()
{  
 
ListNode* n0 = new ListNode(1);
ListNode* n1 = new ListNode(3333);
ListNode* n2 = new ListNode(2);
ListNode* n3 = new ListNode(52323);
ListNode* n4 = new ListNode(4);
ListNode* n5=new ListNode(789);
// 构建节点之间的引用
n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;

  ListNode* current = n0;  // 从第一个节点开始
    while (current != nullptr) {
        std::cout << current->val << " ";  // 输出当前节点的值
        current = current->next;  // 移动到下一个节点
       }




  return 0;     
}