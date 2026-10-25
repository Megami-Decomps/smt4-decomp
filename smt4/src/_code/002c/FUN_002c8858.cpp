/* NON_MATCHING: readable rebuild of the map interface marker refresh; retail loads g_mapIf twice from separate pool words, copies the position with ldm/stm and lays the marker-kind switch out as a jump table whose bodies share `str r0, [r4, #28]`, none of which armcc reproduces here. */
#include "common.h"

struct MapIfVec3 { f32 x, y, z; };

/* One map interface marker: shown flag, redraw flag, a position and its kind. */
struct MapIfMarker {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 shown;
    /* 0x02 */ u8 dirty;
    /* 0x03 */ u8 unk03[9];
    /* 0x0C */ MapIfVec3 position;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 kind;
};

/* The player's map state (g_gameState) as this refresh reads it. */
struct MapIfPlayerState {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ u8 indoors;
    /* 0x019 */ u8 unk019[0x1F];
    /* 0x038 */ s32 area;
    /* 0x03C */ u8 unk03C[0x48];
    /* 0x084 */ u32 playerPositionX;
    /* 0x088 */ f32 playerPositionY;
    /* 0x08C */ u32 playerPositionZ;
    /* 0x090 */ u8 unk090[0x10];
    /* 0x0A0 */ u32 playerFacing;
    /* 0x0A4 */ u8 unk0A4[0x189];
    /* 0x22D */ u8 destinationSet;
    /* 0x22E */ u8 unk22E[2];
    /* 0x230 */ MapIfVec3 destination;
    /* 0x23C */ u32 destinationFloor;
    /* 0x240 */ s32 destinationKind;
};

/* The map interface block: two markers, the destination marker and the player marker. */
struct MapIf {
    /* 0x00000 */ u8 unk00000[0xCC70];
    /* 0x0CC70 */ MapIfMarker destinationMarker;
    /* 0x0CC90 */ u8 unkCC90[4];
    /* 0x0CC94 */ u8 unkCC94;
    /* 0x0CC95 */ s8 playerShown;
    /* 0x0CC96 */ u8 playerDirty;
    /* 0x0CC97 */ u8 unkCC97[5];
    /* 0x0CC9C */ u8 unkCC9C[4];
    /* 0x0CCA0 */ u32 playerPosition[3];
    /* 0x0CCAC */ u32 playerFacing;
};

extern "C" {
extern MapIf *g_mapIf;
extern MapIfPlayerState g_gameState;

void mapMarkerSynchronizeModelState(void *marker);
void FUN_00291e40(u32 effect, f32 x, f32 y, f32 z);

/* Brings the map interface's destination and player markers in line with the player state: shows
 * the destination marker at its cell (raised) with a kind chosen from the destination kind, hides it
 * when the destination is cleared, and shows the player marker in the areas that have one. */
void FUN_002c8858(void)
{
    MapIf *mapIf = g_mapIf;
    MapIfMarker *marker = &mapIf->destinationMarker;
    if (g_gameState.destinationSet) {
        if (marker->shown == 0 && g_gameState.indoors == 0 && *((u8 *)g_mapIf + 0xCCE0) == 0)
            FUN_00291e40(0x10001FF, g_gameState.destination.x, g_gameState.destination.y, g_gameState.destination.z);
        marker->shown = 1;
        marker->dirty = 1;
        marker->position = g_gameState.destination;
        marker->position.y = g_gameState.destination.y + 200.0f;
        marker->unk18 = g_gameState.destinationFloor;
        switch (g_gameState.destinationKind) {
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
    } else if (marker->shown != 0) {
        marker->shown = 0;
        marker->dirty = 1;
    }
    mapMarkerSynchronizeModelState(marker);

    s32 area = g_gameState.area;
    bool hasPlayerMarker = area == 0x20 || area == 5 || area == 0x19 || area == 0x1A || area == 0x1F ||
                           area == 0x21 || area == 0x23 || area == 0x24;
    if (hasPlayerMarker && g_gameState.indoors == 0) {
        mapIf->playerShown = 1;
        mapIf->playerDirty = 1;
        mapIf->playerPosition[0] = g_gameState.playerPositionX;
        ((f32 *)mapIf->playerPosition)[1] = g_gameState.playerPositionY + 10.0f;
        mapIf->playerPosition[2] = g_gameState.playerPositionZ;
        mapIf->playerFacing = g_gameState.playerFacing;
        mapMarkerSynchronizeModelState(&mapIf->unkCC94);
        return;
    }
    if (mapIf->playerShown != 0) {
        mapIf->playerShown = 0;
        mapIf->playerDirty = 1;
    }
    mapMarkerSynchronizeModelState(&mapIf->unkCC94);
}

} /* extern "C" */
