/* NON_MATCHING: signed row loads, roster mode-base allocation and preview-block placement differ. */
#include "shard/Shard0032.h"
#include "classes/Obj55c89c.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "gamedata/PartySlots.h"
#include <stddef.h>
#include "code/Code002a.h"

extern "C" {
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *);
s32 rangeGetMinimumLimit(const FlaggedValueHolder *);
void uiOpenStartAnimations(void *);
void FUN_0035ad50(u32, UnitRecord *);
UnitRecord *slotRecordFindById(u32);
s32 FUN_002a4b28(u32);
void FUN_0032d0c8(s32, s32, u32, const UnitRecord *);
void FUN_004a16bc(void *);
void FUN_004a1db4(void *);
void FUN_004a41d8(void *);
void FUN_004a3b48(void *);
void words4At20Clear(PartySlots *);
void partyIdsActivateEntry(PartySlots *, u32);
void FUN_004a6cfc(PartySlots *);

/* Update the selected unit preview and retain only the visible roster's active party slots. */
}

void Obj55c89c::FUN_004a2064()
{
    void * work = reinterpret_cast<void *>(this);
    struct RosterRow {
        u8 unk00[4];
        s16 id;
        u8 unk06[0x1A];
    };
    struct RosterView {
        u8 unk000[0x14];
        s32 state;
        u8 unk018[8];
        FlaggedValueHolder range;
        u8 unk094[2];
        PartySlots party;
        u8 unk0C6[0x79A];
        u8 savedList, sourceKind;
        u8 unk862[2];
        RosterRow rows[1];
    };
    typedef char RosterOffsets[
        sizeof(RosterRow) == 0x20 && sizeof(FlaggedValueHolder) == 0x74 &&
        offsetof(RosterView, range) == 0x20 &&
        offsetof(RosterView, party) == 0x96 &&
        offsetof(RosterView, savedList) == 0x860 &&
        offsetof(RosterView, sourceKind) == 0x861 &&
        offsetof(RosterView, rows) == 0x864 ? 1 : -1];
    RosterView *menu = (RosterView *)work;
    RosterRow *rows = menu->rows;
    if (menu->state == 11) {
        FUN_004a1db4(menu);
    } else if (menu->state == 2) {
        UnitRecord unit;
        s16 previous = rows[flaggedValueHolderGetTotal(&menu->range)].id;
        uiOpenStartAnimations(menu);
        s16 selected = rows[flaggedValueHolderGetTotal(&menu->range)].id;
        if (selected != previous) {
            if (menu->savedList == 0) {
                FUN_0035ad50((u16)selected, &unit);
                if (FUN_002a4b28((u16)selected))
                    FUN_0032d0c8(0, 1, (u16)selected, &unit);
                else
                    FUN_0032d0c8(0, 2, (u16)selected, &unit);
            } else {
                selected = rows[flaggedValueHolderGetTotal(&menu->range)].id;
                if (menu->sourceKind != 1) {
                    FUN_0035ad50((u16)selected, &unit);
                    FUN_0032d0c8(0, 1, (u16)selected, &unit);
                } else {
                    UnitRecord *saved = slotRecordFindById((u16)selected);
                    FUN_0032d0c8(0, 1, (u16)selected, saved);
                }
            }
        }
        if (menu->savedList)
            FUN_004a16bc(menu);
        else
            FUN_004a41d8(menu);
    }
    FUN_004a3b48(menu);
    words4At20Clear(&menu->party);
    s32 count = rangeGetMinimumLimit(&menu->range);
    for (s32 index = 0; index < count; ++index) {
        s32 start = FUN_002a482c(&menu->range);
        partyIdsActivateEntry(&menu->party, (u16)rows[start + index].id);
    }
    FUN_004a6cfc(&menu->party);
}
