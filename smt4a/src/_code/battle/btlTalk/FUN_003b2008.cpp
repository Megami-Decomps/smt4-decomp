/* NON_MATCHING: compiler emits generic memset helpers and different cached-pointer/count registers. */
#include "battle/btlTalk.h"
#include "gamedata/DataTable.h"
#include <stddef.h>
#include <string.h>

struct TalkCandidateRecordA {
    u8 unk00[6];
    u8 category;
    u8 unk07[0xe5];
    u16 enabled;
    u16 requiredFlag;
};
typedef char TalkCandidateOffsets[sizeof(TalkCandidateRecordA) == 0xf0 &&
    offsetof(TalkCandidateRecordA, enabled) == 0xec &&
    offsetof(TalkCandidateRecordA, requiredFlag) == 0xee ? 1 : -1];
extern "C" {
extern BtlTalkA *g_btlTalk;
void *btlTalkGetTableSection0(BtlTalkA *);
u32 scrGetArg(u32);
void scrSetResult(s32);
s32 gameFlagIsSet(u32);
u32 randRange(u16);

// Category six contributes twice to category zero's random selection.
u32 FUN_003b2008(void)
{
    // The indexed selection cache extends beyond BtlTalkA's shared prefix.
    struct TalkSelectionView {
        u8 unk00[0x34];
        s32 selections[128];
    };
    typedef char TalkSelectionOffset[offsetof(TalkSelectionView, selections) == 0x34 ? 1 : -1];
    s32 candidates[128];
    s32 available[128];
    u32 category = scrGetArg(0);
    void *table = btlTalkGetTableSection0(g_btlTalk);
    s32 count = dataTableGetCount(table);
    TalkCandidateRecordA *records = static_cast<TalkCandidateRecordA *>(dataTableGetEntries(table));
    memset(candidates, -1, sizeof(candidates));
    s32 candidateCount = 0;
    for (s32 index = 0; index < count; ++index) {
        TalkCandidateRecordA *record = &records[index];
        if (record->enabled) {
            u32 kind = record->category;
            bool doubleWeight = false;
            if (kind == 6) {
                kind = 0;
                doubleWeight = true;
            }
            if (category == kind && (!record->requiredFlag || gameFlagIsSet(record->requiredFlag))) {
                candidates[candidateCount++] = index;
                if (doubleWeight)
                    candidates[candidateCount++] = index;
            }
        }
    }
    memset(available, -1, sizeof(available));
    s32 availableCount = 0;
    s32 *candidateSlot = candidates;
    for (s32 remaining = 128; remaining; --remaining, ++candidateSlot) {
        s32 candidate = *candidateSlot;
        if (candidate != -1 && reinterpret_cast<TalkSelectionView *>(g_btlTalk)->selections[candidate] == -1)
            available[availableCount++] = candidate;
    }
    if (!availableCount)
        availableCount = 1;
    s32 selected = available[randRange(static_cast<u16>(availableCount - 1))];
    reinterpret_cast<TalkSelectionView *>(g_btlTalk)->selections[selected] = -1;
    scrSetResult(selected);
    return 1;
}
}
