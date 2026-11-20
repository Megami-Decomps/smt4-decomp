#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/FlagBitTests.h"
#include "code/Code002b.h"
#include "mikado/mikadoMain.h"

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
extern MapMain *g_mapMain;
extern MusicSlot g_textEntryTable[];

u8 *dataTable2eSub3FindByKeyPair(s32 area, s32 sub);
void soundActorQueueStartPending(void);
void mapAmbientSoundActorsSpawn(s32 area, s32 sub);
s32 slotFindByPair(s32 area, s32 sub);
s32 bgmGetStateById(u32 id);
void bgmResumeOrRequestTrack(u32 bgm);
s32 gameFlagIsSet(s32 flag);
s32 lmapGetSpawnIndex(void);

/* Picks the music of the current map room: the slot table's choice, overridden by the story flags
 * of the special areas, and starts it when the previous track has stopped. */
void mapSelectRoomMusic(void)
{
    MapMain *map = g_mapMain;
    if (g_gameState.unk404 != 0)
        g_gameState.unk404 = 0;
    u8 *room = dataTable2eSub3FindByKeyPair(map->area, map->sub);
    if (room != NULL) {
        s8 roomId = (s8)room[2];
        g_gameState.defaultKind = roomId;
        g_gameState.selectedKind = roomId;
    }
    if (g_gameState.scriptPending != 0 || g_gameState.bgmReleased == 0 || map->silent != 0) {
        bgmReleaseStopped();
        g_gameState.bgmReleased = 1;
        return;
    }
    if (soundActorQueueIsEnabled() == 0) {
        mapAmbientSoundActorsSpawn(map->area, map->sub);
    } else if (map->mode != 23 && map->mode != 24) {
        soundActorQueueStartPending();
    }
    if (map->area == 24) {
        lmapGetSpawnIndex();
    } else if (gameFlagsValueGet(map->area) == 1) {
        MusicSlot *slot = &g_textEntryTable[slotFindByPair(map->area, map->sub)];
        if (slot->alternateBgm != 0) {
            g_gameState.bgmId = slot->alternateBgm;
            s32 state = bgmGetStateById(slot->alternateBgm);
            if (state == 0 || state == 3)
                bgmResumeOrRequestTrack(g_gameState.bgmId);
            return;
        }
    }
    MusicSlot *slot = &g_textEntryTable[slotFindByPair(map->area, map->area != 24 ? map->sub : 1)];
    g_gameState.bgmId = slot->defaultBgm;
    if (slot->flaggedBgm != 0 && (slot->flagA == 0 || gameFlagIsSet(slot->flagA) != 0) &&
        (slot->flagB == 0 || gameFlagIsSet(slot->flagB) == 0))
        g_gameState.bgmId = slot->flaggedBgm;
    if (map->area == 1) {
        if (map->sub == 11 || map->sub == 12 || map->sub == 13) {
            if (gameFlagIsSet(209) != 0 && gameFlagIsSet(212) == 0)
                g_gameState.bgmId = 0x1000013;
            else if (gameFlagIsSet(212) != 0)
                g_gameState.bgmId = map->sub == 13 ? 0x100008C : 0x100001D;
        }
        if (map->sub == 1 && gameFlagIsSet(114) != 0 && gameFlagIsSet(177) == 0)
            g_gameState.bgmId = 0x1000093;
    }
    if (map->area == 37) {
        if (map->sub == 3 || map->sub == 4 || map->sub == 5 || map->sub == 6) {
            if (gameFlagIsSet(212) != 0 && gameFlagIsSet(216) == 0) {
                g_gameState.bgmId = 0x1000028;
            } else if (gameFlagIsSet(216) != 0) {
                g_gameState.bgmId = 0x100005D;
                if (map->sub == 6)
                    g_gameState.bgmId = 0x100008B;
            }
        }
        if ((map->sub == 1 || map->sub == 2) && gameFlagIsSet(30) != 0 && gameFlagIsSet(71) == 0)
            g_gameState.bgmId = 0x1000093;
    }
    if (map->area == 38) {
        if (map->sub == 5 && gameFlagIsSet(38) == 0)
            g_gameState.bgmId = 0x1000084;
    }
    if (map->area == 24 && lmapGetSpawnIndex() >= 100) {
        g_gameState.bgmId = 0x1000067;
    }
    s32 state = bgmGetStateById(g_gameState.bgmId);
    if (state == 0)
        bgmReleaseStopped();
    else if (state != 3)
        return;
    bgmResumeOrRequestTrack(g_gameState.bgmId);
}

} /* extern "C" */
