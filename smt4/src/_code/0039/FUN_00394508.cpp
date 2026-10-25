/* NON_MATCHING: jump-kind branches and saved transform copy scheduling differ. */
#include "map/MapJumpTransition.h"
#include "map/mapDepart.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"

namespace {
/* The transition-completed flag lies past the shared controller prefix. */
struct AocJumpExitControlView { u8 unk00[0x19]; u8 complete; };
}
extern "C" {
extern GameState g_gameState;
const MapJumpRequest *gameJumpRequestGet(void);
s32 gameStateIsFlagSetAndLarge(void);
u32 FUN_002080e8(void);
s32 FUN_00287304(void);
void FUN_002a03d8(s32 screen, s32 frames);
void mapDepartSetTarget(s32 map, s32 area, s32 object);
void gameJumpRequestClear(void);
void sequenceRequestClearDeferred(void);
}

static __inline void saveJumpTransform(const MapJumpRequest *request)
{
    g_gameState.savedPosition.x = request->transform[0];
    g_gameState.savedPosition.y = request->transform[1];
    g_gameState.savedPosition.z = request->transform[2];
    g_gameState.unk314 = request->transform[3];
    g_gameState.unk318 = request->transform[4];
}

extern "C" void FUN_00394508(AocObjC *controller)
{
    const MapJumpRequest *request = gameJumpRequestGet();
    u32 map;
    if (request->kind == 1) {
        g_gameState.unk2F8Byte = 1;
        g_gameState.savedMapId = request->map;
        g_gameState.savedAreaId = request->entrance;
        g_gameState.savedObjectId = request->object;
        saveJumpTransform(request);
        asdSequenceRequest(6, NULL, 0);
    } else if (request->kind == 2) {
        g_gameState.unk2F8Byte = 1;
        g_gameState.savedMapId = request->map + 100;
        g_gameState.savedAreaId = request->entrance;
        g_gameState.savedObjectId = -1;
        saveJumpTransform(request);
        asdSequenceRequest(8, NULL, 0);
    } else if (request->kind == 3) {
        g_gameState.unk2F8Byte = 1;
        g_gameState.savedMapId = request->map;
        g_gameState.savedAreaId = 0;
        map = request->map;
        asdSequenceRequest(14, &map, sizeof(map));
    } else if (gameStateIsFlagSetAndLarge() != 0) {
        map = g_gameState.savedMapId - 200;
        asdSequenceRequest(14, &map, sizeof(map));
    } else if (FUN_002080e8() != 0) {
        asdSequenceRequest(8, NULL, 0);
    } else if (FUN_00287304() != 0) {
        asdSequenceRequest(6, NULL, 0);
    }
    FUN_002a03d8(0, 10);
    FUN_002a03d8(1, 10);
    mapDepartSetTarget(-1, -1, -1);
    gameJumpRequestClear();
    reinterpret_cast<AocJumpExitControlView *>(controller)->complete = 1;
    sequenceRequestClearDeferred();
}
