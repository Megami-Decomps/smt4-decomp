/* Queries of the battle UI's objC block (smt4a). */
#ifndef SMT4A_BATTLE_BTLUIOBJCQUERY_H
#define SMT4A_BATTLE_BTLUIOBJCQUERY_H

#include "battle/btlUI.h"
struct BtlUiA;
struct ActorCardAnimationsA;

extern "C" {

/* Scans objC's state bytes; the nonzero result tells the block is active. */
u32 FUN_002f934c(BtlUiObjCA *obj);

/* The same query on the global battle UI's objC; the argument is ignored. */
u32 FUN_004aa750(struct BtlUiA *ui);

/* Whether the indexed actor card is outside the active animation states (1–4). */
bool btlActorCardIsIdle(const ActorCardAnimationsA *cards, s32 index);
bool FUN_004aa768(BtlUiA *ui, s32 index);

} /* extern "C" */

#endif
