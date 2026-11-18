/* camp/Camp: Apocalypse's camp (menu) work, g_camp (0x33C0 bytes, allocated by FUN_002c3398).
 * SMT IV's layout is CampState in camp/CampState.h; only Apocalypse's units include this. */
#ifndef CAMP_CAMPSTATEA_H
#define CAMP_CAMPSTATEA_H

#include "common.h"
#include <stddef.h>
#include "ui/GridNavigation.h"
#include "ui/UiSpriteState.h"

/* A row of the skill/summon list (grids[3]). */
struct CampListEntryA {
    /* 0x0 */ u32 id;
    /* 0x4 */ s32 unit;
};

typedef struct CampStateA {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x10];
    /* 0x0014 */ u32 substep;
    /* 0x0018 */ u32 unk0018;
    /* 0x001C */ s32 state;
    /* 0x0020 */ u32 phase;
    /* 0x0024 */ s32 pendingState;          /* the state the transition state (5) goes on to */
    /* 0x0028 */ s32 previousState;
    /* 0x002C */ u8 unk002C[0xE];
    /* 0x003A */ u16 buttonHelpValue;       /* ifTouchGetButtonHelpValue when the sort menu opened */
    /* 0x003C */ u8 unk003C;
    /* 0x003D */ u8 locked;
    /* 0x003E */ u8 unk003E[2];
    /* 0x0040 */ GridNavigation menuGrid;
    /* 0x00A4 */ s8 menuGroup;
    /* 0x00A5 */ u8 unk00A5[2];
    /* 0x00A7 */ s8 menuSelection[16];      /* the selected row of each group */
    /* 0x00B7 */ u8 unitSelectActive;        /* a unit is being picked from the party panel */
    /* 0x00B8 */ s8 unitSelectSource;
    /* 0x00B9 */ s8 unitSelectIndex;         /* 3: none */
    /* 0x00BA */ u8 unk00BA[2];
    /* 0x00BC */ s32 statusSelection;       /* the status screen's selected row when its grid is bypassed */
    /* 0x00C0 */ GridNavigation grids[12];  /* grids[3] lists entries, grids[5..11] the equipment */
    /* 0x0570 */ u8 unk0570[0xE8];
    /* 0x0658 */ UiSpriteState sprites[38]; /* [1] primary, [2] its animation, [29] numeric banner, [36] transition */
    /* 0x1B20 */ u8 spriteState;
    /* 0x1B21 */ u8 unk1B21;
    /* 0x1B22 */ union {
        s16 touchRegions[37];               /* registered touch-region ids, -1 when unused */
        struct {
            /* 0x1B22 */ s16 unk1B22[9];
            /* 0x1B34 */ s16 scrollRegions[5];  /* scroll thumb, previous, next, then two buttons */
            /* 0x1B3E */ s16 rowRegions[11];    /* one per visible list row */
            /* 0x1B54 */ s16 unitRegions[3];
            /* 0x1B5A */ s16 unitSlotRegions[3][3];
        } touch;
    };
    /* 0x1B6C */ u8 touchRegionCount;
    /* 0x1B6D */ u8 unitSlotsReady;
    /* 0x1B6E */ u8 unk1B6E[2];
    /* 0x1B70 */ CampListEntryA entries[200];
    /* 0x21B0 */ u16 gridIds0[124];
    /* 0x22A8 */ u16 gridIds1[1000];
    /* 0x2A78 */ u16 gridIds2[120];
    /* 0x2B68 */ u16 meleeIds[120];         /* grids[5..11]: the equipment categories */
    /* 0x2C58 */ u16 rangedIds[120];
    /* 0x2D48 */ u16 ammunitionIds[50];
    /* 0x2DAC */ u16 headIds[120];
    /* 0x2E9C */ u16 bodyIds[120];
    /* 0x2F8C */ u16 legsIds[120];
    /* 0x307C */ u16 accessoryIds[120];
    /* 0x316C */ u8 unk316C[0x10];
    /* 0x317C */ s32 categoryTimers[25];   /* index 0 is the player, 1..24 the unit slots */
    /* 0x31E0 */ s32 categoryIndices[25];
    /* 0x3244 */ u32 categoryColors[25];
    /* 0x32A8 */ s8 menuGroupBorrowed;      /* leaving the list puts the menu back on group 1 */
    /* 0x32A9 */ u8 unk32A9[7];
    /* 0x32B0 */ u8 noticeFlags[7];
    /* 0x32B7 */ u8 unk32B7[0x109];
} CampStateA;

typedef char CampStateAMenuGridOffsetCheck[offsetof(CampStateA, menuGrid) == 0x40 ? 1 : -1];
typedef char CampStateAGridsOffsetCheck[offsetof(CampStateA, grids) == 0xC0 ? 1 : -1];
typedef char CampStateASpritesOffsetCheck[offsetof(CampStateA, sprites) == 0x658 ? 1 : -1];
typedef char CampStateASpriteStateOffsetCheck[offsetof(CampStateA, spriteState) == 0x1B20 ? 1 : -1];
typedef char CampStateATouchOffsetCheck[offsetof(CampStateA, touchRegions) == 0x1B22 &&
    offsetof(CampStateA, touch.rowRegions) == 0x1B3E && offsetof(CampStateA, touch.unitSlotRegions) == 0x1B5A ? 1 : -1];
typedef char CampStateAEntriesOffsetCheck[offsetof(CampStateA, entries) == 0x1B70 ? 1 : -1];
typedef char CampStateAIdsOffsetCheck[offsetof(CampStateA, accessoryIds) == 0x307C ? 1 : -1];
typedef char CampStateACategoryOffsetCheck[offsetof(CampStateA, categoryColors) == 0x3244 ? 1 : -1];
typedef char CampStateANoticeOffsetCheck[offsetof(CampStateA, noticeFlags) == 0x32B0 ? 1 : -1];
typedef char CampStateAPendingOffsetCheck[offsetof(CampStateA, pendingState) == 0x24 &&
    offsetof(CampStateA, buttonHelpValue) == 0x3A && offsetof(CampStateA, locked) == 0x3D &&
    offsetof(CampStateA, statusSelection) == 0xBC && offsetof(CampStateA, menuGroupBorrowed) == 0x32A8 ? 1 : -1];
typedef char CampStateASizeCheck[sizeof(CampStateA) == 0x33C0 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
extern CampStateA *g_camp;
#ifdef __cplusplus
}
#endif

#endif
