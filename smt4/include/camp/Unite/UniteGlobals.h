/* The fusion screen's global (Shin Megami Tensei IV). */
#ifndef SMT4_CAMP_UNITE_UNITEGLOBALS_H
#define SMT4_CAMP_UNITE_UNITEGLOBALS_H

#include "common.h"
#include "camp/Unite/UniteWork.h"

struct StatBlock;

extern "C" {

extern UniteWork *g_unite; /* 0x43dd68: the fusion screen's work, NULL while the screen is closed */

/* Fills g_unite's candidate list with the skills the result `resultId` can inherit from its two parents. */
void uniteBuildInheritedSkillCandidates(u16 resultId, const StatBlock *first, const StatBlock *second);

}

#endif
