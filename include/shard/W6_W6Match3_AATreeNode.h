#ifndef SHARD_W6_W6MATCH3_AATREENODE_H
#define SHARD_W6_W6MATCH3_AATREENODE_H

#include "common.h"

// Full rotation-node layout; Shard004D.h's TreeNode models only the two-link prefix.
struct AATreeNode {
    /* 0x00 */ AATreeNode* left;
    /* 0x04 */ AATreeNode* right;
    /* 0x08 */ AATreeNode* parent;
    /* 0x0C */ u8 level;
    /* 0x0D */ u8 unk0d[3];
};

#endif
