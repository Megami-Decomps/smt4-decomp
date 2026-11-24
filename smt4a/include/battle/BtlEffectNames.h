/* The battle effect work's name table (Apocalypse): four named effect entries the action start looks up
 * (btlEffectFindPreferredName) to pick the effect its unit plays. */
#ifndef SMT4A_BATTLE_BTLEFFECTNAMES_H
#define SMT4A_BATTLE_BTLEFFECTNAMES_H

#include "battle/BtlEffectLoad.h"

/* Older action-start call sites use these names for the shared record and the Apocalypse owner. */
typedef BtlDeathEffectEntry BtlEffectNameEntry;
typedef BtlEffectWorkA BtlEffectNameOwner;

extern "C" {
/* Finds the entry named like the preferred effect (first, when `preferFirst` is positive) or the fallback; NULL if none. */
char *btlEffectFindPreferredName(BtlEffectNameOwner *owner, s32 preferFirst);
}

#endif
