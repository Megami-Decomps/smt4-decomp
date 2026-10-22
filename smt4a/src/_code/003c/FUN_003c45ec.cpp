/* NON_MATCHING: paired mask loads and positive-value branch lowering differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 scrGetArg(u32);
void scrSetResult(s32);

// Report whether any eligible combatant with the requested id has a positive value.
u32 FUN_003c45ec(void)
{
    // Adding s32 members to the shared entry's union at 0x0a would shift its alignment.
    struct CandidateEntryView {
        u64 flags;
        u8 unk008[0xa4];
        s32 primary; // 0xac
        u32 unk0b0;
        s32 fallback; // 0xb4
        u8 unk0b8[0xae];
        u16 id; // 0x166
        u8 unk168[0x2a0];
    };
    u32 id = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        CandidateEntryView *entries = reinterpret_cast<CandidateEntryView *>(btlGetMainState()->entries);
        CandidateEntryView *entry = &entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) != 0 &&
            (g_btlCandidateMasks.required & flags) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            s32 value = entry->primary;
            if (value < 1)
                value = entry->fallback;
            if (value > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
