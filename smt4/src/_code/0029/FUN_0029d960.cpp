/* NON_MATCHING: retail reads the id with ldrh+sxth (this source folds it to ldrsh) and reaches `source` through a menu+0x500 base held in r7, saving two more registers. */
#include "common.h"

struct UnitListEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

struct UnitListMenu {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 cursor[0x584];
    /* 0x5A4 */ u8 previewOnly;
    /* 0x5A5 */ u8 source; /* 1: party member */
    /* 0x5A6 */ u8 unk5A6[2];
    /* 0x5A8 */ UnitListEntry entries[1];
};

/* Scratch copy of a unit's status, built for units outside the party. */
struct UnitStatusBuffer {
    /* 0x000 */ u8 data[0x610];
};

extern "C" {

s32 flaggedValueHolderGetTotal(u8 *cursor);
void FUN_0029d770(u16 id, UnitStatusBuffer *status);
void *partyMemberFindById(u16 id);
void FUN_0029da34(s32 screen, s32 mode, u16 id, void *status);

/* Shows the status of the selected unit, read from the party when the list shows party members. */
void FUN_0029d960(UnitListMenu *menu)
{
    UnitListEntry *entries = menu->entries;
    s16 id = entries[flaggedValueHolderGetTotal(menu->cursor)].id;

    if (!menu->previewOnly) {
        UnitStatusBuffer status;
        FUN_0029d770(id, &status);
        FUN_0029da34(0, 1, id, &status);
    } else {
        id = entries[flaggedValueHolderGetTotal(menu->cursor)].id;
        if (menu->source == 1) {
            FUN_0029da34(0, 1, id, partyMemberFindById(id));
        } else {
            UnitStatusBuffer status;
            FUN_0029d770(id, &status);
            FUN_0029da34(0, 1, id, &status);
        }
    }
}

} /* extern "C" */
