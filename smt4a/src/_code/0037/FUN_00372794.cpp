/* NON_MATCHING: registers and logic match, but armcc places the playerHasFlagBit and btlMainGetUnk14 calls inline; retail moves both to out-of-line blocks after the return. */
#include "common.h"
#include "mapnavi/naviMain.h"

extern "C" {

typedef struct SkillUser SkillUser;

typedef struct SkillTableEntry {
    /* 0x00 */ u8 unk00[0x86];
    /* 0x86 */ u16 unk86;
} SkillTableEntry;

typedef struct SkillMenuWork {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ s32 cursor;
    /* 0x3894 */ u8 unk3894[0x97C];
    /* 0x4210 */ s16 userSlots[1]; /* per cursor: -1 the player, -2 the battle's current unit, else a slot */
} SkillMenuWork;

SkillUser *gameGetSlotRecord(s32 slot);
SkillUser *btlMainGetUnk14(void);
s32 bitsAt60Test(SkillUser *user, u32 bit);
SkillTableEntry *dataTable04FindById(s32 id);
s32 FUN_004bd098(SkillUser *user, s32 id);

/* Returns whether the user under the menu cursor (flag bit 4 set) can use skill `id`; with no `user` only the player is accepted. */
u32 FUN_00372794(SkillMenuWork *work, s32 id, SkillUser *user)
{
    s16 slot = work->userSlots[work->cursor];
    s32 enabled;

    if (slot == -1) {
        enabled = playerHasFlagBit(4);
    } else if (user != NULL) {
        if (slot == -2) {
            user = btlMainGetUnk14();
        } else {
            user = gameGetSlotRecord(slot);
        }
        enabled = bitsAt60Test(user, 4);
    } else {
        enabled = 0;
    }
    u32 usable = 0;
    if (enabled) {
        SkillTableEntry *entry = dataTable04FindById(id);
        if (entry != NULL && entry->unk86 != 0 && (user == NULL || FUN_004bd098(user, id) >= 0)) {
            usable = 1;
        }
    }
    return usable;
}

} /* extern "C" */
