/* NON_MATCHING: structure matches retail (panel state block at +0x800 held in a register, entry table pointer taken after the early return, shown-id base at +0xA800); retail saves one more register (sl) and numbers the base registers r6/r7/r4/r5 differently, with a 304-byte frame vs 300. */
#include "shard/Shard0032.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code002a_Smt4a.h"

/* One entry of the status panel's list: whether it is filled and the demon it shows. */
struct StatusEntry {
    /* 0x00 */ u16 present;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The panel state starting at 0x800 of the panel. */
struct StatusPanelState {
    /* 0x0000 */ u8 unk0000[0x60];
    /* 0x0060 */ u8 mode; /* 1: shows a party member's record */
    /* 0x0061 */ u8 recordPage; /* 1: the record page of the party member */
    /* 0x0062 */ u8 unk0062;
    /* 0x0063 */ s8 viewing; /* a detail view is open */
    /* 0x0064 */ StatusEntry entries[0x500];
    /* 0xA064 */ u8 unkA064[0xE];
    /* 0xA072 */ u16 shownId;
};

struct StatusPanel {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 holder[0x7E0];
    /* 0x0800 */ StatusPanelState state;
};
typedef char StatusPanelOffsets[
    offsetof(StatusPanel, state.mode) == 0x860 && offsetof(StatusPanel, state.shownId) == 0xA872 ? 1 : -1];

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
void FUN_0023b45c(s32 value);
void FUN_0034a9c4(u32 id, s32 value);
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
void __aeabi_memcpy4(void *destination, const void *source, s32 size);
void FUN_004bcd90(UnitRecord *unit);
u16 recordGetScaledMaximum(UnitRecord *unit);
void objBInitBlock19D0(UnitRecord *unit, s32 value);

/* Per-frame refresh of the status panel: when the selected entry changed, switch the demon shown (or, for a party
 * member, build a working copy of its record) and reopen the panel. */
void FUN_004a3b48(StatusPanel *panel)
{
    StatusPanelState *state = &panel->state;
    if (state->entries[0].present == 0) {
        FUN_0023b45c(0);
        return;
    }
    StatusEntry *entries = panel->state.entries;
    u16 id = entries[flaggedValueHolderGetTotal(panel->holder)].id;
    if (FUN_0023b3d0() == 0) {
        return;
    }
    if (state->mode == 1) {
        if (state->viewing == 0 && state->shownId == id) {
            return;
        }
        if (state->recordPage != 1) {
            s32 previous = FUN_002c7e3c();
            FUN_0034a9c4(id, 0);
            FUN_0033449c(0);
            if (previous != 5) {
                objBInitBlock12DC();
            }
            if (state->viewing != 0) {
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
            __aeabi_memcpy4(&unit, member, sizeof(UnitRecord));
            for (s32 i = 0; i < 0x40; i++) {
                unit.inheritance.flags[i] = 0;
            }
            FUN_004bcd90(&unit);
            unit.unk2A = recordGetScaledMaximum(&unit);
            unit.unk2C = unit.unk10;
            ((u16 *)unit.unk5E)[1] = 0;
            objBInitBlock19D0(&unit, 0);
            FUN_0033449c(1);
            if (state->viewing != 0) {
                FUN_002f0420(1);
            } else {
                statusPanelSetOpen(1);
            }
        }
        state->viewing = 0;
        FUN_004a3e04(panel);
    } else {
        if (state->shownId == id) {
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
    }
    state->shownId = id;
}
}
