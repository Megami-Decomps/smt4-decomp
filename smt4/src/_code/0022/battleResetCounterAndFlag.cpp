/* NON_MATCHING: compiler uses an interior battle-flags base for BIC instead of the retail direct field offset. */
#include "common.h"
extern "C" {
struct ResetCounterOwner { u8 unk00[0x2F98]; u32 counter; };
struct BattleFlags { u8 unk00[0x634]; u32 flags; };
extern BattleFlags *g_btlMain;
void FUN_0024dc64(u32 *counter);
void FUN_00262a38(void);
/* Reset the pending battle counter and clear the main-state flag. */
void battleResetCounterAndFlag(ResetCounterOwner *owner) { owner->counter=0; FUN_0024dc64(&owner->counter); FUN_00262a38(); if (g_btlMain!=NULL) g_btlMain->flags&=~0x08000000; }
}
