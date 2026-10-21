/* NON_MATCHING: compiler keeps the iterator comparison at loop entry rather than rotating it to the bottom. */
#include "common.h"

struct SharedReference;
struct ReferenceTreeNode {
    u8 unk00[8];
    ReferenceTreeNode *left; // 0x08
    u8 unk0c[0xc];
    SharedReference *reference; // 0x18
};
struct ReferenceIterator {
    ReferenceTreeNode *node;
    ReferenceIterator() {}
    explicit ReferenceIterator(ReferenceTreeNode *value) : node(value) {}
};
struct ReferenceTree {
    u8 unk00[0x10];
    ReferenceTreeNode *sentinel; // 0x10
};
struct ReferenceTreeOwner {
    u32 unk00;
    ReferenceTree tree; // 0x04
};

extern "C" {
void sharedRefRelease(SharedReference *);
s32 wordRefsDiffer_00300366(const ReferenceIterator &, const ReferenceIterator &);
void wordMoveOut_00300376(ReferenceIterator *, ReferenceIterator *, s32);
void FUN_00300386(ReferenceIterator *, ReferenceTree *, ReferenceIterator *);

// Release each shared reference while erasing its node from the tree.
void FUN_002f2834(ReferenceTreeOwner *owner)
{
    ReferenceIterator iterator(owner->tree.sentinel->left);
    while (wordRefsDiffer_00300366(iterator, ReferenceIterator(owner->tree.sentinel))) {
        sharedRefRelease(iterator.node->reference);
        ReferenceIterator old;
        wordMoveOut_00300376(&old, &iterator, 0);
        ReferenceIterator position = old;
        ReferenceIterator next;
        FUN_00300386(&next, &owner->tree, &position);
    }
}
}
