#include "common.h"
#include "mapnavi/naviMain.h"
#include "gamedata/SkillDataRecord.h"

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
s32 FUN_004bd098(SkillUser *user, s32 id);

/* Returns whether the user under the menu cursor (flag bit 4 set) can use skill `id`; with no `user` only the player is accepted. */
u32 skillMenuCanCurrentUserUseSkill(SkillMenuWork *work, s32 id, SkillUser *user)
{
    s16 slot = work->userSlots[work->cursor];
    u32 usable;

    if (slot != -1 && user == NULL) {
        usable = 0;
    } else {
        s32 enabled;
        if (slot == -1) {
            enabled = playerHasFlagBit(4);
        } else {
            if (slot == -2) {
                user = btlMainGetUnk14();
            } else {
                user = gameGetSlotRecord(slot);
            }
            enabled = bitsAt60Test(user, 4);
        }
        usable = 0;
        if (enabled) {
            SkillTableEntry *entry = (SkillTableEntry *)skillDataFindById(id);
            if (entry != NULL && entry->unk86 != 0 && (user == NULL || FUN_004bd098(user, id) >= 0)) {
                usable = 1;
            }
        }
    }
    return usable;
}

} /* extern "C" */
