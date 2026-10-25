/* NON_MATCHING: the repeated page query and the nested help-selection branches are laid out differently from retail, and the local id table is built in another order; the help shown for each page is the same. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

/* The skill menu's work block (only the fields read here). */
typedef struct SkillMenuWork {
    /* 0x0000 */ u8 unk0000[0x305C];
    /* 0x305C */ s32 page;
    /* 0x3060 */ u8 unk3060[0x394];
    /* 0x33F4 */ u8 unk33f4[0x26];
    /* 0x341A */ u16 pageSkills[1];
} SkillMenuWork;

typedef struct SkillMenuView {
    u8 unk0000[0x340C];
    u32 list;
    u8 unk3410[0x70];
    u16 ids[1];                      /* 0x3480: the plain list of ids */
} SkillMenuView;


typedef struct PlayerView {
    u8 unk00[2];
    u16 flag;
    u16 value;
} PlayerView;

typedef struct UnitView {
    u8 unk00[0x46];
    u16 id;
} UnitView;

s32 FUN_0029efc0(u32 list);
s32 FUN_0029efa8(u32 list);
s32 FUN_00297ca4(SkillMenuWork *work, s32 arg);
void FUN_0029212c(u32 id);
u32 listGetU16OrZero(void *state, u32 index);
u32 FUN_0028d24c(void);
void buttonHelpShowSkillDetails(u32 id);
s32 flagBitIsSet(s32 flag);
u32 dataTable16Sub2GetRecord(u32 index);
void FUN_0029ee6c(u32 record, u32 color);
UnitView *gameGetUnitRecord(s32 index);
u32 partyMemberFindById(u16 id);
void FUN_0029da34(u32 a, s32 b, s32 id, u32 member);
void updateEquippedWeaponHelp(RelativeDirectory *directory, u32 arg);
s32 gameFlagIsSet(u32 flag);
PlayerView *gameGetPlayerData(void);
void FUN_00309bc8(u32 a, s32 b);

/* Shows the help for the skill menu's current entry, by page: the unit panel, the skill detail
 * help, the plain list, or the equipped-weapon / skill lines. */
void FUN_00292f4c(SkillMenuWork *work)
{
    SkillMenuView *view = (SkillMenuView *)work;
    u32 *panel = (u32 *)((u8 *)work + 0x59BC);
    u32 index = FUN_0029efc0(view->list) + FUN_0029efa8(view->list);

    if (FUN_00297ca4(work, 0) != 1) {
        if (FUN_00297ca4(work, 0) != 2) {
            if (FUN_00297ca4(work, 0) == 7) {
                FUN_0029212c(view->ids[index]);
                return;
            }
            if (FUN_00297ca4(work, 0) == 3) {
                u8 order[6];
                s32 shown = 0;

                order[4] = 4;
                order[0] = 0;
                order[1] = 1;
                order[2] = 2;
                order[3] = 3;
                order[5] = 5;
                for (s32 i = 0; i < 6; i++) {
                    if (flagBitIsSet(i + 0x2E) != 0) {
                        if (shown == (s32)index) {
                            FUN_0029ee6c(dataTable16Sub2GetRecord(order[i]), 0x323232FF);
                            return;
                        }
                        shown++;
                    }
                }
            }
            return;
        }
        if ((btlGetMainState()->editorControl.flags & 0x40) != 0) {
            index = listGetU16OrZero(btlGetMainState(), index);
        } else {
            btlGetMainState();
            index = FUN_0028d24c();
        }
        if (index != 0) {
            buttonHelpShowSkillDetails(index);
        }
        return;
    }
    if (work->page != 0) {
        if (index == 0) {
            UnitView *unit = gameGetUnitRecord(*(s16 *)((u8 *)work + work->page * 2 + 0x38F4));

            FUN_0029da34(*panel, 2, unit->id, partyMemberFindById(unit->id));
            return;
        }
        if ((btlGetMainState()->editorControl.flags & 0x40) != 0) {
            buttonHelpShowSkillDetails(index);
            return;
        }
        index = *(u16 *)((u8 *)work + work->page * 0x10 + index * 2 + 0x341A);
    } else {
        if (index == 0) {
            updateEquippedWeaponHelp((RelativeDirectory *)*panel, 0);
            return;
        }
        if (index == 1 && gameFlagIsSet(0x410) != 0) {
            PlayerView *player = gameGetPlayerData();

            if (player->flag != 0 && player->value != 0) {
                FUN_00309bc8(*panel, 1);
                return;
            }
        }
        s32 adjust = -2;

        if (gameFlagIsSet(0x410) != 0) {
            PlayerView *player = gameGetPlayerData();

            if (player->flag == 0 || player->value == 0) {
                adjust = -1;
            }
        } else {
            adjust = -1;
        }
        if ((btlGetMainState()->editorControl.flags & 0x40) != 0) {
            index = index + adjust + 1;
        } else {
            index = *(u16 *)((u8 *)work + work->page * 0x10 + (index + adjust) * 2 + 0x341C);
        }
    }
    if (index != 0) {
        buttonHelpShowSkillDetails(index);
    }
}

}
