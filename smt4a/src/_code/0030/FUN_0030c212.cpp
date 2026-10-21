/* NON_MATCHING: retail emits 'beq.n 18'; compiler emits 'beq.n 1a' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node {
    u32 reserved;
    Node *parent,*left,*right;
};
void FUN_0030c212(Node **current) {
    Node *node=*current;
    if(node->right) {
        node=node->right;
        while(node->left) node=node->left;
        *current=node;
    } else {
        Node *parent=node->parent;
        while(node==parent->right) {
            node=parent;
            parent=parent->parent;
        }
        if(node->right!=parent) node=parent;
        *current=node;
    }
}
}
