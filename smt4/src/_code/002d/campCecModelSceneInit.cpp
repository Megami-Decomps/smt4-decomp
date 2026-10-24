#include "camp/CampCec/CampCecModelScene.h"

extern "C" {

void *lmapSceneGetScript(void);
s32 lmapMainIsRunning(void);
void FUN_00294834(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void playerModelListCreate(Obj4206e8 *model, s32 kind);
void FUN_002a09b4(const char *path, s32 arg);

/* Creates the backdrop's player model and, when no map is running, loads the status environment. */
void campCecModelSceneInit(CampCecModelScene *scene)
{
    if (lmapSceneGetScript() != NULL || lmapMainIsRunning() != 0) {
        FUN_00294834(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150,
                     90.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 1.5f);
    }
    scene->playerModel = new (scene) Obj4207d0;
    playerModelListCreate(scene->playerModel, 7);
    scene->lightingSet = 0;
    if (lmapMainIsRunning() == 0 && lmapSceneGetScript() == NULL) {
        scene->lightingSet = 1;
        FUN_002a09b4("status/status.bcenv", 0);
    }
}

} /* extern "C" */
