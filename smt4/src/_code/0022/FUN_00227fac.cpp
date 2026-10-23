/* NON_MATCHING: final entry flag update uses r0 instead of retail r1. */
#include "common.h"
#include "shard/PassiveSkill.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
struct BtlMainState;
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, u32);
void FUN_0022abe0(BtlEntry *, u16 *);
s32 btlQueryMatchingFlagColumn(BtlMainState *, BtlEntry *, s32);

// Apply the strongest passive affinity that is not already represented by the entry.
u32 FUN_00227fac(u32 listedId)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    u16 skills[10] = {};
    FUN_0022abe0(entry, skills);
    s32 affinity = 0;
    for (s32 i = 0; i < 9; ++i) {
        if (skills[i] != 0) {
            const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[i]);
            if (skill != NULL && (s32)(skill->affinity & 3) > affinity) {
                if (btlQueryMatchingFlagColumn(btlGetMainState(), entry, skill->affinity & 3) == 0)
                    affinity = skill->affinity & 3;
            }
        }
    }
    if (affinity == 0 || btlQueryMatchingFlagColumn(btlGetMainState(), entry, affinity) != 0)
        return 0;
    switch (affinity) {
    case 1:
        entry->flags |= 0x2000;
        break;
    case 2:
        entry->flags |= 0x4000;
        break;
    }
    return affinity;
}
}
