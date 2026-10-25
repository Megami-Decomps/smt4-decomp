/* NON_MATCHING: register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
extern "C" {
u32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 kind, u32 *first, u32 *count);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);

u32 FUN_003bbf60(void)
{
    /* A 32-bit field in the shared union at +0xA would shift its alignment. */
    struct PropertyView {
        u8 prefix[0x74];
        s32 values[12];
    };
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = 0;
    if (kind == 0)
        property = 7;
    else if (kind == 1)
        property = 8;
    else if (kind == 2)
        property = 10;
    else if (kind == 3)
        property = 11;
    u32 first, count;
    FUN_00301a08(btlResolveEntryChoice(scrGetArg(2)), &first, &count);
    for (s32 index = first; static_cast<s32>(first + count) > index; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) && entry->id == id &&
            reinterpret_cast<const PropertyView *>(entry)->values[property] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry && entry->id == id &&
            reinterpret_cast<const PropertyView *>(entry)->values[property] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
