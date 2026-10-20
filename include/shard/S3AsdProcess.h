/* AsdSDK process table: `slots` has one list per id >> 20 (8 bytes each: the head of a chain of
 * process nodes), `count` slots in all. A node is addressed by the low 20 bits of its id
 * (`key`); its flags are changed by a mask that never touches the top and low nibble. */
#ifndef SHARD_S3ASDPROCESS_H
#define SHARD_S3ASDPROCESS_H

#include "common.h"

#define ASDPROCESS_MASK_BITS 0x0FFFFFF0  /* flag bits a mask may change */

typedef struct AsdProcessNode {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 flags;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 key;                         /* low 20 bits of the id */
    /* 0x28 */ u32 id;
    /* 0x2C */ u8 unk2C[0x20];
    /* 0x4C */ struct AsdProcessNode *next;     /* next node of the slot */
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ struct AsdProcessNode *children; /* first child */
    /* 0x5C */ struct AsdProcessNode *sibling;  /* next child of the parent */
} AsdProcessNode;

typedef struct AsdProcessSlot {
    /* 0x00 */ AsdProcessNode *first;
    /* 0x04 */ u32 unk04;
} AsdProcessSlot;

typedef struct AsdProcessTable {
    /* 0x00 */ AsdProcessSlot *slots;
    /* 0x04 */ s32 count;
} AsdProcessTable;

#endif
