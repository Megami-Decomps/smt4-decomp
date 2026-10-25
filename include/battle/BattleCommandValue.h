#ifndef BATTLE_BATTLECOMMANDVALUE_H
#define BATTLE_BATTLECOMMANDVALUE_H
#include "common.h"

struct BtlMainStateA;

// A command's final data word may carry either an integer or float bit pattern.
union BattleCommandValue {
    u32 word;
    f32 real;
    BattleCommandValue() {}
    BattleCommandValue(s32 value) : word(value) {}
    BattleCommandValue(u32 value) : word(value) {}
    BattleCommandValue(f32 value) : real(value) {}
};
typedef char BattleCommandValueSizeCheck[sizeof(BattleCommandValue) == 4 ? 1 : -1];

extern "C" void FUN_003e77cc(BtlMainStateA *state, u32 kind, s32 unitIndex, s32 first, BattleCommandValue second);
#endif
