#ifndef SHARD_W5_W5MATCH2_PROCESSQUERY_H
#define SHARD_W5_W5MATCH2_PROCESSQUERY_H
#include "common.h"
struct ProcessQueryNode {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 key;
    /* 0x28 */ u32 id;
    /* 0x2C */ u8 unk2C[0x20];
    /* 0x4C */ ProcessQueryNode *next;
    /* 0x50 */ u8 unk50[0x48];
    /* 0x98 */ u8 state;
};
struct ProcessQuerySlot { ProcessQueryNode *head; u32 unk04; };
struct ProcessQueryTable { ProcessQuerySlot *slots; };
#endif
