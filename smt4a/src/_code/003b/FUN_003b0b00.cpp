/* NON_MATCHING: register allocation only: retail forms the block pointer in r2 first (`add r2, r0, #8192`) and stores the low and high mask words separately (`str r1, [r2, #8]!`, `asr r0, r1, #31`, `str r0, [r2, #4]`); built keeps the pointer in r0 and merges the stores into `stm`. */
#include "common.h"

extern "C" {

typedef struct UnitPart {
    /* 0x00 */ u8 unk00[0xBE];
    /* 0xBE */ u16 mode;
} UnitPart;

typedef struct UnitData {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ UnitPart part;
} UnitData;

typedef struct BattleUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
} BattleUnit;

typedef struct BattleBlock {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 maskLow;
    /* 0xC */ s32 maskHigh;
} BattleBlock;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x2000];
    /* 0x2000 */ BattleBlock block;
} BattleState;

extern u32 g_btlScriptUnit;

BattleState *btlGetMainState(void);
u32 scrGetArg(void);
BattleUnit *btlUnitGet(u32 id);
s32 FUN_003283c8(s32 arg);

/* Script command: puts the script unit in mode 12 and sets the battle mask to the argument with bit 17 added. */
u32 FUN_003b0b00(void)
{
    u32 arg = scrGetArg();
    UnitPart *part = &btlUnitGet(g_btlScriptUnit)->data->part;
    BattleBlock *block;

    part->mode = 12;
    block = &btlGetMainState()->block;
    s32 mask = arg | 0x20000;

    block->maskLow = mask;
    block->maskHigh = mask >> 31;
    FUN_003283c8(1);
    return 1;
}

} /* extern "C" */
