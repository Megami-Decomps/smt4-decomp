/* NON_MATCHING: literal pool order only: retail places the global address word before the 0.0f and 1.0f words; built places it last. */
#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x000 */ u8 unk000[0xB4];
    /* 0x0B4 */ u8 flagA;
    /* 0x0B5 */ u8 flagB;
    /* 0x0B6 */ u16 timer;
    /* 0x0B8 */ u16 step;
    /* 0x0BA */ u8 unk0BA[2];
    /* 0x0BC */ f32 axisX;
    /* 0x0C0 */ f32 axisY;
    /* 0x0C4 */ f32 axisZ;
    /* 0x0C8 */ u8 unk0C8[0x144];
    /* 0x20C */ u32 value;
} Block;

typedef struct BlockHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Block *block;
} BlockHolder;

extern BlockHolder DAT_005806a0;

/* Resets the block's state with `value` and points its axis along +Z. */
void blockResetAxis(u32 value)
{
    Block *block = DAT_005806a0.block;

    block->value = value;
    block->flagA = 0;
    block->flagB = 0;
    block->timer = 10;
    block->step = 0;
    block->axisX = 0.0f;
    block->axisY = 0.0f;
    block->axisZ = 1.0f;
}

} /* extern "C" */
