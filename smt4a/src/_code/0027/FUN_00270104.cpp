/* NON_MATCHING: the repeated page query, the 64-bit battle mask tests and the nested help-selection branches are laid out differently from retail (220 vs 227 rows); the help shown per page is the same. */
#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct HelpPlayerView {
    u8 unk00[2];
    u16 flag;
    u16 value;
} HelpPlayerView;

typedef struct HelpRecordView {
    u8 unk00[0x62];
    u16 id;
} HelpRecordView;

/* The battle state's flag words (only the mask word read here). */
typedef struct HelpBattleView {
    u8 unk0000[0x45A8];
    u64 flags;
} HelpBattleView;

/* The skill menu's work block (only the fields read here, by their offsets). */
typedef struct SkillMenuWork {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ s32 page;
    /* 0x3894 */ u8 unk3894[0x3AC];
    /* 0x3C40 */ u32 list;
    /* 0x3C44 */ u8 unk3c44[0x64];
    /* 0x3CA8 */ u16 plainIds[1];
    /* 0x3CAA */ u8 unk3caa[0x146];
    /* 0x3DF0 */ u8 unk3df0[0x28];
    /* 0x3E18 */ u32 activeSkill;
    /* 0x3E1C */ u8 unk3e1c[0x3F4];
    /* 0x4210 */ s16 pageSkills[1];
} SkillMenuWork;

extern u64 DAT_00573bc8;

s32 resourceRunOperationIfUnblocked(u32 list);
s32 FUN_002a4894(u32 list);
s32 FUN_002cc9e0(SkillMenuWork *work, s32 arg);
void screenShowMessage(u32 id);
s32 gameDataFlagTestBit(u32 bit);
u32 FUN_002f8e14(u32 index);
void FUN_0019de98(u32 text, u32 color);
u32 halfTableGet(HelpBattleView *state, u32 index);
HelpRecordView *btlMainGetUnk14(void);
HelpRecordView *gameGetSlotRecord(void);
u32 slotRecordFindById(u16 id);
void FUN_0032d0c8(u32 panel, s32 a, u32 id, u32 member);
void skillHelpUpdateAttributeAndTarget(u32 id);
void FUN_003aeb18(u32 panel, s32 arg);
void FUN_00399e20(u32 panel, s32 arg);
s32 gameFlagIsSet(u32 flag);
HelpPlayerView *gameGetPlayerData(void);

/* Shows the help for the skill menu's current entry, by page. */
void FUN_00270104(SkillMenuWork *work)
{
    u32 *panel = (u32 *)((u8 *)work + 0x4B98);
    u32 index = resourceRunOperationIfUnblocked(work->list) + FUN_002a4894(work->list);

    if (FUN_002cc9e0(work, 0) != 1) {
        if (FUN_002cc9e0(work, 0) != 2) {
            if (FUN_002cc9e0(work, 0) == 7) {
                screenShowMessage(work->plainIds[index]);
                return;
            }
            if (FUN_002cc9e0(work, 0) == 3) {
                u32 flagIds[3] = {0x2E, 0x32, 0x33};
                u32 helpIds[3] = {0, 1, 2};
                s32 shown = 0;

                for (s32 i = 0; i < 3; i++) {
                    if (gameDataFlagTestBit(flagIds[i]) != 0) {
                        if (shown == (s32)index) {
                            FUN_0019de98(FUN_002f8e14(helpIds[i] & 0xFF), 0xF4F4F4FF);
                            return;
                        }
                        shown++;
                    }
                }
                return;
            }
            if (FUN_002cc9e0(work, 0) != 12) {
                return;
            }
            index = work->activeSkill;
            if (index == 0) {
                return;
            }
        } else {
            if ((reinterpret_cast<HelpBattleView *>(btlGetMainState())->flags & DAT_00573bc8) != 0) {
                index = halfTableGet(reinterpret_cast<HelpBattleView *>(btlGetMainState()), index);
            } else {
                reinterpret_cast<HelpBattleView *>(btlGetMainState());
                index = 0;
            }
            if (index == 0) {
                return;
            }
        }
    } else {
        s16 pageSkill = work->pageSkills[work->page];

        if (pageSkill != -1) {
            if (index == 0) {
                HelpRecordView *record = pageSkill == -2 ? btlMainGetUnk14() : gameGetSlotRecord();

                FUN_0032d0c8(*panel, 2, record->id, slotRecordFindById(record->id));
                return;
            }
            if ((reinterpret_cast<HelpBattleView *>(btlGetMainState())->flags & DAT_00573bc8) != 0) {
                skillHelpUpdateAttributeAndTarget(index);
                return;
            }
            index = *(u16 *)((u8 *)work + work->page * 0x10 + index * 2 + 0x3C42);
        } else {
            if (index == 0) {
                FUN_003aeb18(*panel, 0);
                return;
            }
            if (index == 1 && gameFlagIsSet(0x410) != 0) {
                HelpPlayerView *player = gameGetPlayerData();

                if (player->flag != 0 && player->value != 0) {
                    FUN_00399e20(*panel, 1);
                    return;
                }
            }
            s32 adjust = -2;

            if (gameFlagIsSet(0x410) != 0) {
                HelpPlayerView *player = gameGetPlayerData();

                if (player->flag == 0 || player->value == 0) {
                    adjust = -1;
                }
            } else {
                adjust = -1;
            }
            if ((reinterpret_cast<HelpBattleView *>(btlGetMainState())->flags & DAT_00573bc8) != 0) {
                index = index + adjust + 1;
            } else {
                index = *(u16 *)((u8 *)work + work->page * 0x10 + (index + adjust) * 2 + 0x3C44);
            }
        }
        if (index == 0) {
            return;
        }
    }
    skillHelpUpdateAttributeAndTarget(index);
}

}
