#include "common.h"
#include "game/GameState.h"
#include "map/mapMain.h"
#include "map/MapSpawn.h"
#include "mikado/mikadoMain.h"
#include "code/Code001b.h"
#include "code/Code002b.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

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

extern "C" {
extern MapMain *g_mapMain;
extern MusicSlot g_textEntryTable[];

u8 *dataTable2eSub3FindByKeyPair(s32 map, s32 area);
void soundActorQueueStartPending(void);
void mapAmbientSoundActorsSpawn(s32 map, s32 area);
s32 slotFindByPair(s32 map, s32 area);
s32 bgmGetStateById(u32 id);
void bgmResumeOrRequestTrack(u32 bgm);
s32 gameMapBlockGetValue(s32 index);

/* Picks the music of the current map room: the slot table's choice, overridden by the story flags
 * and the party leader, and starts it when the previous track has stopped. */
void mapAmbientAudioUpdate(void)
{
    MapMain *map = g_mapMain;
    u8 *room = dataTable2eSub3FindByKeyPair(map->mapId, map->areaId);
    if (room != NULL) {
        s8 roomKind = (s8)room[2];
        g_gameState.defaultKind = roomKind;
        g_gameState.selectedKind = roomKind;
    }
    if (g_gameState.event.scriptPending != 0 || g_gameState.event.bgmReleased == 0 || map->silent != 0) {
        bgmReleaseStopped();
        g_gameState.event.bgmReleased = 1;
        return;
    }
    if (soundActorQueueIsEnabled() == 0) {
        mapAmbientSoundActorsSpawn(map->mapId, map->areaId);
    } else if (map->state != 23 && map->state != 24) {
        soundActorQueueStartPending();
    }
    if (map->mapId == 24) {
        if (mapGetDepartureIndex() == 1 && gameFlagIsSet(44) == 0) {
            g_gameState.bgmId = 0x1000086;
            s32 state = bgmGetStateById(0x1000086);
            if (state == 0 || state == 3)
                bgmResumeOrRequestTrack(g_gameState.bgmId);
            return;
        }
    } else if (gameMapBlockGetValue(map->mapId) == 1) {
        MusicSlot *slot = &g_textEntryTable[slotFindByPair(map->mapId, map->areaId)];
        if (slot->alternateBgm != 0) {
            g_gameState.bgmId = slot->alternateBgm;
            s32 state = bgmGetStateById(slot->alternateBgm);
            if (state == 0 || state == 3)
                bgmResumeOrRequestTrack(g_gameState.bgmId);
            return;
        }
    }
    MusicSlot *slot = &g_textEntryTable[slotFindByPair(map->mapId, map->mapId != 24 ? map->areaId : 1)];
    g_gameState.bgmId = slot->defaultBgm;
    if (slot->flaggedBgm != 0 && (slot->flagA == 0 || gameFlagIsSet(slot->flagA) != 0) &&
        (slot->flagB == 0 || gameFlagIsSet(slot->flagB) == 0))
        g_gameState.bgmId = slot->flaggedBgm;
    if ((map->mapId == 19 || (map->mapId == 24 && mapGetDepartureIndex() == 5)) && gameFlagIsSet(0x62C) != 0 &&
        gameFlagIsSet(0x648) == 0) {
        g_gameState.bgmId = 0x100007A;
    } else if (map->mapId != 19 || map->areaId > 4 || gameFlagIsSet(0xB8) != 0) {
        if (map->unk40 != 1 && map->unk40 != 2 && map->mapId != 41 && map->mapId != 42 && map->mapId != 43) {
            u16 leader = rosterGetLeaderId();
            if (leader != 0 && leader != 0x15F && leader != 0x160 && leader != 0x161 && leader != 0x164 &&
                leader != 0x165 && leader != 0x166 && leader != 0x167 && leader != 0x168) {
                if (table1bOr1cGetRecordValue(leader) == 1)
                    g_gameState.bgmId = 0x1000037;
                else
                    g_gameState.bgmId = 0x1000038;
            }
        }
    }
    s32 state = bgmGetStateById(g_gameState.bgmId);
    if (state == 0)
        bgmReleaseStopped();
    else if (state != 3)
        return;
    bgmResumeOrRequestTrack(g_gameState.bgmId);
}

} /* extern "C" */
