#pragma once
#include "common.h"

/* Functions in the 0x003d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

u32 itemDataGetValue(u32 id);

s32 skillGetCostWithRankReduction(u32 id, s32 useSkillRank);

} /* extern "C" */
