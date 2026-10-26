/* NON_MATCHING: candidate flags collapse to an OR test, loop branches and status-query scratch allocation differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

struct PartyRescueEntryView {
    u16 timer;
    u16 flags;
};
extern "C" {
void *asdOperatorNewC(u32);
void asdMemFreeIfNotNull(void *);
u32 FUN_00246134(s32, u32, s32, s32);
u32 btlGetPassiveAffinityOverride(u32, u32);
s32 randRange(u16);
void FUN_00246e24(u32, u32, BtlActionRecord *, u32, s32);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, s32);
void FUN_0022a5d8(u32, BtlEntry *, s32);

void FUN_003cefe0(BtlMainState **owner, u32 action, u32 parameter)
{
    if ((*owner)->battleFlags & 4)
        return;
    bool noCandidates = true;
    bool noIncapacitated = true;
    s32 *candidates = static_cast<s32 *>(asdOperatorNewC(4 * sizeof(s32)));
    s8 count = 0;
    for (s32 i = 0; i < 4; ++i) {
        BtlEntry *entry = &(*owner)->entries[i];
        if ((entry->flags & BTL_ENTRY_FLAG_ACTIVE) && !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
            !(entry->groupMask & 0x400) && !(entry->groupMask & 4)) {
            if (!(entry->groupMask & 0x200)) {
                u32 status = FUN_00246134(entry->members.ids[0], 15, 2, -1);
                u32 passive = btlGetPassiveAffinityOverride(entry->members.ids[0], 15);
                if (!((status | passive) & 0x170000)) {
                    noCandidates = false;
                    candidates[count++] = entry->members.ids[0];
                }
            } else {
                noIncapacitated = false;
            }
        }
    }
    if (!noCandidates && !noIncapacitated && count &&
        (randRange(99) < 15 || ((*owner)->editorControl.flags & 0x1000000))) {
        BtlActionRecord *record = &(*owner)->actions[candidates[randRange(static_cast<u16>(count - 1))]];
        FUN_00246e24(parameter, action, record, 0x200, 1);
        BtlEntry *entry = btlMainFindEntryByListedId(*owner, record->memberId);
        PartyRescueEntryView *rescue = reinterpret_cast<PartyRescueEntryView *>(entry->unk1c8);
        rescue->timer = 0;
        rescue->flags |= 0x10;
        FUN_0022a5d8(0x1C, entry, 1);
    }
    asdMemFreeIfNotNull(candidates);
}
}
