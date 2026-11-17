#include "common.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "game/GameState.h"
extern "C" {
struct MapModeData { u8 unk00[0x20]; u8 mode; };
struct MapStateSource { u8 unk00[0x3C]; s16 id; u8 unk3E[0xD22]; MapModeData *data; };

/* Synchronize both stored map IDs and the optional map-mode values. */
void gameSynchronizeMapState(const MapStateSource *source)
{
    g_gameState.map.savedLocationSet = 1;
    s32 id = source->id + 200;
    g_gameState.savedMapId = id;
    g_gameState.targetMapId = id;
    if (source->data != NULL) {
        g_gameState.savedAreaId = source->data->mode;
        g_gameState.targetAreaId = source->data->mode;
    }
}
}
