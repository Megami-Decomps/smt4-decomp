/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs 188 rows); retail keeps the threshold tables zero-initialised before filling and the group counters in a stack array with its own address arithmetic */
#include "common.h"

// One generated board cell: an id and two random rolls.
struct BoardCell {
    u32 id;                 // 0x00
    u32 rollA;              // 0x04
    u32 rollB;              // 0x08
    u32 unk0c[2];
};

// Generated board data (lives at +0x1078 of the owning screen).
struct BoardBlock {
    u32 state[24];              // 0x000: 0 pending, 1 revealed, 2 bonus
    u32 value[24];              // 0x060
    u32 kind[24];               // 0x0c0
    u32 counts[4][6];           // 0x120: per group: cells by state [0..2], by kind [3..5]
    BoardCell cells[24];        // 0x180
    u32 rollMinA;               // 0x360
    u32 rollMaxA;               // 0x364
    u32 rollMinB;               // 0x368
    u32 rollMaxB;               // 0x36c
    u8 unk370[0x380 - 0x370];
    u32 idZeroNormal;           // 0x380
    u32 idNineNormal;           // 0x384
    u32 idRangeLow;             // 0x388
    u32 idRangeHigh;            // 0x38c
    u32 idZeroBonus;            // 0x390
    u32 idNineBonus;            // 0x394
    u32 idMidBonus;             // 0x398
};

extern "C" {

extern const u32 DAT_00530df0[24];

s32 FUN_00184964(s32 low, s32 high);
void sysMemClear(void* data, u32 size);

// Picks `count` distinct values in [0, range] into `out`.
static inline void pickDistinct(u32* out, s32 count, s32 range)
{
    u8 used[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    for (s32 i = 0; i < count; ) {
        s32 pick = FUN_00184964(0, range);
        if (used[pick] == 0) {
            used[pick] = 1;
            out[i++] = pick;
        }
    }
}

// Generates the 24-cell board: each of four groups gets a random threshold table and the
// cells (visited in the fixed DAT_00530df0 order) are classified against it.
void FUN_003b7b4c(u8* screen)
{
    BoardBlock* block = reinterpret_cast<BoardBlock*>(screen + 0x1078);
    u32 order[24];
    for (s32 i = 0; i < 24; i++) order[i] = DAT_00530df0[i];

    u32 groupLimit[4];
    u32 thresholdA[4][6];
    u32 thresholdB[4][6];
    for (s32 g = 0; g < 4; g++) {
        groupLimit[g] = FUN_00184964(2, 3);
        pickDistinct(thresholdA[g], 6, 5);
        pickDistinct(thresholdB[g], 6, 9);
    }

    sysMemClear(block->counts, 0x60);
    sysMemClear(block->cells, 0x1e0);
    u32 used[4] = { 0, 0, 0, 0 };
    for (s32 i = 0; i < 24; i++) {
        u32 g = order[i];
        u32 slot = used[g];
        u32 limit = thresholdA[g][slot];
        u32 selector = thresholdB[g][slot];
        u32 state;
        u32 value;
        if ((s32)groupLimit[g] >= (s32)limit) {
            state = 1;
            value = FUN_00184964(0, 3) + 2029;
        } else if ((s32)groupLimit[g] + 1 >= (s32)limit) {
            state = 2;
            value = 2033;
        } else {
            state = 0;
            value = 2000;
        }
        block->state[i] = state;
        block->counts[g][state]++;
        block->value[i] = value;
        if (state == 1) {
            if (selector == 0) {
                block->cells[i].id = block->idZeroNormal;
                block->kind[i] = 0;
            } else if (selector == 9) {
                block->cells[i].id = block->idNineNormal;
                block->kind[i] = 2;
            } else {
                block->cells[i].id = FUN_00184964(block->idRangeLow, block->idRangeHigh);
                block->kind[i] = 1;
            }
        } else if (state == 2) {
            if (selector == 0) {
                block->cells[i].id = block->idZeroBonus;
                block->kind[i] = 0;
            } else if (selector == 9) {
                block->cells[i].id = block->idNineBonus;
                block->kind[i] = 2;
            } else {
                block->cells[i].id = block->idMidBonus;
                block->kind[i] = 1;
            }
        } else {
            block->kind[i] = 0;
            block->cells[i].id = 1;
        }
        block->counts[g][3 + block->kind[i]]++;
        block->cells[i].rollA = FUN_00184964(block->rollMaxA, block->rollMinA);
        block->cells[i].rollB = FUN_00184964(block->rollMaxB, block->rollMinB);
        used[g]++;
    }
}

} /* extern "C" */
