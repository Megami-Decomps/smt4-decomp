#include "AsdSDK/Source/Snd/SoundActorQueue.h"

typedef SoundActorQueuePosition MapIfVec3;

/* unit-local: views of MapIfModelMarker (map/mapIf.h) and GameState (game/GameState.h) kept until the shared
 * types can carry this function: it copies the destination as one 12-byte vector into the marker's f32[3]
 * position, stores the destination floor and the player heading's bits as a word at the marker's f32 heading,
 * and reads s8 `shown`/`destinationSet` where the shared fields are u8 (moving needs a vector-typed marker
 * position and a heading/floor union, checked against every marker user). */
/* One map interface marker: shown flag, redraw flag, a position and its kind. */
struct MapIfMarker {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 shown;
    /* 0x02 */ u8 dirty;
    /* 0x03 */ u8 unk03[9];
    /* 0x0C */ MapIfVec3 position;
    /* 0x18 */ u32 detail;          /* the destination floor, or the player heading's bits */
    /* 0x1C */ u32 kind;
};

/* unit-local: see above. The player's map state (g_gameState) as this refresh reads it. */
struct MapIfPlayerState {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ u8 indoors;
    /* 0x019 */ u8 unk019[0x1F];
    /* 0x038 */ s32 area;
    /* 0x03C */ u8 unk03C[0x48];
    /* 0x084 */ MapIfVec3 playerPosition;
    /* 0x090 */ u8 unk090[0x10];
    /* 0x0A0 */ u32 playerFacing;
    /* 0x0A4 */ u8 unk0A4[0x189];
    /* 0x22D */ s8 destinationSet;
    /* 0x22E */ u8 unk22E[2];
    /* 0x230 */ MapIfVec3 destination;
    /* 0x23C */ u32 destinationFloor;
    /* 0x240 */ s32 destinationKind;
};

/* unit-local: see above. The map interface block: the destination marker and the player marker. */
struct MapIf {
    /* 0x00000 */ u8 unk00000[0xCC70];
    /* 0x0CC70 */ MapIfMarker destinationMarker;
    /* 0x0CC90 */ u8 unkCC90[4];
    /* 0x0CC94 */ MapIfMarker playerMarker;
    /* 0x0CCB4 */ u8 unkCCB4[0x2C];
    /* 0x0CCE0 */ u8 soundMuted;
};

extern "C" {
extern MapIf *g_mapIf;
extern MapIfPlayerState g_gameState;

void mapMarkerSynchronizeModelState(void *marker);

/* Hides a shown marker and marks it for redraw. */
static __inline void mapIfMarkerHide(MapIfMarker *marker)
{
    if (marker->shown != 0) {
        marker->shown = 0;
        marker->dirty = 1;
    }
}

/* Brings the map interface's destination and player markers in line with the player state: shows
 * the destination marker at its cell (raised) with a kind chosen from the destination kind, hides it
 * when the destination is cleared, and shows the player marker in the areas that have one. */
void mapIfRefreshMarkers(void)
{
    MapIf *mapIf = g_mapIf;
    MapIfMarker *marker = &mapIf->destinationMarker;
    MapIfMarker *player;

    if (g_gameState.destinationSet != 0) {
        if (marker->shown == 0 && g_gameState.indoors == 0 && mapIf->soundMuted == 0) {
            soundActorStartOnFreeChannel(0x10001FF, g_gameState.destination);
        }
        marker->shown = 1;
        marker->dirty = 1;
        marker->position = g_gameState.destination;
        marker->position.y += 200.0f;
        marker->detail = g_gameState.destinationFloor;
        switch (g_gameState.destinationKind) {
        case 0:
        case 1:
            marker->kind = 0;
            break;
        case 2:
            marker->kind = 3;
            break;
        case 3:
            marker->kind = 6;
            break;
        case 4:
            marker->kind = 7;
            break;
        case 5:
            marker->kind = 8;
            break;
        case 10:
        case 12:
            marker->kind = 1;
            break;
        case 11:
        case 13:
            marker->kind = 2;
            break;
        case 14:
        case 16:
            marker->kind = 4;
            break;
        case 15:
        case 17:
            marker->kind = 5;
            break;
        default:
            marker->kind = 0;
            break;
        }
    } else {
        mapIfMarkerHide(marker);
    }
    mapMarkerSynchronizeModelState(marker);

    player = &mapIf->playerMarker;
    switch (g_gameState.area) {
    case 5:
    case 25:
    case 26:
    case 31:
    case 32:
    case 33:
    case 35:
    case 36:
        if (g_gameState.indoors == 0) {
            player->shown = 1;
            player->dirty = 1;
            player->position.x = g_gameState.playerPosition.x;
            player->position.y = g_gameState.playerPosition.y + 10.0f;
            player->position.z = g_gameState.playerPosition.z;
            player->detail = g_gameState.playerFacing;
        } else {
            mapIfMarkerHide(player);
        }
        break;
    default:
        mapIfMarkerHide(player);
        break;
    }
    mapMarkerSynchronizeModelState(player);
}

} /* extern "C" */
