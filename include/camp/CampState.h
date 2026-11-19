/* camp/Camp: SMT IV's camp (menu) work, g_camp (0x25C4 bytes, allocated by FUN_0028a420).
 * Apocalypse's layout is CampStateA in camp/CampStateA.h. */
#ifndef CAMP_CAMPSTATE_H
#define CAMP_CAMPSTATE_H

#include "common.h"
#include <stddef.h>
#include "ui/GridNavigation.h"
#include "ui/UiSpriteState.h"

/* A row of the skill list (grids[3]); the category screens read only the unit. */
struct CampSkillEntry {
    /* 0x0 */ u32 skill;
    /* 0x4 */ s32 unit;
};

typedef struct CampState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[8];
    /* 0x000C */ u32 unk000C;               /* FUN_002e24c8()'s result when menu item 0x1A opens */
    /* 0x0010 */ u8 unk0010[4];
    /* 0x0014 */ u32 substep;
    /* 0x0018 */ s32 state;
    /* 0x001C */ s32 phase;
    /* 0x0020 */ u32 returnState;          /* the state to come back to */
    /* 0x0024 */ u32 previousState;
    /* 0x0028 */ u8 unk0028[4];
    /* 0x002C */ u32 selectedId;
    /* 0x0030 */ u8 unk0030;
    /* 0x0031 */ u8 helpStatus;
    /* 0x0032 */ u8 unk0032;
    /* 0x0033 */ u8 busy;
    /* 0x0034 */ GridNavigation menuGrid;
    /* 0x0098 */ s8 menuGroup;              /* 1 selects the navigation help */
    /* 0x0099 */ u8 unk0099[2];
    /* 0x009B */ s8 menuSelection[16];      /* the selected row of each group */
    /* 0x00AB */ u8 unitSelectActive;        /* a unit is being picked from the party panel */
    /* 0x00AC */ s8 unitSelectSource;
    /* 0x00AD */ s8 unitSelectIndex;         /* 3: none */
    /* 0x00AE */ u8 unk00AE[2];
    /* 0x00B0 */ GridNavigation grids[12]; /* grids[3] lists skills, grids[5..11] the equipment */
    /* 0x0560 */ u8 unk0560[0xE8];
    union {
        /* 0x0648 */ UiSpriteState sprites[14];  /* [1] the selection timer, [2] marker, [3] background */
        struct {
            /* 0x0648 */ UiSpriteState menuOrigin;
            /* 0x06D4 */ UiSpriteState other[4];
            /* 0x0904 */ UiSpriteState commandIcons[8];
            /* 0x0D64 */ UiSpriteState selectedIcon;
        } commands;
    };
    /* 0x0DF0 */ union {
        s16 touchRegions[37];               /* registered touch-region ids, -1 when unused */
        struct {
            /* 0x0DF0 */ s16 commandRegions[9];
            /* 0x0E02 */ s16 scrollRegions[5];  /* scroll thumb, previous, next, then two buttons */
            /* 0x0E0C */ s16 rowRegions[11];    /* one per visible list row */
            /* 0x0E22 */ s16 unitRegions[3];
            /* 0x0E28 */ s16 unitSlotRegions[3][3];
        } touch;
    };
    /* 0x0E3A */ u8 touchRegionCount;
    /* 0x0E3B */ u8 unitSlotsReady;
    /* 0x0E3C */ CampSkillEntry skills[200];
    /* 0x147C */ u16 gridIds0[60];
    /* 0x14F4 */ u16 gridIds1[1000];
    /* 0x1CC4 */ u16 gridIds2[120];
    /* 0x1DB4 */ u16 gridIds4[100];
    /* 0x1E7C */ u16 meleeIds[120];         /* grids[5..11]: the equipment categories */
    /* 0x1F6C */ u16 rangedIds[120];
    /* 0x205C */ u16 ammunitionIds[50];
    /* 0x20C0 */ u16 headIds[120];
    /* 0x21B0 */ u16 bodyIds[120];
    /* 0x22A0 */ u16 legsIds[120];
    /* 0x2390 */ u16 accessoryIds[120];
    /* 0x2480 */ u8 unk2480[0xC];
    /* 0x248C */ u8 questMenuOpened;        /* set by menu item 0x1B (quest menu) */
    /* 0x248D */ u8 questListOpened;        /* set by menu item 0x1C (quest list) */
    /* 0x248E */ u8 uniteMode3Opened;       /* set by menu item 0x2F (unite mode 3) */
    /* 0x248F */ u8 unk248F;
    /* 0x2490 */ s32 categoryTimers[25];   /* index 0 is the player, 1..24 the unit slots */
    /* 0x24F4 */ s32 categoryIndices[25];
    /* 0x2558 */ u32 categoryColors[25];
    /* 0x25BC */ u8 unk25BC;
    /* 0x25BD */ u8 slotRequestPending;     /* set by menu item 7 with slot request 10 */
    /* 0x25BE */ u8 unk25BE[6];
} CampState;

typedef char CampStateMenuGridOffsetCheck[offsetof(CampState, menuGrid) == 0x34 ? 1 : -1];
typedef char CampStateHelpOffsetCheck[offsetof(CampState, unitSelectActive) == 0xAB ? 1 : -1];
typedef char CampStateGridsOffsetCheck[offsetof(CampState, grids) == 0xB0 ? 1 : -1];
typedef char CampStateSpritesOffsetCheck[offsetof(CampState, sprites) == 0x648 &&
    offsetof(CampState, commands.commandIcons) == 0x904 && offsetof(CampState, commands.selectedIcon) == 0xD64 ? 1 : -1];
typedef char CampStateTouchOffsetCheck[offsetof(CampState, touchRegions) == 0xDF0 &&
    offsetof(CampState, touch.rowRegions) == 0xE0C && offsetof(CampState, touch.unitSlotRegions) == 0xE28 ? 1 : -1];
typedef char CampStateSkillsOffsetCheck[offsetof(CampState, skills) == 0xE3C ? 1 : -1];
typedef char CampStateIdsOffsetCheck[offsetof(CampState, accessoryIds) == 0x2390 ? 1 : -1];
typedef char CampStateCategoryOffsetCheck[offsetof(CampState, categoryColors) == 0x2558 ? 1 : -1];
typedef char CampStateMenuFlagsOffsetCheck[offsetof(CampState, unk000C) == 0xC &&
    offsetof(CampState, questMenuOpened) == 0x248C && offsetof(CampState, slotRequestPending) == 0x25BD ? 1 : -1];
typedef char CampStateSizeCheck[sizeof(CampState) == 0x25C4 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
extern CampState *g_camp;
#ifdef __cplusplus
}
#endif

#endif
