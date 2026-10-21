#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match2_EntrySequence.h"

struct ScriptTransitionState {
    GameState state;
    u8 unk678[0x1d];
    u8 pending;
};

extern "C" {
u32 scrGetArg(s32 index);
void FUN_00376fb8(u32 id);
void mapPlaceSet(s32 map, s32 area, s32 object);
void FUN_002b945c(u32 id);

u32 FUN_0035ceb0(s32 argumentIndex)
{
    u32 id = scrGetArg(argumentIndex);
    FUN_00376fb8(id + 100);
    mapPlaceSet(0x18, 1, 0);
    FUN_002b945c(id);
    g_gameState.progressEnabled = 1;
    g_gameState.transitionActive = 0;
    reinterpret_cast<ScriptTransitionState*>(&g_gameState)->pending = 1;
    asdSequenceRequest(6, NULL, 0);
    return 1;
}
}
