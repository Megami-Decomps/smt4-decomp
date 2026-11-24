#pragma once
#include "common.h"

/* Functions in the 0x003d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u32 itemDataGetValue(u32 id);

s32 skillGetCostWithRankReduction(u32 id, s32 useSkillRank);

/* The player's affinity slots (demonBuildAffinitySlots): entry `index`'s kind (bits 10 and up) and its
 * percentage (low 10 bits, compared signed by its callers). */
u16 playerPackedEntryHigh(s32 index);
s32 playerPackedEntryLow10(s32 index);

} /* extern "C" */
