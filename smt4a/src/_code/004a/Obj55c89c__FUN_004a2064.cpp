#include "shard/Shard0032.h"
#include "classes/Obj55c89c.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "gamedata/PartySlots.h"
#include <stddef.h>
#include "code/Code002a.h"

extern "C" {
u32 shopListItemGetId(const void *entry);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *);
s32 rangeGetMinimumLimit(const FlaggedValueHolder *);
void uiOpenStartAnimations(void *);
void unitRecordBuildFromSave(u32, UnitRecord *);
UnitRecord *slotRecordFindById(u32);
s32 compendiumEntryIsRegistered(u32);
void FUN_0032d0c8(s32, s32, u32, const UnitRecord *);
void FUN_004a16bc(void *);
void compendiumBrowseMenuUpdate(void *);
void compendiumUpdateSelectedEntry(void *);
void compendiumRefreshStatusPreview(void *);
void words4At20Clear(PartySlots *);
void partyIdsActivateEntry(PartySlots *, u32);
void FUN_004a6cfc(PartySlots *);

} /* extern "C" */

/* Updates the selected unit preview and retains the visible roster's active party slots. */
void Obj55c89c::FUN_004a2064()
{
    BibleRosterRow *rows = rosterRows;
    if (state == 11) {
        compendiumBrowseMenuUpdate(this);
    } else if (state == 2) {
        UnitRecord unit;
        s16 previous = rows[flaggedValueHolderGetTotal(rosterRange())].getId();
        uiOpenStartAnimations(this);
        s16 selected = rows[flaggedValueHolderGetTotal(rosterRange())].getId();
        if (selected != previous) {
            if (mode == 0) {
                unitRecordBuildFromSave((u16)selected, &unit);
                if (compendiumEntryIsRegistered((u16)selected))
                    FUN_0032d0c8(0, 1, (u16)selected, &unit);
                else
                    FUN_0032d0c8(0, 2, (u16)selected, &unit);
            } else {
                selected = rows[flaggedValueHolderGetTotal(rosterRange())].getId();
                if (recordPage == 1) {
                    UnitRecord *saved = slotRecordFindById((u16)selected);
                    FUN_0032d0c8(0, 1, (u16)selected, saved);
                } else {
                    unitRecordBuildFromSave((u16)selected, &unit);
                    FUN_0032d0c8(0, 1, (u16)selected, &unit);
                }
            }
        }
        if (mode == 0)
            compendiumUpdateSelectedEntry(this);
        else
            FUN_004a16bc(this);
    }
    compendiumRefreshStatusPreview(this);
    words4At20Clear(&visibleSlots);
    s32 count = rangeGetMinimumLimit(rosterRange());
    for (s32 index = 0; index < count; ++index) {
        partyIdsActivateEntry(&visibleSlots,
                              (u16)shopListItemGetId(&rows[resourceDispatchTaggedOperation(rosterRange()) + index]));
    }
    FUN_004a6cfc(&visibleSlots);
}
