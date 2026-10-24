/* NON_MATCHING: readable rebuild from asm of the map music selection (the draft's lost arguments restored: the slot table row's flags, the sub-area passed to the slot lookup and the lmap spawn index); armcc here reloads the area/sub fields and the game-state pointer differently across the override ladder. */
#include "common.h"

/* The game state (only the fields read here). */
struct GameStateView {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ u32 bgm;
    /* 0x030 */ s16 room;
    /* 0x032 */ s8 roomByte;
    /* 0x033 */ u8 unk033[0x11A];
    /* 0x14D */ u8 musicStarted;   /* the byte DAT_005f16fc.musicInitialized reads as */
    /* 0x14E */ u8 unk14E[0x2B6];
    /* 0x404 */ u8 pending;
};

/* The map flags block (DAT_005f16fc). */
struct MapMusicFlags {
    /* 0x00 */ u8 unk00[0x4D];
    /* 0x4D */ u8 musicInitialized;
    /* 0x4E */ u8 unk4E[0x2C];
    /* 0x7A */ u8 musicLocked;
};

/* A row of the music slot table (0x5C bytes). */
struct MusicSlot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 defaultBgm;
    /* 0x0C */ s16 flagA;           /* must be set (0: none) */
    /* 0x0E */ s16 flagB;           /* must not be set (0: none) */
    /* 0x10 */ u32 flaggedBgm;
    /* 0x14 */ u32 alternateBgm;
    /* 0x18 */ u8 unk18[0x44];
};

/* The map main state (only the fields read here). */
struct MapMain {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 mode;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ s32 area;
    /* 0x34 */ s32 sub;
    /* 0x38 */ u8 unk38[0x11];
    /* 0x49 */ u8 silent;
};

extern "C" {
extern GameStateView g_gameState;
extern MapMain *g_mapMain;
extern MapMusicFlags DAT_005f16fc;
extern MusicSlot DAT_00582364[];

u8 *FUN_003cb88c(s32 area, s32 sub);
void bgmReleaseStopped(void);
s32 FUN_002b950c(void);
void FUN_002b9520(void);
void FUN_00249ac4(s32 area, s32 sub);
s32 gameFlagsValueGet(void);
s32 slotFindByPair(s32 area, s32 sub);
s32 bgmGetStateById(u32 id);
void FUN_003d4c68(u32 bgm);
s32 gameFlagIsSet(s32 flag);
s32 lmapGetSpawnIndex(void);

/* Picks the music of the current map room: the slot table's choice, overridden by the story flags
 * of the special areas, and starts it when the previous track has stopped. */
void FUN_002bcafc(void)
{
    MapMain *map = g_mapMain;
    if (g_gameState.pending != 0)
        g_gameState.pending = 0;
    u8 *room = FUN_003cb88c(map->area, map->sub);
    if (room != NULL) {
        s8 roomId = (s8)room[2];
        g_gameState.room = roomId;
        g_gameState.roomByte = roomId;
    }
    if (DAT_005f16fc.musicLocked != 0 || DAT_005f16fc.musicInitialized == 0 || map->silent != 0) {
        bgmReleaseStopped();
        g_gameState.musicStarted = 1;
        return;
    }
    if (FUN_002b950c() == 0) {
        FUN_00249ac4(map->area, map->sub);
    } else if (map->mode != 23 && map->mode != 24) {
        FUN_002b9520();
    }
    if (map->area == 24) {
        lmapGetSpawnIndex();
    } else if (gameFlagsValueGet() == 1) {
        MusicSlot *slot = &DAT_00582364[slotFindByPair(map->area, map->sub)];
        if (slot->alternateBgm != 0) {
            g_gameState.bgm = slot->alternateBgm;
            s32 state = bgmGetStateById(slot->alternateBgm);
            if (state == 0 || state == 3)
                FUN_003d4c68(g_gameState.bgm);
            return;
        }
    }
    MusicSlot *slot = &DAT_00582364[slotFindByPair(map->area, map->area != 24 ? map->sub : 1)];
    g_gameState.bgm = slot->defaultBgm;
    if (slot->flaggedBgm != 0 && (slot->flagA == 0 || gameFlagIsSet(slot->flagA) != 0) &&
        (slot->flagB == 0 || gameFlagIsSet(slot->flagB) == 0))
        g_gameState.bgm = slot->flaggedBgm;
    if (map->area == 1) {
        if (map->sub == 11 || map->sub == 12 || map->sub == 13) {
            if (gameFlagIsSet(209) != 0 && gameFlagIsSet(212) == 0)
                g_gameState.bgm = 0x1000013;
            else if (gameFlagIsSet(212) != 0)
                g_gameState.bgm = map->sub == 13 ? 0x100008C : 0x100001D;
        }
        if (map->sub == 1 && gameFlagIsSet(114) != 0 && gameFlagIsSet(177) == 0)
            g_gameState.bgm = 0x1000093;
    }
    if (map->area == 37) {
        if (map->sub == 3 || map->sub == 4 || map->sub == 5 || map->sub == 6) {
            if (gameFlagIsSet(212) != 0 && gameFlagIsSet(216) == 0) {
                g_gameState.bgm = 0x1000028;
            } else if (gameFlagIsSet(216) != 0) {
                g_gameState.bgm = 0x100005D;
                if (map->sub == 6)
                    g_gameState.bgm = 0x100008B;
            }
        }
        if ((map->sub == 1 || map->sub == 2) && gameFlagIsSet(30) != 0 && gameFlagIsSet(71) == 0)
            g_gameState.bgm = 0x1000093;
    }
    if (map->area == 38) {
        if (map->sub == 5 && gameFlagIsSet(38) == 0)
            g_gameState.bgm = 0x1000084;
    } else if (map->area == 24 && lmapGetSpawnIndex() >= 100) {
        g_gameState.bgm = 0x1000067;
    }
    s32 state = bgmGetStateById(g_gameState.bgm);
    if (state == 0)
        bgmReleaseStopped();
    else if (state != 3)
        return;
    FUN_003d4c68(g_gameState.bgm);
}

} /* extern "C" */
