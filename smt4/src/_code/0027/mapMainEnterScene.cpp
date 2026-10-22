#include "common.h"

namespace {
struct GameStateMapView {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u8 returning;
};

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

extern GameStateMapView g_gameState;
extern MapMainView *g_mapMain;
s32 FUN_00285574(void);
void FUN_00281784(void);
void FUN_00297a00(void);
void FUN_0027b65c(u32 area, u32 point);
void FUN_002849a4(s32 arg);
void mapSpawnActiveSlotEffects(void);
void FUN_00277bdc(void);
void FUN_002646d4(s32 arg);

/* Set up the map scene, either returning to it or entering at the stored position. */
void mapMainEnterScene(void)
{
    MapMainView *map = g_mapMain;

    if (g_gameState.returning) {
        if (FUN_00285574()) {
            FUN_00281784();
            FUN_00297a00();
            FUN_0027b65c(map->position.area, FUN_00285574());
            FUN_002849a4(1);
            FUN_002646d4(1);
        } else {
            FUN_00281784();
            FUN_00297a00();
            FUN_002849a4(1);
            mapSpawnActiveSlotEffects();
            FUN_002646d4(1);
        }
    } else {
        FUN_00281784();
        MapPosition position = map->position;
        FUN_00297a00();
        FUN_0027b65c(position.area, position.point);
        FUN_00277bdc();
        mapSpawnActiveSlotEffects();
        FUN_002646d4(1);
    }
}

} /* extern "C" */
