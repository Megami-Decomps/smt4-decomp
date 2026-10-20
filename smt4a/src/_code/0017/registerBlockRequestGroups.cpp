#include "common.h"

extern "C" {

typedef struct RegisterBlock {
    /* 0x000 */ u32 pending;      /* register bits to set for the requested groups */
    /* 0x004 */ u32 applied;      /* groups requested so far */
    /* 0x008 */ u32 blocked;      /* groups that may not be requested */
    /* 0x00C */ u8 unk00C[0x100];
    /* 0x10C */ u8 tableA[0x84];
    /* 0x190 */ u8 tableB[0x84];
} RegisterBlock;

void sysMemClear(void *block, s32 size);
extern RegisterBlock *DAT_005b4400;

/* Requests the register groups in `groups` (minus the blocked ones): ORs each group's register bits into `pending`, clears the two tables for group 0x40 and records the groups in `applied`. */
void registerBlockRequestGroups(u32 groups)
{
    RegisterBlock *block;

    block = DAT_005b4400;
    groups = groups & ~block->blocked;
    if ((groups & 1) != 0) {
        block->pending = block->pending | 0x100000;
    }
    if ((groups & 2) != 0) {
        block->pending = block->pending | 0x10000;
    }
    if ((groups & 4) != 0) {
        block->pending = block->pending | 0x1800000;
    }
    if ((groups & 8) != 0) {
        block->pending = block->pending | 0x600000;
    }
    if ((groups & 0x10) != 0) {
        block->pending = block->pending | 0x10000;
    }
    if ((groups & 0x20) != 0) {
        block->pending = block->pending | 0x80000;
    }
    if ((groups & 0x40) != 0) {
        block->pending = block->pending | 0x2004038;
        sysMemClear(block->tableA, 0x84);
        sysMemClear(block->tableB, 0x84);
    }
    if ((groups & 0x80) != 0) {
        block->pending = block->pending | 0x1C00;
    }
    if ((groups & 0x100) != 0) {
        block->pending = block->pending | 1;
    }
    if ((groups & 0x200) != 0) {
        block->pending = block->pending | 0x80C2;
    }
    if ((groups & 0x400) != 0) {
        block->pending = block->pending | 4;
    }
    if ((groups & 0x800) != 0) {
        block->pending = block->pending | 0x100;
    }
    if ((groups & 0x1000) != 0) {
        block->pending = block->pending | 0x200;
    }
    block->applied = block->applied | groups;
}

} /* extern "C" */
