/* NON_MATCHING: armcc predicates the active-flag test (ldrbeq/cmpeq/movne); retail branches around it (bne/beq) and returns 1 from a shared pop; separate-if, nested-if and || forms all predicate. */
#include "common.h"
extern "C" {
struct StateSubrecord { u8 unk00[0x50]; s16 state; u8 unk52[2]; u8 active; };
struct StateOwner { u8 unk00[0x1C4]; StateSubrecord record; };
s8 uiSpriteGetCompletionState(const StateSubrecord *record);
s32 uiSpriteGetOperationMode(const StateSubrecord *record);
/* Query the nested record only in state three with its active flag clear. */
s32 recordQueryStateThree(const StateOwner *owner)
{
    if (uiSpriteGetOperationMode(&owner->record) != 3)
        return 1;
    if (owner->record.active != 0)
        return 1;
    return uiSpriteGetCompletionState(&owner->record);
}
}
