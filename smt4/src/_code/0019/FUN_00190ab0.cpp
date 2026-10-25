/* NON_MATCHING: the page dispatch chain is laid out with the bodies inline in retail (compare-and-branch order differs) and the page-0 query result is tested differently; the opened list and scene state per page are the same. */
#include "common.h"

extern "C" {

/* The skill menu's work block (only the fields used here, by their offsets). */
typedef struct SkillMenuWork {
    /* 0x0000 */ u8 unk0000[0xE58];
    /* 0x0E58 */ u8 sprites[6][0x8C];
    /* 0x11A0 */ u8 unk11a0[0x1EBC];
    /* 0x305C */ s32 page;
    /* 0x3060 */ u8 unk3060[0x1B8];
    /* 0x3218 */ u8 listAttack[0x64];
    /* 0x327C */ u8 listMagic[0x64];
    /* 0x32E0 */ u8 listItem[0x64];
    /* 0x3344 */ u8 listTalk[0xC8];
    /* 0x340C */ u8 *activeList;
    /* 0x3410 */ u8 unk3410[0x50];
    /* 0x3460 */ s32 scroll[4];
    /* 0x3470 */ s32 cursor[4];
    /* 0x3480 */ u8 unk3480[0x84];
    /* 0x3504 */ s32 unk3504;
} SkillMenuWork;

s32 FUN_00297ca4(SkillMenuWork *work, s32 arg);
s32 btlGetMainState(void);
u32 FUN_00293988(void *scene);
s32 FUN_0029ee54(void);
void playSceneSetState(SkillMenuWork *work, s32 state, s32 flag);
void uiSpriteSetImageKeyframe(void *sprite, s32 frame, s32 flag);
void FUN_0029ee6c(u32 record, u32 color);

/* Resets the six menu sprites' keyframes. */
static __inline void resetSprites(SkillMenuWork *work)
{
    for (s32 i = 0; i < 6; i++) {
        uiSpriteSetImageKeyframe(work->sprites[i], 0, 0);
    }
}

/* Opens the list for the skill menu's current command page and plays its scene state; returns 1
 * when a scene started, 0 when the page has nothing to open. */
u32 FUN_00190ab0(SkillMenuWork *work)
{
    work->cursor[work->page] = 0;
    work->scroll[work->page] = 0;
    work->unk3504 = 0;
    if (work->page == 0) {
        FUN_00297ca4(work, 1);
    }
    if (FUN_00297ca4(work, 1) != 1) {
        if (FUN_00297ca4(work, 1) != 2) {
            if (FUN_00297ca4(work, 1) != 7) {
                if (FUN_00297ca4(work, 1) != 3) {
                    if (FUN_00297ca4(work, 1) == 6 || FUN_00297ca4(work, 1) == 8) {
                        return 0;
                    }
                    if (FUN_00297ca4(work, 1) != 5) {
                        if (FUN_00297ca4(work, 1) != 10) {
                            if (FUN_00297ca4(work, 1) != 4) {
                                if (FUN_00297ca4(work, 1) != 9) {
                                    playSceneSetState(work, 0, 1);
                                } else {
                                    playSceneSetState(work, 0x19, 1);
                                }
                            } else {
                                playSceneSetState(work, 0x1B, 1);
                            }
                        } else {
                            playSceneSetState(work, 0x1A, 1);
                        }
                    } else {
                        playSceneSetState(work, 0x17, 1);
                    }
                } else {
                    if (FUN_0029ee54() < 1) {
                        return 0;
                    }
                    work->activeList = work->listTalk;
                    playSceneSetState(work, 0xD, 1);
                    resetSprites(work);
                }
            } else {
                if (FUN_0029ee54() < 1) {
                    return 0;
                }
                work->activeList = work->listItem;
                playSceneSetState(work, 0xB, 1);
                resetSprites(work);
            }
        } else {
            if ((*(u32 *)(btlGetMainState() + 0x44A8) & 0x40) == 0) {
                if (FUN_00293988(reinterpret_cast<void *>(btlGetMainState())) == 0) {
                    return 0;
                }
            }
            work->activeList = work->listMagic;
            playSceneSetState(work, 9, 1);
            resetSprites(work);
        }
    } else {
        work->activeList = work->listAttack;
        playSceneSetState(work, 9, 1);
        resetSprites(work);
    }
    FUN_0029ee6c(0, 0x323232FF);
    return 1;
}

}
