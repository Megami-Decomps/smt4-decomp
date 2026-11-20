/* NON_MATCHING: motion-frame tests, pose argument scheduling and the encounter marker's
 * game-state loads still compile differently from retail. */
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "AsdSDK/Source/Snd/AsdSnd3dPosition.h"
#include "code/Code0020_Smt4.h"
#include "game/GameState.h"
#include "gamedata/GamePlayerData.h"
#include "map/LmapGlobals.h"
#include "map/LmapPlayerModel.h"
#include "shard/W6_W6Match1_BattleStageModelA.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "status/StatusBustUp.h"

extern "C" void FUN_0025bc80(void);

// The frame values are nonnegative; retail detects threshold crossings using their signed IEEE-754 encodings.
enum MotionFrameBits {
    FRAME_2 = 0x40000000,
    FRAME_8 = 0x41000000,
    FRAME_11 = 0x41300000,
    FRAME_30 = 0x41F00000,
    FRAME_52 = 0x42500000,
    FRAME_74 = 0x42940000
};

union MotionFrame {
    f32 value;
    s32 bits;
};

static __inline bool crossedMotionFrame(s32 previous, f32 current, s32 marker)
{
    MotionFrame frame;
    frame.value = current;
    return previous < marker && frame.bits >= marker;
}

// Draw suppression and the node's position-follow flag are switched together.
static __inline void setMapModelVisible(AsdMdlObject *model, bool show)
{
    if (show) {
        if (model->flags & 2) {
            model->flags &= ~2u;
            model->node->sceneNode->positionFollowed = 1;
        }
    } else if (!(model->flags & 2)) {
        model->flags |= 2;
        model->node->sceneNode->positionFollowed = 0;
    }
}

// Both movement animations use the same sequence to emit each footstep effect.
static __inline void spawnMotionStepEffect(f32 headingOffset, f32 distance)
{
    effectSpawnAheadOfScene(headingOffset, distance);
    FUN_0025bc80();
    mapDepartSpawnPlayerEffect(-1);
}

// Refresh the player and auxiliary field models, motion effects, and encounter marker.
extern "C" void lmapUpdateSceneModels(void)
{
    LmapScene *scene = g_lmapScene;
    if (scene->positionalSoundFrames > 0 && scene->positionalSound != -1) {
        AsdSnd3dPosition position = { scene->pose.position.x, scene->pose.position.y, scene->pose.position.z };
        vec4Forward(scene->positionalSound, position);
        --g_lmapScene->positionalSoundFrames;
    }
    LmapScene *sceneForModels = g_lmapScene;
    if (!sceneForModels->updateModels)
        return;

    const u32 partDrawMask = 0x1C0;
    if (sceneForModels->restoreChannelValues) {
        for (s32 part = 0; part < 3; ++part) {
            LmapScene *scene = g_lmapScene;
            u32 requested = scene->requestedChannelValues[part];
            u32 loaded = scene->channelValues[part];
            if (requested != loaded) {
                scene->channelValues[part] = requested;
                u32 drawMask = loaded;
                if (part == 0 || part == 1 || part == 2)
                    drawMask = partDrawMask;
                FUN_00343c58(reinterpret_cast<u32>(scene->playerModel), static_cast<u8>(part), requested, drawMask);
            }
        }
    } else {
        const PlayerDataIV *player = gameGetPlayerData();
        scene = g_lmapScene;
        if (scene->equippedHead != player->equipped.head) {
            scene->equippedHead = player->equipped.head;
            playerModelLoadPart(reinterpret_cast<u32>(scene->playerModel), 0, partDrawMask);
        }
        scene = g_lmapScene;
        if (scene->equippedBody != player->equipped.body) {
            scene->equippedBody = player->equipped.body;
            playerModelLoadPart(reinterpret_cast<u32>(scene->playerModel), 1, partDrawMask);
        }
        scene = g_lmapScene;
        if (scene->equippedLegs != player->equipped.legs) {
            scene->equippedLegs = player->equipped.legs;
            playerModelLoadPart(reinterpret_cast<u32>(scene->playerModel), 2, partDrawMask);
        }
    }
    lmapPlayerModelDestroy(g_lmapScene->playerModel);

    if (g_lmapScene->mode == 29 || g_lmapScene->mode == 33 || g_gameState.loading) {
        MapVector hiddenPosition;
        hiddenPosition.x = 0.0f;
        hiddenPosition.y = -99999.0f;
        hiddenPosition.z = 0.0f;
        nodeOwnerSetTranslations(g_lmapScene->playerModel, &hiddenPosition);
    } else {
        MapVector position = g_lmapScene->pose.position;
        nodeOwnerSetTranslations(g_lmapScene->playerModel, &position);
        const NodeVec3 rotation = { 0.0f, g_lmapScene->pose.heading, 0.0f };
        FUN_003351e0(g_lmapScene->playerModel, rotation);
        nodeGroupSetScale(g_lmapScene->playerModel, nodeVec3(1.0f, 1.0f, 1.0f));
    }

    if (g_lmapScene->moveActive || FUN_00335118(g_lmapScene->playerModel) != static_cast<u32>(g_lmapScene->moveMode)) {
        scene = g_lmapScene;
        scene->moveActive = 0;
        scene->motionTicks = 0;
        FUN_0020ffe8(reinterpret_cast<OuterFUN_0020ffe8 *>(scene->playerModel), 0.0f, scene->moveMode, scene->moveSpeed);
        g_lmapScene->previousMotionFrame = 0.0f;
    } else {
        ++g_lmapScene->motionTicks;
        const f32 frame = FUN_0027f94c(g_lmapScene->playerModel);
        if (g_lmapScene->moveMode == 2) {
            const s32 previous = g_lmapScene->previousMotionFrameBits;
            if (crossedMotionFrame(previous, frame, FRAME_2)) {
                spawnMotionStepEffect(-20.0f, 40.0f);
            } else if (crossedMotionFrame(previous, frame, FRAME_11)) {
                spawnMotionStepEffect(20.0f, 40.0f);
            }
        } else if (g_lmapScene->moveMode == 18) {
            const s32 previous = g_lmapScene->previousMotionFrameBits;
            if (crossedMotionFrame(previous, frame, FRAME_30) || crossedMotionFrame(previous, frame, FRAME_74)) {
                spawnMotionStepEffect(-20.0f, 20.0f);
            } else if (crossedMotionFrame(previous, frame, FRAME_8) || crossedMotionFrame(previous, frame, FRAME_52)) {
                spawnMotionStepEffect(20.0f, 20.0f);
            }
        }
        g_lmapScene->previousMotionFrame = frame;
    }

    if (g_lmapScene->markers.mapFile5 == NULL || g_lmapScene->markers.mapFile6 == NULL || g_lmapScene->stageModel == NULL)
        return;

    MapVector markerPosition;
    if (g_gameState.inputBlocked) {
        setMapModelVisible(g_lmapScene->markers.mapFile5, false);
        setMapModelVisible(g_lmapScene->markers.mapFile6, false);
    } else {
        setMapModelVisible(g_lmapScene->markers.mapFile5, g_lmapScene->markerState.showFile5 != 0);
        markerPosition = g_lmapScene->pose.position;
        nodeSetTranslation(g_lmapScene->markers.mapFile5->node, 0, &markerPosition.x);
        modelPartSetRotationDegrees(g_lmapScene->markers.mapFile5->node, 0, nodeVec3(0.0f, g_lmapScene->pose.heading, 0.0f));
        if (g_lmapScene->markerState.restartFile5Motion) {
            modelSelectPrimaryMotion(g_lmapScene->markers.mapFile5->node, 1, 0.0f);
            modelSelectSecondaryMotion(g_lmapScene->markers.mapFile5->node, 1, 0.0f);
            asdModelSelectSecondaryMotion(reinterpret_cast<ModelPropertyController *>(g_lmapScene->markers.mapFile5->node), 1, 0.0f);
            scene = g_lmapScene;
            scene->markerState.restartFile5Motion = 0;
            scene->markerState.unk184 = 0;
        }
        if (AsdMdlObject *file6 = g_lmapScene->markers.mapFile6) {
            setMapModelVisible(file6, g_lmapScene->markerState.showFile6 != 0);
            markerPosition = g_lmapScene->pose.position;
            nodeSetTranslation(g_lmapScene->markers.mapFile6->node, 0, &markerPosition.x);
            modelPartSetRotationDegrees(g_lmapScene->markers.mapFile6->node, 0, nodeVec3(0.0f, g_lmapScene->pose.heading, 0.0f));
            if (g_lmapScene->markerState.restartFile6Motion) {
                g_lmapScene->markerState.restartFile6Motion = 0;
                modelSelectPrimaryMotion(g_lmapScene->markers.mapFile6->node, 0, 0.0f);
                modelSelectSecondaryMotion(g_lmapScene->markers.mapFile6->node, 0, 0.0f);
                asdModelSelectSecondaryMotion(reinterpret_cast<ModelPropertyController *>(g_lmapScene->markers.mapFile6->node), 0, 0.0f);
            }
        }
    }

    GameStateEventBlock &event = g_gameState.event;
    if (g_lmapScene->modelSwapStep == 0) {
        if (AsdMdlObject *actor = g_lmapScene->stageModel) {
            bool changeMotion;
            const bool followActor = event.encounterSourceActive != 0;
            if (followActor || (actor->flags & 2)) {
                if (followActor)
                    setMapModelVisible(actor, true);
                nodeSetTranslation(g_lmapScene->stageModel->node, 0, &g_lmapScene->pose.position.x);
                modelPartSetRotationDegrees(g_lmapScene->stageModel->node, 0, nodeVec3(0.0f, g_lmapScene->pose.heading, 0.0f));
                changeMotion = g_lmapScene->actorMotion != g_lmapScene->appliedActorMotion;
            } else {
                setMapModelVisible(actor, false);
                g_lmapScene->actorMotion = 0;
                changeMotion = true;
            }
            if (changeMotion) {
                scene = g_lmapScene;
                scene->appliedActorMotion = scene->actorMotion;
                modelSelectPrimaryMotion(scene->stageModel->node, scene->actorMotion, 0.0f);
                modelSelectSecondaryMotion(g_lmapScene->stageModel->node, g_lmapScene->actorMotion, 0.0f);
            }
        }
    }

    if (event.encounterPending) {
        if (event.encounterState == 2 && !event.encounterApproach && g_gameState.encounterChangeMapId != 0) {
            AsdMdlObject *marker = asdMdlManagerCreateFromSource(g_gameState.map.files[0].handle, g_gameState.map.files[0].buffer, 7);
            g_lmapScene->markers.encounterMarker = marker;
            lightOwnerRegister(marker, 1);
            nodeSetTranslation(g_lmapScene->markers.encounterMarker->node, 0, &event.encounterMarkerPosition.x);
            modelPartSetRotationDegrees(g_lmapScene->markers.encounterMarker->node, 0, nodeVec3(0.0f, event.encounterMarkerHeading, 0.0f));
            modelSelectPrimaryMotion(g_lmapScene->markers.encounterMarker->node, 0, 0.0f);
            modelSelectSecondaryMotion(g_lmapScene->markers.encounterMarker->node, 0, 0.0f);
        }
        if (static_cast<s32>(++event.encounterState) > 50) {
            event.encounterPending = 0;
            event.encounterState = 0;
        }
    }
}
