/* NON_MATCHING: readable rewrite of the command menu mode switch; retail keeps the work in r4 and the mode pointer in r5 (the build swaps them and spills the 0x3bdc list address), copies the mode argument to r9 after storing it, and lays the 8/10/12 and 1 region loops out as one shared test chain (the build tests 8, 10, 12 as one chain). */
#include "common.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

/* A selectable entry of the command menu's page list (0x40 bytes). */
struct CommandPageEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ u8 present;
    /* 0x19 */ u8 unk19[0x1B];
    /* 0x34 */ s32 value;
    /* 0x38 */ u8 unk38[8];
};

/* A data table record (only the flag word is read). */
struct CommandDataRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 flags;
};

/* The battle command menu's work past the parts the other menu functions use. */
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
void FUN_00203b40(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
u32 buttonHelpGetValue(void);
void sysPlaySe(u32 id);
u16 ifTouchGetButtonHelpValue(void);
s32 btlScriptUnitHasFlags(const void *state);
void FUN_00270104(void *menu);
u32 FUN_002cc9e0(void *menu, s32 inBattle);
void screenSetContextHint(void *owner, s32 kind, s32 alternate);
u8 gameDataFlagTestBit(u32 bit);
void FUN_003756c8(s32 alternate);
s32 FUN_002a4878(void *object);
void ifTouchRegionRemove(void);
void __aeabi_memset4(void *destination, u32 size, u32 value);
s32 widgetSubCallIfVisible(ScrollSelection *list);
s32 FUN_001643b4(u32 file, u32 index);
s32 uiSearchPrimary(ScrollSelection *list);
s32 objectApplyIfUnblocked(ScrollSelection *list);
CommandDataRecord *dataTable00FindById(u32 id);

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
        work->regions[i] = FUN_001643b4(0xD, index);
        work->regionCount++;
    }
}

/* Enters a command menu mode: plays its sound, rebuilds the touch regions its buttons need. */
void FUN_0020ad6c(CommandMenuScreen *work, s32 mode, s32 rememberPrevious)
{
    s32 *current = &work->mode;
    if (*current == 0x22)
        FUN_00203b40(&work->allList, 4, 1, 4, 1, 1);
    if (*current == 0x13 || *current == 0x16)
        sysPlaySe(buttonHelpGetValue());
    if (*current == 0x22 || *current == 0x23 || *current == 0x24)
        sysPlaySe(buttonHelpGetValue());
    if (ifTouchGetButtonHelpValue() == 0x3F) {
        if (btlScriptUnitHasFlags(btlGetMainState()) == 0)
            sysPlaySe(buttonHelpGetValue());
    }
    s32 *selected = &work->selected;
    s32 *previous = &work->previousMode;
    if (*current == 7) {
        if ((u32)(*previous - 8) <= 5)
            FUN_00270104(work);
        else
            screenSetContextHint(work, FUN_002cc9e0(work, 1), *selected);
    }
    if (mode == 2) {
        sysPlaySe(gameDataFlagTestBit(0x10) != 0 ? 0xB0 : 0xB1);
    } else if (mode == 9 || mode == 8 || mode == 0xB || mode == 10 || mode == 0xD || mode == 0xC) {
        FUN_003756c8(0);
    } else if (mode == 1) {
        FUN_003756c8(FUN_002a4878(&work->lists[*selected]) == 0);
    }
    if (rememberPrevious != 0)
        *previous = *current;
    *current = mode;
    work->unk3878 = 0;
    for (s32 i = 0; i < work->regionCount; i++)
        ifTouchRegionRemove();
    work->regionCount = 0;
    __aeabi_memset4(work->regions, 0x40, 0xFFFFFFFF);
    if (mode == 1) {
        addSelectionRegions(work);
    } else if (mode == 8 || mode == 10 || mode == 12) {
        addSelectionRegions(work);
        for (s32 i = 0; i < uiSearchPrimary(work->current); i++) {
            s32 first;
            if (*selected == 1)
                first = 0xC2;
            else if (*selected == 2)
                first = 0xBB;
            else
                first = 0xB3;
            work->regions[0x16 / 2 + i] = FUN_001643b4(0xD, first + i);
            work->regionCount++;
        }
        if (uiSearchPrimary(work->current) < objectApplyIfUnblocked(work->current)) {
            if (*selected == 1) {
                work->regions[0x10 / 2] = FUN_001643b4(0xD, 0x199);
                work->regions[0x12 / 2] = FUN_001643b4(0xD, 0x197);
                work->regions[0x14 / 2] = FUN_001643b4(0xD, 0x198);
            } else if (*selected == 2) {
                work->regions[0x10 / 2] = FUN_001643b4(0xD, 0x193);
                work->regions[0x12 / 2] = FUN_001643b4(0xD, 0x191);
                work->regions[0x14 / 2] = FUN_001643b4(0xD, 0x192);
            } else {
                work->regions[0x10 / 2] = FUN_001643b4(0xD, 0x196);
                work->regions[0x12 / 2] = FUN_001643b4(0xD, 0x194);
                work->regions[0x14 / 2] = FUN_001643b4(0xD, 0x195);
            }
            work->regionCount += 3;
        }
    }
    if (mode == 0x13) {
        work->regions[0x22 / 2] = FUN_001643b4(0xD, 0x1B3);
        work->regionCount++;
        for (s32 i = 0; i < work->pageCount; i++) {
            CommandPageEntry *page = &work->pages[i];
            if (page->present != 0) {
                if ((dataTable00FindById(page->id)->flags & 0x8000) != 0) {
                    if (work->pageFlag != 0) {
                        work->regions[0x24 / 2 + i] = FUN_001643b4(0xD, 0x1A0);
                    } else if (page->value - 0x14A <= 4u || page->value - 0x165 <= 3u) {
                        work->regions[0x24 / 2 + i] = FUN_001643b4(0xD, 0x19F);
                    } else {
                        work->regions[0x24 / 2 + i] = FUN_001643b4(0xD, 0x19E);
                    }
                } else {
                    work->regions[0x24 / 2 + i] = FUN_001643b4(0xD, page->value);
                }
                work->regionCount++;
            }
        }
    }
    if (mode == 0x22 || mode == 0x2D) {
        ScrollSelection *list = &work->allList;
        for (s32 i = 0; i < widgetSubCallIfVisible(list); i++) {
            if (work->blocked[i] == 0) {
                work->regions[0x38 / 2 + i] = FUN_001643b4(0xD, i + 0x36);
                work->regionCount++;
            }
        }
    }
    if (mode == 0x16) {
        ScrollSelection *list = &work->allList;
        for (s32 i = 0; i < widgetSubCallIfVisible(list); i++) {
            if (work->chosen[i] == 1) {
                work->regions[0x38 / 2 + i] = FUN_001643b4(0xD, i + 0x36);
                work->regionCount++;
            }
        }
    }
}
}
