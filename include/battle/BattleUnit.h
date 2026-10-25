#ifndef BATTLE_BATTLEUNIT_H
#define BATTLE_BATTLEUNIT_H

#include "common.h"
#include <stddef.h>

struct BtlMainStateA;

struct BattleUnit {
    union {
        u32 storage[0x495];
        struct {
            /* 0x000 */ u8 unk000[0x38];
            /* 0x038 */ u8 targeted[109];
        } selection;
    };
};

struct BattleUnitArray {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BattleUnit units[12];
};

struct BattleActionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BattleUnitArray *units;
    /* 0x08 */ u8 unk08[0x50];
    /* 0x58 */ u64 targetable;
};

typedef char BattleUnitLayoutCheck[
    sizeof(BattleUnit) == 0x1254 && offsetof(BattleUnit, selection.targeted) == 0x38 ? 1 : -1];
typedef char BattleUnitArrayLayoutCheck[
    offsetof(BattleUnitArray, units) == 4 && sizeof(BattleUnitArray) == 4 + 12 * 0x1254 ? 1 : -1];
typedef char BattleActionStateLayoutCheck[
    offsetof(BattleActionState, units) == 4 && offsetof(BattleActionState, targetable) == 0x58 &&
    sizeof(BattleActionState) == 0x60 ? 1 : -1];

extern "C" BattleUnit *btlUnitGet(BtlMainStateA *const *reference);

#endif
