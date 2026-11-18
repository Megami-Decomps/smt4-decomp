/* NON_MATCHING: every store and the Obj4207d0 effect creation match; retail reloads scene->pose.position.x for the two copied floats (armcc forwards the constant instead) and materialises the float constants in a different register order. The effect-state global is still named by its retail address (DAT_0049f91c base). */
#include "classes/Obj4207d0.h"
#include "map/LmapGlobals.h"

/* The map effect state kept beside the scene. */
struct LmapEffectState {
    /* 0x17C */ u8 unk17C;
    /* 0x17D */ u8 unk17D[3];
    /* 0x180 */ f32 unk180;
    /* 0x184 */ f32 unk184;
    /* 0x188 */ f32 unk188;
    /* 0x18C */ f32 unk18C;
    /* 0x190 */ u8 unk190[0x24];
    /* 0x1B4 */ u16 unk1B4;
};

extern "C" {
extern LmapEffectState DAT_0049f91c;

/* Resets the map scene to its defaults and creates its effect object. */
void FUN_001b4764(void)
{
    LmapScene *scene = g_lmapScene;

    scene->mode = 0;
    scene->state = 0;
    scene->stateTime = 0;
    scene->unk010 = 0;
    scene->unk014 = 0.0f;
    scene->pose.position.x = 10.0f;
    scene->pose.position.y = 0.0f;
    scene->pose.position.z = 10.0f;
    scene->pose.targetPosition.x = scene->pose.position.x;
    scene->pose.targetPosition.y = 0.0f;
    scene->pose.targetPosition.z = 10.0f;
    scene->pose.lastPosition.x = scene->pose.position.x;
    scene->pose.lastPosition.y = 0.0f;
    scene->pose.lastPosition.z = 10.0f;
    scene->pose.heading = -90.0f;
    scene->pose.targetHeading = -90.0f;
    scene->unk068 = 0.0f;
    scene->unk06C = 0;
    scene->moveMode = 0;
    scene->moveSpeed = 5.0f;
    scene->moveActive = 0;
    scene->motionTicks = 0;
    scene->unk070 = 0;
    scene->unk074[0] = 0.0f;
    scene->unk074[1] = 0.0f;
    scene->unk074[2] = 0.0f;
    scene->unk074[3] = 0.0f;
    scene->unk084 = 0;
    scene->unk088 = 0;
    scene->unk090 = 0;
    scene->unk094 = 0.0f;
    scene->nearClip = 100.0f;
    scene->farClip = 1000.0f;
    scene->updateModels = 1;
    Obj4207d0 *effect = new Obj4207d0;
    scene = g_lmapScene;
    scene->playerModel = effect;
    scene->restoreChannelValues = 0;
    scene->channelValues[0] = 0;
    scene->channelValues[1] = 0;
    scene->channelValues[2] = 0;
    scene->requestedChannelValues[0] = 0;
    scene->requestedChannelValues[1] = 0;
    scene->requestedChannelValues[2] = 0;
    scene->equippedHead = 0;
    scene->equippedBody = 0;
    scene->equippedLegs = 0;
    scene->stageModel = NULL;
    scene->unk188 = 0;
    scene->models[0] = NULL;
    scene->models[1] = NULL;
    scene->models[2] = NULL;
    scene->unk180[0] = 0;
    scene->unk180[1] = 0;
    scene->unk180[2] = 0;
    scene->unk180[3] = 0;
    scene->unk180[4] = 0;
    scene->positionalSound = -1;
    scene->modelSwapStep = 0;
    scene->positionalSoundFrames = 0;
    DAT_0049f91c.unk17C = 0;
    DAT_0049f91c.unk180 = 0.0f;
    DAT_0049f91c.unk184 = 0.0f;
    DAT_0049f91c.unk188 = 0.0f;
    DAT_0049f91c.unk18C = 0.0f;
}

} /* extern "C" */
