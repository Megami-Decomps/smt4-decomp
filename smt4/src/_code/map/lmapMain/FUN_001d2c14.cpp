/* NON_MATCHING: words[] clear becomes __aeabi_memclr4 instead of retail's pair-unrolled loop; scene vector copies group differently, the optional three-word clear uses separate stores and task callback declarations still lack native handle types. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "map/lmapMain.h"
#include "shard/SaveWork.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

SaveWork *gameGetMapBlock(void);
void FUN_00280ac0(s32 value);
void controllerPoolReset(LmapObj *obj);
void FUN_001b3da4(void);
u32 FUN_001d3e3c();
void lmapMainRequest(void);
s32 FUN_001fd9f4();
void FUN_002d5088(void);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, s32 (*update)(), void (*draw)(void),
                   void *work, u32 owner);

extern LmapMainState *g_lmapMainState; /* 0x447060 */
extern LmapScene *g_lmapScene;         /* 0x447e88 */
extern GameState g_gameState;          /* 0x49f91c */

/* Allocates and initialises the field map's state block, resets the scene camera and starts the map's job and draw task. */
void FUN_001d2c14(void)
{
    LmapMainState *state;
    SaveWork *save;
    LmapScene *scene;
    s32 i;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\lmapMain.cpp", 546);
    g_lmapMainState = state = (LmapMainState *)asdMemAlloc(0x100, 0x100, 0, 0x4F04, 1);
    save = gameGetMapBlock();
    FUN_00280ac0(1);
    state->unk09 = 0;
    state->unk0A = 0;
    state->unk0B = 0;
    state->unk0C = 0;
    state->unk10 = 0;
    if (g_lmapMainState->unkCC != 0) {
        g_lmapMainState->unkCC = 0;
        g_lmapMainState->unkD0 = 0;
        g_lmapMainState->unkD4 = 0;
    }
    state->unkC8Float = 1.0f;
    state->unkC4 = 1.0f;
    state->unk40 = 0x65;
    state->unk4C = 0;
    state->unk4E = 0;
    state->unk48 = 1;
    scene = g_lmapScene;
    scene->transform.position[0] = -554.0f;
    scene->transform.position[1] = 0.01f;
    scene->transform.position[2] = -4780.0f;
    scene->transform.positionSnapshotA[0] = -554.0f;
    scene->transform.positionSnapshotA[1] = 0.01f;
    scene->transform.positionSnapshotA[2] = -4780.0f;
    scene->transform.positionSnapshotB[0] = -554.0f;
    scene->transform.positionSnapshotB[1] = 0.01f;
    scene->transform.positionSnapshotB[2] = -4780.0f;
    scene->transform.headingDegrees = 180.0f;
    scene->transform.headingCopy = 180.0f;
    scene->unk15C = 1000.0f;
    scene->unk160 = 3000.0f;
    state->unk994 = 0;
    controllerPoolReset(&state->obj);
    state->unkDC = 0.0f;
    state->unkE0 = 0;
    state->unkA00[0] = 0.0f;
    state->unkA00[1] = 0.0f;
    state->unkA00[2] = 0.0f;
    state->unk4EAC = 0;
    state->unk4EB0[0] = 100.0f;
    state->unk4EB0[1] = 20000.0f;
    state->unk4EB0[2] = 10.0f;
    state->unk9A4[0] = 0;
    state->unk9A4[1] = 0;
    state->unk9A4[2] = 0;
    state->unk9A4[3] = 0;
    state->unk9A4[4] = 0;
    state->unk9A4[5] = 0;
    state->unk9E4[0] = 0;
    state->unk9E4[1] = 0;
    state->unk9E4[2] = 0;
    state->unk9E4[3] = 0;
    state->unkA0C = 0;
    state->unkA94[0] = 0;
    state->unkA94[1] = 0;
    state->unkA94[2] = 0;
    state->unkA90 = 0;
    for (i = 0; i < 32; i++) {
        state->words[i] = 0;
    }
    for (i = 0; i < 128; i++) {
        state->slots[i].stateA = 0;
        state->slots[i].stateB = 0;
    }
    state->unk990 = 0;
    state->unk9A0 = 0;
    state->unk4F00 = 0;
    state->unkE1 = 0;
    state->unkE4 = 0x38;
    state->unkE8 = 40.0f;
    FUN_001b3da4();
    save->mapRegistration.pending = 0;
    g_gameState.mapRegistration.pending = 0;
    state->freeOnEnd = 0;
    state->job = (u32)reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("LMAP C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001d3e3c), reinterpret_cast<AsdProcFunc>(lmapMainRequest), 0));
    state->drawTask = taskCreateDraw("LMAP U", 0x70, 0, 0, FUN_001fd9f4, FUN_002d5088, 0, state->job);
}

} /* extern "C" */
