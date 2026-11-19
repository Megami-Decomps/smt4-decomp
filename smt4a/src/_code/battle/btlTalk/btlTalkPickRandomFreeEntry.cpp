#include "battle/btlTalk.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "script/ScriptArgs.h"
#include "util/Random.h"

extern "C" {
extern BtlTalkA *g_btlTalk;
void __aeabi_memset4(void *dst, u32 size, s32 value);

/* Randomly chooses an enabled, unused negotiation entry. Category six counts twice in category zero. */
u32 btlTalkPickRandomFreeEntry(void)
{
    s32 candidates[128];
    s32 available[128];
    u32 category = scrGetArg(0);
    void *table = btlTalkGetTableSection0(g_btlTalk);
    s32 count = dataTableGetCount(table);
    const BtlTalkTableRecordA *records = static_cast<const BtlTalkTableRecordA *>(dataTableGetEntries(table));
    s32 candidateCount = 0;
    __aeabi_memset4(candidates, sizeof(candidates), -1);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].enabled) {
            u32 kind = records[index].category;
            bool doubleWeight = false;
            if (kind == 6) {
                kind = 0;
                doubleWeight = true;
            }
            if (category == kind && (!records[index].requiredFlag || gameFlagIsSet(records[index].requiredFlag))) {
                candidates[candidateCount++] = index;
                if (doubleWeight)
                    candidates[candidateCount++] = index;
            }
        }
    }
    s32 availableCount = 0;
    __aeabi_memset4(available, sizeof(available), -1);
    for (s32 i = 0; i < 128; ++i) {
        if (candidates[i] != -1 && g_btlTalk->used[candidates[i]] == -1) {
            available[availableCount++] = candidates[i];
        }
    }
    if (!availableCount)
        availableCount = 1;
    s32 selected = available[randRange(static_cast<u16>(availableCount - 1))];
    /* With no candidate, `selected` is -1 and this clears actorId, the word before used[] (as retail does). */
    g_btlTalk->used[selected] = -1;
    scrSetResult(selected);
    return 1;
}
}
