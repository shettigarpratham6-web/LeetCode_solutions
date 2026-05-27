#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        {
            return NULL;
        }
        unordered_map<Node*,Node*>copy;
        Node* temp=head;
        while(temp!=NULL)
        {
            copy[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            copy[temp]->next=copy[temp->next];
            copy[temp]->random=copy[temp->random];
            temp=temp->next;
        }
        return copy[head];
    }
};