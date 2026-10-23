#include "shard/W6_W6Match1_PartySlot.h"

namespace {
struct PortraitSlotTableView {
    u8 prefix[0x1C9F];
    s8 active[4];
};
}
extern "C" {
PortraitSlotTableView *gameGetSlotTable();
PartySlotA *gameGetSlotRecord();
PartySlotA *btlMainGetUnk14();
void FUN_0020ad6c(void *work, s32 state, s32 initial);
void FUN_00371c3c(s16 id, s32 enabled);
void FUN_0038b3f8(s16 id, s32 enabled);
void statusIconSetKind(void *work, s32 kind);

// Update the four retained portrait resources when the status display mode changes.
void statusSynchronizePortraits(void *work, s32 mode)
{
    // These retained IDs follow the existing save-slot transition prefix.
    struct PortraitWorkView {
        u8 prefix[0x4BAC];
        s32 mode;
        u32 portraits[4];
        s32 selected;
    };
    PortraitWorkView *view = static_cast<PortraitWorkView *>(work);
    if (view->mode == mode) {
        FUN_0020ad6c(work, 0x30, 1);
        return;
    }
    view->mode = mode;
    view->selected = -1;
    statusIconSetKind(work, 9);
    for (s32 index = 0; index < 4; ++index) {
        u32 id = 0;
        if (index == 0 && mode == 0) {
            id = (u32)-1;
        } else if (index == 0 && mode == 1) {
            PartySlotA *slot = btlMainGetUnk14();
            if (slot != NULL)
                id = slot->unk62;
        } else if (gameGetSlotTable()->active[index] >= 0) {
            PartySlotA *slot = gameGetSlotRecord();
            if (slot != NULL)
                id = slot->unk62;
        }
        u32 *portrait = &view->portraits[index];
        if (*portrait != id) {
            if (*portrait != 0) {
                FUN_0038b3f8((s16)*portrait, 1);
                *portrait = 0;
            }
            if (id != 0)
                FUN_00371c3c((s16)id, 1);
            *portrait = id;
        }
    }
    FUN_0020ad6c(work, 0x2E, 1);
}
}
