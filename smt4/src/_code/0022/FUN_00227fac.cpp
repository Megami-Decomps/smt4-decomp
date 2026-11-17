#include "common.h"
#include "shard/PassiveSkill.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {
struct BtlMainState;
void btlEntryGetPassiveSkillIds(BtlEntry *, u16 *);
s32 btlQueryMatchingFlagColumn(BtlMainState *, BtlEntry *, s32);

// Apply the strongest passive affinity that is not already represented by the entry.
u32 FUN_00227fac(u32 listedId)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    u16 skills[10] = {};
    btlEntryGetPassiveSkillIds(entry, skills);
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
        entry->flagMask |= 0x2000;
        break;
    case 2:
        entry->flagMask |= 0x4000;
        break;
    }
    return affinity;
}
}
