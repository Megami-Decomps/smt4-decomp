/* NON_MATCHING: every store, the Obj4207d0 creation and the encounter reset (as in FUN_001d2f48) match; retail reloads
 * scene->pose.position.x for the two copied floats (armcc forwards the constant), loads the later float constants
 * lazily, and stores the positional-sound defaults with separate str (armcc here pairs them with stm). */
#include "classes/Obj4207d0.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"

extern "C" {
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
    g_gameState.event.encounterSourceActive = 0;
    g_gameState.event.encounterSourcePosition.x = 0.0f;
    g_gameState.event.encounterSourcePosition.y = 0.0f;
    g_gameState.event.encounterSourcePosition.z = 0.0f;
    g_gameState.event.encounterSourceHeading = 0.0f;
    g_gameState.event.encounterDelay = 0;
    g_gameState.event.encounterForced = 0;
    g_gameState.event.encounterApproach = 0;
    g_gameState.event.encounterBackAttack = 0;
    g_gameState.event.encounterPending = 0;
    g_gameState.event.encounterState = 0;
    g_gameState.event.encounterMarkerPosition.x = 0.0f;
    g_gameState.event.encounterMarkerPosition.y = 0.0f;
    g_gameState.event.encounterMarkerPosition.z = 0.0f;
    g_gameState.event.encounterMarkerHeading = 0.0f;
}

} /* extern "C" */
