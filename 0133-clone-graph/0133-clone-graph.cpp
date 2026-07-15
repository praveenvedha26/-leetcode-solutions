/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneutil(Node* node,unordered_map<Node*,Node*>&mpp) {
        Node * new_node = new Node(node->val);
        mpp[node]=new_node;

        for(auto itt: node->neighbors){
            if(mpp.find(itt)==mpp.end()){
                (new_node->neighbors).push_back(cloneutil(itt,mpp));
            }
            else{
                (new_node->neighbors).push_back(mpp[itt]);
            }
        }
        return new_node;
    }
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        unordered_map<Node*,Node*>mpp;
        return cloneutil(node,mpp);
    }
};