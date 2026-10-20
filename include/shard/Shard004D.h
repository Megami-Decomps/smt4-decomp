/* Structs shared by the helper functions in code shard 004D. */
#ifndef SHARD_SHARD004D_H
#define SHARD_SHARD004D_H

#include "common.h"

#include "shard/Shard004C.h"

typedef struct SelectOwner {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 active;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ s16 selected;
} SelectOwner;

typedef struct OptionsBlock4D {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x062 */ u16 unk62;
    /* 0x064 */ u8 unk064[0xC8];
    /* 0x12C */ u16 unk12C;
    /* 0x12E */ u8 unk12E[2];
    /* 0x130 */ u16 flags;
    /* 0x132 */ u16 unk132;
    /* 0x134 */ u16 unk134;
    /* 0x136 */ u16 unk136;
} OptionsBlock4D;

typedef struct State4D {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ u8 unkA4[0x18];
    /* 0xBC */ u16 unkBC;
    /* 0xBE */ u8 unkBE[2];
    /* 0xC0 */ u32 unkC0;
} State4D;

typedef struct TreeNode TreeNode;
struct TreeNode {
    /* 0x00 */ TreeNode *left;
    /* 0x04 */ TreeNode *right;
};

typedef struct Tree {
    /* 0x00 */ TreeNode *root;
    /* 0x04 */ TreeNode sentinel;
    /* 0x0C */ TreeNode *first;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ TreeNode *unk14;
    /* 0x18 */ TreeNode *last;
    /* 0x1C */ u32 count;
    /* 0x20 */ void (*freeNode)(struct Tree *tree, TreeNode *node);
} Tree;

#endif
