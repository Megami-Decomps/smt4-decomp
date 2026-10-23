#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"

struct BtlEntry;
extern "C" {
BtlMainState *btlGetMainState(void);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, u32);
void FUN_0022abe0(const BtlEntry *, u16 *);

/* Accumulate the special affinity override supplied by learned passive skills. */
u32 btlGetPassiveAffinityOverride(u32 listedId, u32 affinity)
{
    u32 result = 0;
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    u16 skills[10] = {};
    FUN_0022abe0(entry, skills);
    for (s32 i = 0; i < 9; ++i) {
        if (skills[i] == 0) {
            continue;
        }
        const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[i]);
        if (skill == NULL) {
            continue;
        }
        switch (affinity) {
        case 11:
            if (skill->affinity & 0x01000000) result |= 0x10000;
            break;
        case 12:
            if (skill->affinity & 0x02000000) result |= 0x10000;
            break;
        case 13:
            if (skill->affinity & 0x04000000) result |= 0x10000;
            break;
        case 14:
            if (skill->affinity & 0x08000000) result |= 0x10000;
            break;
        case 15:
            if (skill->affinity & 0x10000000) result |= 0x10000;
            break;
        case 16:
            if (skill->affinity & 0x20000000) result |= 0x10000;
            break;
        case 9:
            if (skill->affinity & 0x00400000) result |= 0x10000;
            break;
        }
    }
    return result;
}
}
