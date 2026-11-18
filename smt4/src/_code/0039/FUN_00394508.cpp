/* NON_MATCHING: the constant 1 shared by the saved-location flags is kept in a callee-saved register (r6) through the final controller store, where retail holds it in r1 and rematerialises 1 at the end; the kind-2 area/object stores do not pair into stm. */
#include "map/MapJumpTransition.h"
#include "map/mapDepart.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

namespace {
/* The transition-completed flag lies past the shared controller prefix. */
struct AocJumpExitControlView { u8 unk00[0x19]; u8 complete; };
}
extern "C" {
const MapJumpRequest *gameJumpRequestGet(void);
s32 gameStateIsFlagSetAndLarge(void);
u32 FUN_002080e8(void);
s32 FUN_00287304(void);
void titleSetSlotValueState2(s32 screen, s32 frames);
void mapDepartSetTarget(s32 map, s32 area, s32 object);
void gameJumpRequestClear(void);
void sequenceRequestClearDeferred(void);
}

static __inline void saveJumpTransform(const MapJumpRequest *request)
{
    g_gameState.savedPosition.x = request->transform[0];
    g_gameState.savedPosition.y = request->transform[1];
    g_gameState.savedPosition.z = request->transform[2];
    g_gameState.savedHeading = request->transform[3];
    g_gameState.savedHeadingCopy = request->transform[4];
}

extern "C" void FUN_00394508(AocScriptHolder *controller)
{
    const MapJumpRequest *request = gameJumpRequestGet();
    if (request->kind == 1) {
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = request->map;
        g_gameState.savedAreaId = request->entrance;
        g_gameState.savedObjectId = request->object;
        saveJumpTransform(request);
        asdSequenceRequest(6, NULL, 0);
    } else if (request->kind == 2) {
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = request->map + 100;
        g_gameState.savedAreaId = request->entrance;
        g_gameState.savedObjectId = -1;
        saveJumpTransform(request);
        asdSequenceRequest(8, NULL, 0);
    } else if (request->kind == 3) {
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = request->map;
        g_gameState.savedAreaId = 0;
        u32 map = request->map;
        asdSequenceRequest(14, &map, sizeof(map));
    } else if (gameStateIsFlagSetAndLarge() != 0) {
        u32 map = g_gameState.savedMapId - 200;
        asdSequenceRequest(14, &map, sizeof(map));
    } else if (FUN_002080e8() != 0) {
        asdSequenceRequest(8, NULL, 0);
    } else if (FUN_00287304() != 0) {
        asdSequenceRequest(6, NULL, 0);
    }
    titleSetSlotValueState2(0, 10);
    titleSetSlotValueState2(1, 10);
    mapDepartSetTarget(-1, -1, -1);
    gameJumpRequestClear();
    reinterpret_cast<AocJumpExitControlView *>(controller)->complete = 1;
    sequenceRequestClearDeferred();
}
