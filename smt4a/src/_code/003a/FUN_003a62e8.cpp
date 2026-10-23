/* NON_MATCHING: slot return and replacement value swap r4/r5 at the final update. */
#include "shard/W5_W5Match7_SelectedRecord.h"
#include "shard/W5_W5Match2_PairedIds.h"

extern "C" {
s32 recordContainsPairedId(const PairedIdList *, u32 id);
u16 FUN_003f3104(const void *owner);

static __inline s32 findOrAllocateSelection(u16 id)
{
    for (s32 index = 0; index < 24; ++index) {
        if (FUN_002613f0(index)->values[0] == id)
            return index;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (FUN_002613f0(index)->values[0] == 0) {
            SelectedRecord *empty = FUN_002613f0(index);
            empty->values[0] = 0;
            empty->values[1] = 0;
            empty->values[2] = 0;
            empty->values[3] = 0;
            return index;
        }
    }
    return -1;
}

// Replace a saved selection when its identifier is no longer present in the owner's pairs.
void FUN_003a62e8(const void *record)
{
    // The owner id is beyond the shared PairedIdList prefix.
    struct OwnerView {
        PairedIdList pairs;
        u8 unk44[0x1e];
        u16 id; // 0x62
    };
    const OwnerView *owner = static_cast<const OwnerView *>(record);
    u16 id = owner->id;
    for (s32 index = 0; index < 24; ++index) {
        if (FUN_002613f0(index)->values[0] == id) {
            if (recordContainsPairedId(&owner->pairs, FUN_002613f0(index)->values[1]))
                return;
            SelectedRecord *selection = FUN_002613f0(index);
            selection->values[0] = 0;
            selection->values[1] = 0;
            selection->values[2] = 0;
            selection->values[3] = 0;
            if (owner == NULL)
                return;
            s32 slot = findOrAllocateSelection(owner->id);
            if (slot < 0)
                return;
            u16 replacement = FUN_003f3104(owner);
            if (replacement != 0) {
                FUN_002613f0(slot)->values[0] = owner->id;
                FUN_002613f0(slot)->values[3] = replacement;
            }
            return;
        }
    }
}
}
