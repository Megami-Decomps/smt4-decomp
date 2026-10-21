#ifndef SHARD_W6_W6MATCH5_SEQUENCETREE_H
#define SHARD_W6_W6MATCH5_SEQUENCETREE_H

#include "common.h"

// The key prefix used by the signed, wrapping 16-bit sequence comparison.
struct SequenceTreeKey {
    u8 unk00[4]; // 0x00
    s16 value;   // 0x04
};

struct SequenceTreeNode {
    u32 unk00;                    // 0x00
    SequenceTreeNode *parent;     // 0x04; the sentinel stores the root here.
    SequenceTreeNode *left;       // 0x08
    SequenceTreeNode *right;      // 0x0c
    SequenceTreeKey key;          // 0x10; partial value prefix.
};

struct SequenceTree {
    u8 unk00[0x10];
    SequenceTreeNode *sentinel; // 0x10
    u8 unk14[5];
    u8 compareState[1];         // 0x19
};

struct SequenceTreeIterator {
    SequenceTreeNode *node; // 0x00
};

extern "C" u32 seq16IsGreater(const SequenceTreeKey *left, const SequenceTreeKey *right);
extern "C" u32 FUN_0030bf3a(void *context, const SequenceTreeKey *left, const SequenceTreeKey *right);

#endif
