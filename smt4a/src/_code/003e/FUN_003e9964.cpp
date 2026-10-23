/* NON_MATCHING: Inlined party checks hoist global subject loads; trigger-mask loads, request-field addresses and return registers differ. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
s32 bitsAt60Test(const void *subject, u32 mask);
}

static __inline u32 partyHasUnlockedSubject(s32 hasParty)
{
    if (hasParty != 0 && g_btlMain.party != NULL) {
        if (g_btlMain.partySubject != NULL && bitsAt60Test(g_btlMain.partySubject, 1) == 0) {
            return 1;
        }
        for (s32 index = 0; index < g_btlMain.party->count; ++index) {
            BtlPartySubA *subject = &((BtlPartyEntryA *)g_btlMain.party)[index].sub;
            if (subject != NULL && subject->unk62 != 0 && bitsAt60Test(subject, 1) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

extern "C" u32 FUN_003e9964(BattleMaskState *state)
{
    /* The request fields extend beyond the shared battle-mask prefix. */
    struct RequestView {
        u8 unk0000[0x12C];
        s32 hasParty;
        u8 unk0130[0x4D1C];
        u8 refresh;
        u8 unk4E4D;
        u16 count;
    };
    struct TriggerMasksView {
        u8 unk000[0xD0];
        u32 triggerLow;
        u32 triggerHigh;
        u8 unk0D8[0xF0];
        u32 immediateLow;
        u32 immediateHigh;
    };
    typedef char RequestOffsetsCheck[offsetof(RequestView, refresh) == 0x4E4C &&
        offsetof(RequestView, count) == 0x4E4E && offsetof(TriggerMasksView, immediateLow) == 0x1C8 ? 1 : -1];
    RequestView *request = (RequestView *)state;
    if (request->refresh != 0) {
        request->refresh = 0;
        return partyHasUnlockedSubject(request->hasParty);
    }
    TriggerMasksView *masks = (TriggerMasksView *)&g_btlMain;
    u64 trigger = ((u64)masks->triggerHigh << 32) | masks->triggerLow;
    if ((state->mask & trigger) != 0 && request->count != 0) {
        u64 immediate = ((u64)masks->immediateHigh << 32) | masks->immediateLow;
        if ((state->mask & immediate) != 0) {
            return 1;
        }
        return partyHasUnlockedSubject(request->hasParty);
    }
    return 0;
}
