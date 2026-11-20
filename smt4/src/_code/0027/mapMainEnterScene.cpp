#include "common.h"
#include "game/GameState.h"

namespace {

struct MapPosition {
    u32 area;
    u32 point;
};

struct MapMainView {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ MapPosition position;
};
}

extern "C" {

extern MapMainView *g_mapMain;
s32 mapGetDepartureIndex(void);
void FUN_00281784(void);
void mapIfResetRecords(void);
void FUN_0027b65c(u32 area, u32 point);
void FUN_002849a4(s32 arg);
void mapSpawnActiveSlotEffects(void);
void mapSpawnActiveSignboardEffects(void);
void mapIfRestartActiveRecords(s32 arg);

/* Set up the map scene, either returning to it or entering at the stored position. */
void mapMainEnterScene(void)
{
    MapMainView *map = g_mapMain;

    if (g_gameState.returning) {
        if (mapGetDepartureIndex()) {
            FUN_00281784();
            mapIfResetRecords();
            FUN_0027b65c(map->position.area, mapGetDepartureIndex());
            FUN_002849a4(1);
            mapIfRestartActiveRecords(1);
        } else {
            FUN_00281784();
            mapIfResetRecords();
            FUN_002849a4(1);
            mapSpawnActiveSlotEffects();
            mapIfRestartActiveRecords(1);
        }
    } else {
        FUN_00281784();
        MapPosition position = map->position;
        mapIfResetRecords();
        FUN_0027b65c(position.area, position.point);
        mapSpawnActiveSignboardEffects();
        mapSpawnActiveSlotEffects();
        mapIfRestartActiveRecords(1);
    }
}

} /* extern "C" */
