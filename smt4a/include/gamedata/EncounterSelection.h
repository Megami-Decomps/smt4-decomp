/* Apocalypse encounter-table selection and field-enemy presentation metadata. */
#ifndef SMT4A_GAMEDATA_ENCOUNTERSELECTION_H
#define SMT4A_GAMEDATA_ENCOUNTERSELECTION_H

#include "common.h"

extern "C" {
/* First flagged member, otherwise the highest-level member, of an encounter. */
u32 dataSelectPrioritizedCandidate(s32 encounterId);
/* Conditional field-model kind from the encounter record's packed metadata. */
u32 lookupConditionalSixBitValue(u32 encounterId);
/* Variant halfword at encounter-record offset 0x10. */
u16 FUN_004bb870(s32 encounterId);
s32 textureEntryMeetsUnlockRequirements(u32 encounterId);
}

#endif
