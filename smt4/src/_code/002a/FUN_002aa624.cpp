#include "common.h"

extern "C" {

int FUN_00147914(u32 a, u32 b);

typedef struct Block {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 size;
} Block;

typedef struct Pool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ int base;
    /* 0x08 */ int top;
    /* 0x0C */ u32 flags;
} Pool;

typedef struct Cursor {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ int next;
    /* 0x34 */ Block *block;
} Cursor;

void FUN_002aa624(Cursor *cursor, Pool *pool)
{
    cursor->block->size = (((pool->base + pool->top) - (int)cursor->block) - 0x18U) >> 3;
    FUN_00147914(pool->base, pool->top);
    pool->flags = pool->flags | 4;
    pool->top = cursor->next;
    cursor->block = NULL;
    cursor->next = 0;
}

} /* extern "C" */
