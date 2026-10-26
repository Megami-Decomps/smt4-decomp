/* NON_MATCHING: branch layout improved by testing the toggle negated (fixed-capacity arm first); remaining: saved row/column register allocation. */
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
#include "battle/btlMain.h"
#include "util/FUN_002a4878.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;
BtlPartyBlockA *gameGetSlotTable();
s32 FUN_002a4894(GridNavigation *);
void FUN_00203b40(GridNavigation *, s32, s32, s32, s32, s32);
void scrollOwnerSelectIndex(GridNavigation *, s32);
void FUN_002a4964(GridNavigation *, s32);
void FUN_00261840(GridNavigation *);

void FUN_0026fa30()
{
    PartyPanelStateA *panel = g_partyPanel;
    BtlPartyBlockA *party = gameGetSlotTable();
    // These grids and the mode are beyond the shared PartyPanelStateA prefix.
    struct PartyCapacityGridsView {
        u8 unk0000[0xc88];
        GridNavigation primary;
        u8 unk0cec[0x64];
        GridNavigation secondary;
        u8 unk0db4[0x464];
        s32 mode;
    };
    typedef char PartyCapacityGridOffsets[
        offsetof(PartyCapacityGridsView, primary) == 0xc88 &&
        offsetof(PartyCapacityGridsView, secondary) == 0xd50 &&
        offsetof(PartyCapacityGridsView, mode) == 0x1218 ? 1 : -1];
    PartyCapacityGridsView *grids = reinterpret_cast<PartyCapacityGridsView *>(panel);
    if (grids->mode == 1)
        return;
    s32 primaryColumn = FUN_002a4878(&grids->primary);
    s32 primaryRow = FUN_002a4894(&grids->primary);
    s32 secondaryColumn = FUN_002a4878(&grids->secondary);
    s32 secondaryRow = FUN_002a4894(&grids->secondary);
    u8 count = party->count;
    u32 rows = count >> 2;
    if (count & 3)
        ++rows;
    if (count < 12) {
        FUN_00203b40(&grids->primary, count, rows, 4, 1, 1);
        FUN_00203b40(&grids->secondary, party->count + 4, rows + 1, 4, 1, 1);
    } else if (!panel->toggle) {
        FUN_00203b40(&grids->primary, 12, 3, 4, 1, 1);
        FUN_00203b40(&grids->secondary, 16, 4, 4, 1, 1);
    } else {
        FUN_00203b40(&grids->primary, gameGetSlotTable()->count - 12, 3, 4, 1, 1);
        FUN_00203b40(&grids->secondary, gameGetSlotTable()->count - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&grids->primary, primaryColumn);
    FUN_002a4964(&grids->primary, primaryRow);
    scrollOwnerSelectIndex(&grids->secondary, secondaryColumn);
    FUN_002a4964(&grids->secondary, secondaryRow);
    FUN_00261840(&grids->primary);
    FUN_00261840(&grids->secondary);
}
}
