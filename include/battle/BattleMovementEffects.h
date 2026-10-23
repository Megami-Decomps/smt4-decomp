#ifndef BATTLE_BATTLEMOVEMENTEFFECTS_H
#define BATTLE_BATTLEMOVEMENTEFFECTS_H
#include "common.h"
#include <stddef.h>
struct BattleMovementEffectResource {
    u8 id;
    u8 unk01[3];
    char *file;
    char key[128];
    u8 flags;
    u8 unk89[3];
};
struct BattleMovementEffects {
    u8 prefix[0x2E20];
    BattleMovementEffectResource resources[4];
    s32 loadState;
};
typedef char BattleMovementEffectsLayoutCheck[
    sizeof(BattleMovementEffectResource) == 0x8C && offsetof(BattleMovementEffects, loadState) == 0x3050 ? 1 : -1];
#endif
