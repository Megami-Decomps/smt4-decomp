/* NON_MATCHING: null fallback returns directly instead of retaining a zero selected ID; output stack slots and saved registers differ. */
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
s32 FUN_003e48bc(void);
s32 FUN_003e4978(void);
PartySlotA *FUN_003e4d68(u16 slot);
s32 FUN_00187168(PartySlotA *slot);
s32 partySlotMatchesSelected(PartySlotA *slot);
PartySlotA *saveSlotFindSelected(void);
s32 lcgRandomRange(u16 maximum);
void *FUN_0019acdc(u16 id, u32 kind);
void FUN_003f1b3c(u32 request, void *record, s32 kind, s32 *value, u32 result[3]);
void FUN_0047f7ac(s32 enabled, u32 result);
void FUN_004fdc9c(s32 first, s32 second, s32 id, s32 value);

// Choose an eligible nonselected party member, falling back to the selected member.
void FUN_003f0070(u32 request)
{
    if (FUN_003e48bc() == 0 || FUN_003e4978() == 0) {
        return;
    }
    u16 candidates[12] = {0};
    s32 count = 0;
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = FUN_003e4d68((u16)index);
        if (FUN_00187168(slot) != 0 && partySlotMatchesSelected(slot) == 0) {
            candidates[count++] = slot->id;
        }
    }
    u16 selectedId = 0;
    if (count == 0) {
        PartySlotA *slot = saveSlotFindSelected();
        if (slot != NULL) {
            candidates[0] = slot->id;
            count = 1;
        }
    }
    if (count != 0) {
        selectedId = candidates[lcgRandomRange((u16)(count - 1))];
    }
    if (selectedId != 0) {
        s32 value;
        u32 result[3];
        void *record = FUN_0019acdc(selectedId, 1);
        FUN_003f1b3c(request, record, 6, &value, result);
        FUN_0047f7ac(1, result[0]);
        FUN_004fdc9c(0, 0, selectedId, value);
    }
}
}
