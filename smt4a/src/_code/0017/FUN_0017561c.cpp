#include "common.h"

extern "C" {

void FUN_00197d68(void *list, void *head, s32 count);

typedef struct Pool {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ u8 headA[0x80];
    /* 0x0B4 */ u8 listB[0x34];
    /* 0x0E8 */ u8 headB[0x84];
    /* 0x16C */ u32 first;
    /* 0x170 */ u32 last;
    /* 0x174 */ u32 count;
    /* 0x178 */ u8 unk178[4];
    /* 0x17C */ u32 owner;
    /* 0x180 */ u32 units;
    /* 0x184 */ u32 unk184;
    /* 0x188 */ u32 unk188;
    /* 0x18C */ u8 unk18C;
    /* 0x18D */ u8 ready;
} Pool;

/* Initialises the object: clears its list state, records `owner` and the size `bytes` in 4-byte units, sets up the two lists (0x20 and 0x21 entries) and marks it ready. */
void FUN_0017561c(Pool *pool, u32 owner, u32 bytes)
{
    pool->first = 0;
    pool->last = 0;
    pool->count = 0;
    pool->unk184 = 0;
    pool->unk188 = 0;
    pool->unk18C = 0;
    pool->owner = owner;
    pool->units = bytes >> 2;
    FUN_00197d68(pool, pool->headA, 0x20);
    FUN_00197d68(pool->listB, pool->headB, 0x21);
    pool->ready = 1;
}

} /* extern "C" */
