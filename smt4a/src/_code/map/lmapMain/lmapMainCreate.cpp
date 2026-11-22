/* NON_MATCHING: creates and initialises the lmap main state (0x9370 bytes) and starts its calc and draw tasks. The state reset is lmapMainStateSet's body inlined (its stm pair matches); retail stores the start position with one vstmia and copies it into the target and previous positions through VFP registers (reloading z), where this build copies through r1-r3, and the slot-loop registers differ. */
#include "AsdSDK/AsdDebug.h"
#include "game/GameStateA.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapMainGlobals.h"

extern "C" {

extern Obj557c48 *g_handleRegistry;

void *asdMemoryAllocTracked(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void frameTexConfigureCaptureTextures(s32 value);
void controllerPoolReset(void *object);
void FUN_002442ac(void);
u32 taskCreateDraw(const char *name, s32 priority, u32 first, u32 second,
                   void *update, void *end, u32 work, u32 parent);
s32 FUN_00276264(u32 handle);
s32 FUN_002bc62c(u32 handle);
void lmapRequest(u32 handle);
void FUN_0033feb4(u32 handle);

void lmapMainCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp", 732);
    g_lmapMainState = static_cast<LmapMainStateA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(LmapMainStateA), 1));
    LmapMainStateA *state = g_lmapMainState;
    MapSaveBlockA *gameBlock = gameFlagsGetBlock();
    frameTexConfigureCaptureTextures(1);
    state->unk009[0] = 0;
    state->unk009[1] = 0;
    state->external = 0;
    state->unk00C = 0;
    state->unk010 = 0;
    lmapMainStateSetInline(0);
    reinterpret_cast<f32 &>(state->unkC8) = 1.0f; /* unkC8 holds float bits */
    state->scaleA = 1.0f;
    state->mapId = 0x65;
    state->unk04C = 0;
    state->unk04E = 0;
    state->areaId = 1;

    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x = -554.0f;
    scene->pose.position.y = 0.01f;
    scene->pose.position.z = -4780.0f;
    scene->pose.targetPosition = scene->pose.position;
    scene->pose.previousPosition = scene->pose.targetPosition;
    scene->pose.heading = 180.0f;
    scene->pose.targetHeading = 180.0f;
    scene->nearClip = 1000.0f;
    scene->farClip = 3000.0f;

    state->unk9DC = 0;
    controllerPoolReset(&state->obj);
    state->unk0DC = 0.0f;
    state->unk0E0 = 0;
    state->unkA48[0] = 0.0f;
    state->unkA48[1] = 0.0f;
    state->unkA48[2] = 0.0f;
    state->unk9300 = 0;
    state->unk9304[0] = 100.0f;
    state->unk9304[1] = 20000.0f;
    state->unk9304[2] = 10.0f;
    state->unk9EC[0] = 0;
    state->unk9EC[1] = 0;
    state->unk9EC[2] = 0;
    state->unk9EC[3] = 0;
    state->unk9EC[4] = 0;
    state->unk9EC[5] = 0;
    state->scriptCode = NULL;
    state->scriptStrings = NULL;
    state->script = NULL;
    state->scriptCompletionFlag = 0;
    state->unkAD8 = 0;
    state->unkADC = 0;
    state->modelRequest = 0;
    state->areaModel = NULL;
    state->model = NULL;
    state->unkAD4 = 0;
    for (s32 i = 0; i < 0x20; i++)
        state->actors[i] = NULL;
    for (s32 i = 0; i < 0x80; i++) {
        state->areaSlots[i].registered = 0;
        state->areaSlots[i].shown = 0;
        state->areaSlots[i].stateB = 0;
    }
    for (s32 i = 0; i < 0x80; i++) {
        state->modelSlots[i].registered = 0;
        state->modelSlots[i].shown = 0;
        state->modelSlots[i].stateB = 0;
    }
    state->unk9D8 = 0;
    state->unk9E8 = 0;
    state->scriptState = 0;
    state->unk0E1 = 0;
    state->unk0E4 = 0x38;
    state->unk0E8 = 40.0f;
    state->unk935C = 0;
    state->unk9358 = 0;
    FUN_002442ac();
    gameBlock->registrationPending = 0;
    gameBlock->scriptFlag = 0;
    g_gameState.mapRegistrationPending = 0;
    g_gameState.paused = 0;
    state->flags9360[0] = 0;
    state->flags9360[1] = 0;
    state->flags9360[2] = 0;
    state->flags9360[3] = 0;
    state->flags9360[4] = 0;
    state->flags9360[5] = 0;
    state->flags9360[6] = 0;
    state->flags9360[7] = 0;
    state->flags9360[8] = 0;
    state->flags9360[9] = 0;
    state->flags9360[10] = 0;
    state->unk0F0 = 0;
    state->unk0EC = 0;
    state->modelManager = g_handleRegistry;
    state->unkAE0 = 0;
    state->baseModel = NULL;
    state->freeOnEnd = 0;
    state->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("LMAP C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>((void *)FUN_00276264), reinterpret_cast<AsdProcFunc>((void *)lmapRequest), 0);
    state->drawTask = taskCreateDraw("LMAP U", 0x72, 0, 0, (void *)FUN_002bc62c, (void *)FUN_0033feb4, 0, state->job);
}

} /* extern "C" */
