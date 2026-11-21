/* NON_MATCHING: 6 lines; only the excluded-mask AND register pairing (`and r0, r0, r2; and r1, r1, ip` vs `and r2, r2, r0; and r0, r1, ip`) differs. */
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

/* Script command: retains only candidate items whose skill slot matches an active combatant's category. */
u32 FUN_003bc83c(void)
{
    struct CandidateListView {
        u8 unk0000[0x4E58];
        std::vector<u16> candidates;
    };
    s32 enabled = scrGetArg(0);
    s32 category = scrGetArg(1);
    s32 supported[21];
    sysMemClear(supported, sizeof(supported));
    CandidateListView *battle = (CandidateListView *)btlGetMainState();
    if (enabled && !battle->candidates.empty()) {
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if ((g_btlCandidateMasks.unavailable & entry->flags) &&
                (g_btlCandidateMasks.required & entry->flags) &&
                !(entry->flags & g_btlCandidateMasks.excluded)) {
                for (s32 column = 0; column < 21; ++column) {
                    if (category == btlEntryGetEncodedCategoryA(entry, column))
                        supported[column] = 1;
                }
            }
        }
        std::vector<u16>::iterator candidate = battle->candidates.begin();
        while (candidate != battle->candidates.end()) {
            const ConsumableRecordA *mapping = itemTableGetItemRecord(*candidate);
            const SkillDataRecordA *skill = skillDataFindById(mapping->skillId);
            if (skill != NULL && supported[(skill->properties & 0xF800) >> 11] > 0)
                ++candidate;
            else
                candidate = battle->candidates.erase(candidate);
        }
    }
    return 1;
}

} /* extern "C" */
