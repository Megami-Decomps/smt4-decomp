/* NON_MATCHING: retail addresses the panel through a base at +0x800 (r6) for the mode/page/viewing bytes and entry table and a base at +0xA800 for the shown id, uses a 304-byte frame and branches the previous/current state tests differently; the call sequence is the same (about 210 diff lines). */
#include "shard/Shard0032.h"

/* One entry of the status panel's list: whether it is filled and the demon it shows. */
struct StatusEntry {
    /* 0x00 */ u16 present;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

struct StatusPanel {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 holder[0x840];
    /* 0x0860 */ u8 mode; /* 1: shows a party member's record */
    /* 0x0861 */ u8 recordPage; /* 1: the record page of the party member */
    /* 0x0862 */ u8 unk0862;
    /* 0x0863 */ u8 viewing; /* a detail view is open */
    /* 0x0864 */ StatusEntry entries[0x500];
    /* 0xA864 */ u8 unkA864[0xE];
    /* 0xA872 */ u16 shownId;
};
typedef char StatusPanelOffsets[
    offsetof(StatusPanel, mode) == 0x860 && offsetof(StatusPanel, shownId) == 0xA872 ? 1 : -1];

/* The party slot table: the units followed by the order they are listed in. */
struct StatusSlotTable {
    /* 0x0000 */ u8 unk0000[0x68];
    /* 0x0068 */ UnitRecord units[24];
    /* 0x1C88 */ s8 order[0x1B];
    /* 0x1CA3 */ u8 count;
};
typedef char StatusSlotTableOffsets[offsetof(StatusSlotTable, count) == 0x1CA3 ? 1 : -1];

extern "C" {
u16 flaggedValueHolderGetTotal(void *holder);
s32 FUN_0023b3d0(void);
void FUN_0023b45c(s32 value);
s32 FUN_002c7e3c(void);
void FUN_0034a9c4(u32 id, s32 value);
s32 FUN_002a4b28(u16 id);
void FUN_002c8550(s32 value);
void objBInitBlock12DC(void);
void objBInitBlock12DC5(void);
void statusPanelSetOpen(s32 open);
void FUN_004a3e04(StatusPanel *panel);
void FUN_0033449c(s32 value);
void FUN_002f0420(s32 value);
StatusSlotTable *gameGetSlotTable(void);
s32 FUN_00372014(void);
void FUN_00184310(u32 id);
void rt_memcpy_w(void *destination, const void *source, s32 size);
void FUN_004bcd90(UnitRecord *unit);
u16 recordGetScaledMaximum(UnitRecord *unit);
void objBInitBlock19D0(UnitRecord *unit, s32 value);

/* Per-frame refresh of the status panel: when the selected entry changed, switch the demon shown (or, for a party
 * member, build a working copy of its record) and reopen the panel. */
void FUN_004a3b48(StatusPanel *panel)
{
    StatusEntry *entries = panel->entries;
    if (entries[0].present == 0) {
        FUN_0023b45c(0);
        return;
    }
    u16 id = entries[flaggedValueHolderGetTotal(panel->holder)].id;
    if (FUN_0023b3d0() == 0) {
        return;
    }
    if (panel->mode != 1) {
        if (panel->shownId == id) {
            return;
        }
        s32 previous = FUN_002c7e3c();
        FUN_0034a9c4(id, 0);
        if (FUN_002a4b28(id) == 0) {
            FUN_002c8550(0xE);
        }
        s32 current = FUN_002c7e3c();
        if (current == 5) {
            if (previous == 0xE) {
                objBInitBlock12DC();
            }
        } else if (current == 0xE && previous == 5) {
            objBInitBlock12DC5();
        }
        statusPanelSetOpen(1);
        FUN_004a3e04(panel);
    } else {
        if (panel->viewing == 0 && panel->shownId == id) {
            return;
        }
        if (panel->recordPage != 1) {
            s32 previous = FUN_002c7e3c();
            FUN_0034a9c4(id, 0);
            FUN_0033449c(0);
            if (previous != 5) {
                objBInitBlock12DC();
            }
            if (panel->viewing != 0) {
                FUN_002f0420(0);
            } else {
                statusPanelSetOpen(1);
            }
        } else {
            StatusSlotTable *slots = gameGetSlotTable();
            UnitRecord *member = NULL;
            for (u16 i = 0; i < slots->count; i++) {
                s8 slot = slots->order[i];
                if (slot >= 0) {
                    member = &slots->units[slot];
                    if (member->id == id) {
                        break;
                    }
                }
            }
            s32 previous = FUN_002c7e3c();
            FUN_0034a9c4(id, 0);
            FUN_002c8550(2);
            if (previous == 5 && FUN_00372014() != 0) {
                objBInitBlock12DC5();
            }
            FUN_00184310(id);
            UnitRecord unit;
            rt_memcpy_w(&unit, member, sizeof(UnitRecord));
            for (s32 i = 0; i < 0x40; i++) {
                unit.inheritance.flags[i] = 0;
            }
            FUN_004bcd90(&unit);
            unit.unk2A = recordGetScaledMaximum(&unit);
            unit.unk2C = unit.unk10;
            ((u16 *)unit.unk5E)[1] = 0;
            objBInitBlock19D0(&unit, 0);
            FUN_0033449c(1);
            if (panel->viewing != 0) {
                FUN_002f0420(1);
            } else {
                statusPanelSetOpen(1);
            }
        }
        panel->viewing = 0;
        FUN_004a3e04(panel);
    }
    panel->shownId = id;
}
}
