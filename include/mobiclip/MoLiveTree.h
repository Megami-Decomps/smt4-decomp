#ifndef MOBICLIP_MOLIVETREE_H
#define MOBICLIP_MOLIVETREE_H

#include "mobiclip/MoLiveContainers.h"
#include <new>
#include <utility>

namespace MoLive {

/* The links every tree node starts with (an AA tree: the level balances it). */
struct TreeLinks {
    /* 0x00 */ TreeLinks *left;
    /* 0x04 */ TreeLinks *right;
    /* 0x08 */ TreeLinks *parent;
    /* 0x0C */ u32 level;
};

/* The part of the tree that does not depend on what it stores. */
struct TreeBase {
    /* Makes an empty tree; `hook` is stored in unk20. */
    TreeBase(void (*hook)());

    /* 0x00 */ TreeLinks *root;
    /* 0x04 */ TreeLinks nil;     /* every leaf links to it; its parent link mirrors the root */
    /* 0x14 */ TreeLinks *first;
    /* 0x18 */ TreeLinks *last;
    /* 0x1C */ u32 count;
    /* 0x20 */ void *unk20;
};

} /* namespace MoLive */

/* Links a freshly attached node into the tree and rebalances up to the root. */
extern "C" void FUN_004d8f4c(MoLive::TreeBase *tree, MoLive::TreeLinks *node);

namespace MoLive {

template <class Value>
struct TreeNode : TreeLinks {
    typedef std::pair<const u32, Value> value_type;

    /* 0x10 */ value_type value;
};

/* Ordered map from u32 to Value; every node's memory comes from the allocator the tree was made with. */
template <class Value>
class Tree : public TreeBase {
public:
    typedef TreeNode<Value> Node;
    typedef typename Node::value_type value_type;

    /* The insertion result: the node holding the key and whether this call created it. */
    struct InsertResult {
        InsertResult(TreeLinks *node, bool inserted) : node(node), inserted(inserted) {}
        InsertResult(const InsertResult &other) : node(other.node), inserted(other.inserted) {}

        TreeLinks *node;
        bool inserted;
    };

    InsertResult insert(const u32 &keyRef, const Value &value)
    {
        InsertResult result(&nil, false);
        u32 key = keyRef;

        TreeLinks *parent = &nil;
        TreeLinks *lowerBound = &nil;
        TreeLinks **link = &root;
        TreeLinks *current = root;
        while (current != &nil) {
            parent = current;
            if (static_cast<Node *>(current)->value.first < key) {
                link = &current->right;
            } else {
                lowerBound = current;
                link = &current->left;
            }
            current = *link;
        }

        if (lowerBound == &nil || key < static_cast<Node *>(lowerBound)->value.first) {
            Node *node = static_cast<Node *>(allocator.source->allocate(sizeof(Node)));
            if (node == NULL) {
                allocator.source->report("MoLive::Allocator: not enough memory to allocate %d bytes !!!\n", sizeof(Node));
            }
            if (node != NULL) {
                new (&node->value) value_type(key, value);
                node->parent = parent;
            }
            if (node == NULL) {
                lowerBound = &nil;
            } else {
                *link = node;
                FUN_004d8f4c(this, node);
                lowerBound = node;
                result.inserted = true;
            }
        }
        result.node = lowerBound;
        return result;
    }

    TreeLinks *end() { return &nil; }

    /* 0x24 */ StlAllocator<Node> allocator;

    Tree(Allocator *source, void (*hook)()) : TreeBase(hook), allocator(source) {}
};

} /* namespace MoLive */

#endif
