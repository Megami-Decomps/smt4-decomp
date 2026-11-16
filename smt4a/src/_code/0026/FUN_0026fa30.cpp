/* NON_MATCHING: branch layout improved by testing the toggle negated (fixed-capacity arm first); remaining: saved row/column register allocation. */
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
#include "battle/btlMain.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;
BtlPartyBlockA *gameGetSlotTable();
void gridNavigationConfigure(GridNavigation *, s32, s32, s32, s32, s32);
void scrollOwnerSelectIndex(GridNavigation *, s32);
void scrollListSetSelectionTracked(GridNavigation *, s32);
void scrollSelectionClampToCount(GridNavigation *);

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
    s32 primaryColumn = listCursorGetRowOfChildIfUnblocked(&grids->primary);
    s32 primaryRow = listCursorGetRowIfUnblocked(&grids->primary);
    s32 secondaryColumn = listCursorGetRowOfChildIfUnblocked(&grids->secondary);
    s32 secondaryRow = listCursorGetRowIfUnblocked(&grids->secondary);
    u8 count = party->count;
    u32 rows = count >> 2;
    if (count & 3)
        ++rows;
    if (count < 12) {
        gridNavigationConfigure(&grids->primary, count, rows, 4, 1, 1);
        gridNavigationConfigure(&grids->secondary, party->count + 4, rows + 1, 4, 1, 1);
    } else if (!panel->toggle) {
        gridNavigationConfigure(&grids->primary, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&grids->secondary, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&grids->primary, gameGetSlotTable()->count - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&grids->secondary, gameGetSlotTable()->count - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&grids->primary, primaryColumn);
    scrollListSetSelectionTracked(&grids->primary, primaryRow);
    scrollOwnerSelectIndex(&grids->secondary, secondaryColumn);
    scrollListSetSelectionTracked(&grids->secondary, secondaryRow);
    scrollSelectionClampToCount(&grids->primary);
    scrollSelectionClampToCount(&grids->secondary);
}
}
