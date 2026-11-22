#include "common.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/NkmEnemyLookup.h"

/* unit-local: the battle UI object (ActorCardAnimationsA in battle/ActorCardAnimations.h, Menu32 in shard/Shard0032.h,
 * BattleSelectionTransition) has several partial views that name 0x387C-0x3890 differently; merging them is a
 * follow-up (wave 77 review). A selectable entry of the command menu's page list (0x40 bytes). */
struct CommandPageEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ s8 present;
    /* 0x19 */ u8 unk19[0x1B];
    /* 0x34 */ s32 value;
    /* 0x38 */ u8 unk38[8];
};

/* unit-local (see CommandPageEntry): the battle command menu's view of that object. */
struct CommandMenuScreen {
    /* 0x0000 */ u8 unk0000[0x3878];
    /* 0x3878 */ u32 unk3878;
    /* 0x387C */ s32 mode;
    /* 0x3880 */ s32 previousMode;
    /* 0x3884 */ u8 unk3884[0xC];
    /* 0x3890 */ s32 selected;
    /* 0x3894 */ u8 unk3894[0x28];
    /* 0x38BC */ ScrollSelection lists[8];
    /* 0x3BDC */ ScrollSelection allList;
    /* 0x3C40 */ ScrollSelection *current;
    /* 0x3C44 */ u8 unk3C44[0x3C84 - 0x3C44];
    /* 0x3C84 */ u8 chosen[0x41ED - 0x3C84];
    /* 0x41ED */ s8 blocked[0x480C - 0x41ED];
    /* 0x480C */ s16 regionCount;
    /* 0x480E */ s16 regions[0x40 / 2];
    /* 0x484E */ u8 unk484E[2];
    /* 0x4850 */ s32 pageCount;
    /* 0x4854 */ u8 unk4854[3];
    /* 0x4857 */ s8 pageFlag;
    /* 0x4858 */ CommandPageEntry pages[1];
};

typedef char CommandMenuScreenOffsetCheck[
    offsetof(CommandMenuScreen, mode) == 0x387C && offsetof(CommandMenuScreen, selected) == 0x3890 &&
    offsetof(CommandMenuScreen, lists) == 0x38BC && offsetof(CommandMenuScreen, allList) == 0x3BDC &&
    offsetof(CommandMenuScreen, current) == 0x3C40 && offsetof(CommandMenuScreen, chosen) == 0x3C84 &&
    offsetof(CommandMenuScreen, blocked) == 0x41ED && offsetof(CommandMenuScreen, regionCount) == 0x480C &&
    offsetof(CommandMenuScreen, pageCount) == 0x4850 && offsetof(CommandMenuScreen, pages) == 0x4858 ? 1 : -1];

extern "C" {
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
u32 buttonHelpGetValue(void);
void sysPlaySe(u32 id);
u16 ifTouchGetButtonHelpValue(void);
s32 btlScriptUnitHasFlags(const void *state);
void FUN_00270104(void *menu);
u32 FUN_002cc9e0(void *menu, s32 inBattle);
void screenSetContextHint(void *owner, s32 kind, s32 alternate);
u8 gameDataFlagTestBit(u32 bit);
void btlPlayMenuConfirmSe(s32 alternate);
s32 listCursorGetRowOfChildIfUnblocked(void *object);
void ifTouchRegionRemove(void);
void __aeabi_memset4(void *destination, u32 size, u32 value);
s32 widgetSubCallIfVisible(ScrollSelection *list);
s32 ifTouchRegionAddRequested(u32 file, u32 index);
s32 uiSearchPrimary(ScrollSelection *list);
s32 gridNavigationGetItemCount(ScrollSelection *list);

/* Registers a touch region for the selection's buttons, centred on the visible count. */
static __inline void addSelectionRegions(CommandMenuScreen *work)
{
    s32 count = widgetSubCallIfVisible(&work->lists[work->selected]);
    for (s32 i = 0; i < count; i++) {
        s32 index;
        if ((count & 1) == 0)
            index = i + (8 - count) / 2 + 0x106;
        else
            index = i + (7 - count) / 2 + 0xFF;
        work->regions[i] = ifTouchRegionAddRequested(0xD, index);
        work->regionCount++;
    }
}

/* Clears the touch region table and registers the regions of the new mode's buttons. Retail copies the mode
 * argument into a register of its own (mov r9, r6) where this starts: the parameter of an inlined function. */
static __inline void addModeRegions(CommandMenuScreen *work, s32 mode)
{
    __aeabi_memset4(work->regions, 0x40, 0xFFFFFFFF);
    if (mode == 1)
        addSelectionRegions(work);
    if (mode == 8 || mode == 10 || mode == 12) {
        addSelectionRegions(work);
        for (s32 i = 0; i < uiSearchPrimary(work->current); i++) {
            s32 first;
            if (work->selected == 1)
                first = 0xC2;
            else if (work->selected == 2)
                first = 0xBB;
            else
                first = 0xB3;
            work->regions[0x16 / 2 + i] = ifTouchRegionAddRequested(0xD, first + i);
            work->regionCount++;
        }
        if (gridNavigationGetItemCount(work->current) > uiSearchPrimary(work->current)) {
            if (work->selected == 1) {
                work->regions[0x10 / 2] = ifTouchRegionAddRequested(0xD, 0x199);
                work->regions[0x12 / 2] = ifTouchRegionAddRequested(0xD, 0x197);
                work->regions[0x14 / 2] = ifTouchRegionAddRequested(0xD, 0x198);
            } else if (work->selected == 2) {
                work->regions[0x10 / 2] = ifTouchRegionAddRequested(0xD, 0x193);
                work->regions[0x12 / 2] = ifTouchRegionAddRequested(0xD, 0x191);
                work->regions[0x14 / 2] = ifTouchRegionAddRequested(0xD, 0x192);
            } else {
                work->regions[0x10 / 2] = ifTouchRegionAddRequested(0xD, 0x196);
                work->regions[0x12 / 2] = ifTouchRegionAddRequested(0xD, 0x194);
                work->regions[0x14 / 2] = ifTouchRegionAddRequested(0xD, 0x195);
            }
            work->regionCount += 3;
        }
    }
    if (mode == 0x13) {
        work->regions[0x22 / 2] = ifTouchRegionAddRequested(0xD, 0x1B3);
        work->regionCount++;
        for (s32 i = 0; i < work->pageCount; i++) {
            if (work->pages[i].present != 0) {
                if ((nkmEnemyFindById(work->pages[i].id)->level & 0x8000) != 0) {
                    if (work->pageFlag != 0) {
                        work->regions[0x24 / 2 + i] = ifTouchRegionAddRequested(0xD, 0x1A0);
                    } else if (work->pages[i].value - 0x14A <= 4u || work->pages[i].value - 0x165 <= 3u) {
                        work->regions[0x24 / 2 + i] = ifTouchRegionAddRequested(0xD, 0x19F);
                    } else {
                        work->regions[0x24 / 2 + i] = ifTouchRegionAddRequested(0xD, 0x19E);
                    }
                } else {
                    work->regions[0x24 / 2 + i] = ifTouchRegionAddRequested(0xD, work->pages[i].value);
                }
                work->regionCount++;
            }
        }
    }
    if (mode == 0x22 || mode == 0x2D) {
        for (s32 i = 0; i < widgetSubCallIfVisible(&work->allList); i++) {
            if (work->blocked[i] == 0) {
                work->regions[0x38 / 2 + i] = ifTouchRegionAddRequested(0xD, i + 0x36);
                work->regionCount++;
            }
        }
    }
    if (mode == 0x16) {
        for (s32 i = 0; i < widgetSubCallIfVisible(&work->allList); i++) {
            if (work->chosen[i] == 1) {
                work->regions[0x38 / 2 + i] = ifTouchRegionAddRequested(0xD, i + 0x36);
                work->regionCount++;
            }
        }
    }
}

/* Enters a command menu mode: plays its sound, rebuilds the touch regions its buttons need. */
void btlCommandMenuEnterMode(CommandMenuScreen *work, s32 mode, s32 rememberPrevious)
{
    if (work->mode == 0x22)
        gridNavigationConfigure(&work->allList, 4, 1, 4, 1, 1);
    if (work->mode == 0x13 || work->mode == 0x16)
        sysPlaySe(buttonHelpGetValue());
    if (work->mode == 0x22 || work->mode == 0x23 || work->mode == 0x24)
        sysPlaySe(buttonHelpGetValue());
    if (ifTouchGetButtonHelpValue() == 0x3F) {
        if (btlScriptUnitHasFlags(btlGetMainState()) == 0)
            sysPlaySe(buttonHelpGetValue());
    }
    if (work->mode == 7) {
        if ((u32)(work->previousMode - 8) <= 5)
            FUN_00270104(work);
        else
            screenSetContextHint(work, FUN_002cc9e0(work, 1), work->selected);
    }
    if (mode == 2) {
        sysPlaySe(gameDataFlagTestBit(0x10) != 0 ? 0xB0 : 0xB1);
    } else if (mode == 9 || mode == 8 || mode == 0xB || mode == 10 || mode == 0xD || mode == 0xC) {
        btlPlayMenuConfirmSe(0);
    } else if (mode == 1) {
        btlPlayMenuConfirmSe(listCursorGetRowOfChildIfUnblocked(&work->lists[work->selected]) == 0);
    }
    if (rememberPrevious != 0)
        work->previousMode = work->mode;
    work->mode = mode;
    work->unk3878 = 0;
    for (s32 i = 0; i < work->regionCount; i++)
        ifTouchRegionRemove();
    work->regionCount = 0;
    addModeRegions(work, mode);
}
}
