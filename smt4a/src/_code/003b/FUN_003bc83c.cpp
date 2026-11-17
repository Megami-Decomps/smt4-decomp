/* NON_MATCHING: vector/end-pointer registers and encoded-category loop strength reduction differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SkillDataRecord.h"
#include <vector>

extern "C" {
s32 scrGetArg(s32);
void sysMemClear(void *, u32);

/* Keep only candidates whose skill category is supplied by a matching active combatant. */
u32 FUN_003bc83c()
{
    /* These members lie beyond the shared main-state prefix. */
    struct CandidateListView {
        u8 unk0000[0x4E58];
        std::vector<u16> candidates;
    };
    struct EncodedCategoryValues { u16 values[21]; };
    typedef char CandidateListOffsets[
        offsetof(CandidateListView, candidates) == 0x4E58 &&
        sizeof(std::vector<u16>) == 12 &&
        offsetof(BtlCombatantEntryA, data.values) == 0x2B6 ? 1 : -1];
    s32 enabled = scrGetArg(0);
    u32 category = scrGetArg(1);
    s32 supported[21];
    sysMemClear(supported, sizeof(supported));
    BtlMainStateA *battle = btlGetMainState();
    if (enabled) {
        std::vector<u16> &candidates = ((CandidateListView *)battle)->candidates;
        if (!candidates.empty()) {
            for (s32 index = 0; index < 109; ++index) {
                BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
                u64 flags = entry->flags;
                if ((flags & g_btlCandidateMasks.unavailable) &&
                    (flags & g_btlCandidateMasks.required) &&
                    !(flags & g_btlCandidateMasks.excluded)) {
                    const EncodedCategoryValues *values =
                        (const EncodedCategoryValues *)entry->data.values;
                    for (s32 column = 0; column < 21; ++column) {
                        if (category == (u32)(values->values[column] >> 10))
                            supported[column] = 1;
                    }
                }
            }
            std::vector<u16>::iterator candidate = candidates.begin();
            while (candidate != candidates.end()) {
                const ConsumableRecordA *mapping = itemTableGetItemRecord(*candidate);
                const SkillDataRecordA *skill = skillDataFindById(mapping->skillId);
                if (skill != NULL && supported[(skill->properties & 0xF800) >> 11] > 0)
                    ++candidate;
                else
                    candidate = candidates.erase(candidate);
            }
        }
    }
    return 1;
}
}
