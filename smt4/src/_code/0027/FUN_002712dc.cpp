/* NON_MATCHING: rewritten from retail's disassembly (the old draft merged several functions). Control flow,
 * switch tables, calls, constants and data accesses follow retail; about 600 normalized instructions still
 * differ: (1) VFP register choice in the position ease (retail puts the rate in s1 and the position in s0,
 * this build the reverse) and in the warp sounds' position copies, a function-wide allocation tie-break that
 * flips with unrelated edits; (2) the frame is 392 bytes against retail's 400 (the jump curve sits at sp+8 in
 * retail), shifting every epilogue and the stick/collision locals; (3) mode 31 reads DAT_00447e8c through its
 * own pool word where retail addresses it as g_lmapScene+4 (one module data block, not declared as such);
 * (4) a few cross-jumped tails (mode 4's last step into mode 36's, mode 28's stateTime store) and
 * writeback-vs-plain state stores; (5) case 28/37 `previous` loads (vldmia vs vldr). */
#include "map/LmapPlayerModel.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "map/LmapViewGlobals.h"
#include "game/GameState.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/MathFunctions.h"
#include "util/TrigF32.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002c_Smt4.h"
#include "code/Code0020_Smt4.h"
#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {

void FUN_001fa8e4(void);
void FUN_002c8ce4(void);
void FUN_0027fde4(void);
void FUN_002e8be0(void);
void FUN_002e8fdc(void);
void FUN_002e9b60(void);
void FUN_002ea140(void);
void FUN_002ea500(void);
void FUN_002d424c(void);
void FUN_002d4874(void);
void FUN_0021df18(void);
void mapFastModelCreate(f32 x, f32 y, f32 z, f32 heading);


void lmapSetSceneId(u32 sceneId);
void mapEaseSceneHeading(void);
void lmapCameraSetMode(s32 mode);
void FUN_0027fae4(f32 x, f32 y, f32 z);
u32 FUN_002804ec(MapVector *position);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002879dc(s32 identifier, s32 amount, s32 priority);
bool FUN_0027f848(MapVector *out, MapVector position);
u32 mapProjectPositionToGround(MapVector *position, MapVector *previous);
void placementUpdateSceneState(void);
void mapModelRequest(void);
void mapIfMarkModelDestroy(void);
void mapDestroyPrimaryModel(void);

s32 randBetween(s32 minimum, s32 maximum);
u32 padGetNormalizedAnalogStick(f32 *outX, f32 *outY, u32 index);
u32 padIsButtonPressed(u32 button);
void soundPlaySeUnpanned(u32 id);
void buttonHelpSetPreset(u32 preset); // declcheck: local (the shared declaration lives in quest_center/qcMain.h, which does not compile here)
void partyApplyPercentHealthDamage(s32 group, s32 percentage);
void partyApplyStatusMask(s32 group, s32 bit, s32 probability);
f32 mathSnapHeading8(f32 angle);
f32 __hardfp_atan2f(f32 x, f32 y);

extern s32 DAT_00447e8c; /* mode 31: the last stick direction (never updated) */

}

#define DEGREES_TO_RADIANS 0.017453292f

/* Moves to the next step of the scene mode. */
static __forceinline void lmapSceneNextState(void)
{
    g_lmapScene->state++;
    g_lmapScene->stateTime = 0;
}

/* Sets the step of the scene mode. */
static __forceinline void lmapSceneSetState(s32 state)
{
    g_lmapScene->state = state;
    g_lmapScene->stateTime = 0;
}

/* Eases the player position toward its target, by `rate` across and `rateY` vertically. */
static __forceinline void lmapSceneEasePosition(f32 rate, f32 rateY)
{
    g_lmapScene->pose.position.x += (g_lmapScene->pose.targetPosition.x - g_lmapScene->pose.position.x) * rate;
    g_lmapScene->pose.position.y += (g_lmapScene->pose.targetPosition.y - g_lmapScene->pose.position.y) * rateY;
    g_lmapScene->pose.position.z += (g_lmapScene->pose.targetPosition.z - g_lmapScene->pose.position.z) * rate;
}

/* Settles the target position and selects the map regions under the player. */
static __forceinline void lmapSceneUpdateRegions(void)
{
    FUN_002804ec(&g_lmapScene->pose.targetPosition);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

/* The player position as a sound position. */
static __forceinline SoundActorQueuePosition lmapSceneSoundPosition(void)
{
    SoundActorQueuePosition position;
    position.x = g_lmapScene->pose.position.x;
    position.y = g_lmapScene->pose.position.y;
    position.z = g_lmapScene->pose.position.z;
    return position;
}

/* The warp's departure sounds: the effect kind's sound at the player, then one of two sounds 50 ahead
 * of it and 150 above. */
static __forceinline void lmapScenePlayWarpOutSounds(void)
{
    switch (g_gameState.selectedKind) {
    case 0:
        soundActorStartOnFreeChannel(0x100021b, lmapSceneSoundPosition());
        break;
    case 1:
        soundActorStartOnFreeChannel(0x100021d, lmapSceneSoundPosition());
        break;
    case 2:
        soundActorStartOnFreeChannel(0x100021f, lmapSceneSoundPosition());
        break;
    case 3:
        soundActorStartOnFreeChannel(0x1000221, lmapSceneSoundPosition());
        break;
    case 4:
        soundActorStartOnFreeChannel(0x1000223, lmapSceneSoundPosition());
        break;
    }
    mapDepartSpawnPlayerEffect(-1);
    SoundActorQueuePosition position = lmapSceneSoundPosition();
    position.x += mathRemPio2f(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.z += libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.y += 150.0f;
    soundActorStartOnFreeChannel(randBetween(0, 1) + 0x100023c, position);
}

/* The warp's arrival sounds (the departure's, one id higher, 100 above the player). */
static __forceinline void lmapScenePlayWarpInSounds(void)
{
    switch (g_gameState.selectedKind) {
    case 0:
        soundActorStartOnFreeChannel(0x100021c, lmapSceneSoundPosition());
        break;
    case 1:
        soundActorStartOnFreeChannel(0x100021e, lmapSceneSoundPosition());
        break;
    case 2:
        soundActorStartOnFreeChannel(0x1000220, lmapSceneSoundPosition());
        break;
    case 3:
        soundActorStartOnFreeChannel(0x1000222, lmapSceneSoundPosition());
        break;
    case 4:
        soundActorStartOnFreeChannel(0x1000224, lmapSceneSoundPosition());
        break;
    }
    mapDepartSpawnPlayerEffect(-1);
    SoundActorQueuePosition position = lmapSceneSoundPosition();
    position.x += mathRemPio2f(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.z += libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.y += 100.0f;
    soundActorStartOnFreeChannel(randBetween(0, 1) + 0x100023e, position);
}

/* `v` scaled by `s`. */
static __forceinline MapVector mapVectorScale(const MapVector &v, f32 s)
{
    MapVector r;
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
    return r;
}

/* The sum of two vectors. */
static __forceinline MapVector mapVectorAdd(const MapVector &a, const MapVector &b)
{
    MapVector r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

/* lmapSceneEasePosition computed on a copy: every component is read before any is written back. */
static __forceinline void lmapSceneEaseVector(f32 rate, f32 rateY)
{
    MapVector position = g_lmapScene->pose.position;
    MapVector target = g_lmapScene->pose.targetPosition;
    position.x += (target.x - position.x) * rate;
    position.y += (target.y - position.y) * rateY;
    position.z += (target.z - position.z) * rate;
    g_lmapScene->pose.position = position;
}

extern "C" {

/* Runs one frame of the field player's scripted scene modes (warps, falls, traps, cut-ins). */
void FUN_002712dc(void)
{
    switch (g_lmapScene->mode) {
    case 1:
        FUN_001fa8e4();
        return;
    case 2:
        mapEaseSceneHeading();
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 6.0f);
        if (g_lmapScene->state == 0) {
            g_lmapScene->unk06C = 0;
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            lmapSceneNextState();
        }
        lmapSceneUpdateRegions();
        return;
    case 3:
        FUN_002c8ce4();
        return;
    case 4:
        mapEaseSceneHeading();
        g_lmapScene->unk06C = 0;
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 6.0f);
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 12;
            g_lmapScene->moveSpeed = 3.0f;
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 35) {
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 3) {
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
                lmapSceneNextState();
            }
            break;
        }
        return;
    case 5:
        mapEaseSceneHeading();
        g_lmapScene->unk06C = 0;
        if (g_gameState.event.faceOverview) {
            lmapSceneEaseVector(1.0f / 12.0f, 1.0f / 12.0f);
        } else {
            lmapSceneEaseVector(1.0f / 3.0f, 1.0f / 6.0f);
        }
        switch (g_lmapScene->state) {
        case 0:
            mapDepartSpawnPlayerEffect(1);
            if (g_gameState.mapId != 22) {
                g_lmapScene->moveMode = 8;
                g_lmapScene->moveSpeed = 2.0f;
                if (g_gameState.event.faceOverview) {
                    g_lmapScene->pose.targetHeading =
                        mathPositionHeadingDegrees(g_lmapScene->pose.targetPosition, g_gameState.overviewPosition);
                }
            } else {
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
                g_lmapScene->pose.targetHeading =
                    mathPositionHeadingDegrees(g_lmapScene->pose.position, g_gameState.overviewPosition);
            }
            lmapCameraSetMode(14);
            buttonHelpSetPreset(219);
            lmapSceneNextState();
            break;
        case 1:
            g_lmapScene->stateTime++;
            if (g_gameState.mapId == 22 && g_lmapScene->stateTime == 20) {
                g_lmapScene->moveMode = 14;
                g_lmapScene->moveSpeed = 5.0f;
            } else if (g_lmapScene->stateTime > 35) {
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 3) {
                lmapSceneNextState();
            }
            break;
        }
        return;
    case 6:
        mapEaseSceneHeading();
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 13;
            g_lmapScene->moveSpeed = 3.0f;
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 9) {
                FUN_0027fae4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                             g_lmapScene->pose.targetPosition.z);
                lmapScenePlayWarpOutSounds();
                lmapSceneNextState();
            }
            break;
        case 2: {
            s32 time = ++g_lmapScene->stateTime;
            if (time <= 18) {
                g_lmapScene->pose.targetPosition =
                    mapVectorAdd(g_lmapScene->transition.start, mapVectorScale(g_lmapScene->transition.step, time));
            } else {
                FUN_0027fae4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                             g_lmapScene->pose.targetPosition.z);
                lmapScenePlayWarpInSounds();
                lmapSceneNextState();
            }
            break;
        }
        case 3:
            g_lmapScene->moveSpeed = 5.0f;
            break;
        }
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 6.0f);
        lmapSceneUpdateRegions();
        return;
    case 7:
        FUN_0027fde4();
        return;
    case 9:
        FUN_002e8be0();
        return;
    case 11:
        FUN_002e8fdc();
        return;
    case 13:
        FUN_002e9b60();
        return;
    case 15:
        FUN_002ea140();
        return;
    case 17:
        FUN_002ea500();
        return;
    case 19:
        FUN_002d424c();
        return;
    case 21:
        FUN_002d4874();
        return;
    case 23:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 7;
            g_lmapScene->moveSpeed = 0.0f;
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime == 3) {
                FUN_0027fae4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                             g_lmapScene->pose.targetPosition.z);
            }
            if (g_lmapScene->stateTime == 6) {
                FUN_002879dc(30, 50, 0);
                lmapScenePlayWarpInSounds();
            }
            if (g_lmapScene->stateTime > 35) {
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 5) {
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    case 24:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 7;
            g_lmapScene->moveSpeed = 0.0f;
            lmapCameraSetMode(8);
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime == 3) {
                FUN_0027fae4(g_lmapScene->pose.targetPosition.x, g_lmapScene->pose.targetPosition.y,
                             g_lmapScene->pose.targetPosition.z);
            }
            if (g_lmapScene->stateTime == 6) {
                FUN_002879dc(30, 50, 0);
                lmapScenePlayWarpInSounds();
            }
            if (g_lmapScene->stateTime > 35) {
                lmapCameraSetMode(9);
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 30) {
                lmapCameraSetMode(0);
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    case 25:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 27;
            g_lmapScene->moveSpeed = 0.0f;
            mapDepartSpawnPlayerEffect(0);
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 15) {
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 1) {
                g_lmapScene->moveSpeed = 5.0f;
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    case 26:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 27;
            g_lmapScene->moveSpeed = 0.0f;
            lmapSceneNextState();
            lmapScenePlayWarpInSounds();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 15) {
                lmapSceneNextState();
            }
            break;
        case 2:
            if (++g_lmapScene->stateTime > 1) {
                g_lmapScene->moveSpeed = 5.0f;
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    case 28: {
        MapVector previous = g_lmapScene->pose.targetPosition;
        mapEaseSceneHeading();
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 19;
            g_lmapScene->moveSpeed = 5.0f;
            mapDepartSpawnPlayerEffect(0);
            g_lmapScene->unk06C = 0;
            lmapSceneNextState();
            break;
        case 1:
        case 11:
            g_lmapScene->stateTime++;
            break;
        case 10:
            g_lmapScene->moveMode = 19;
            g_lmapScene->moveSpeed = 5.0f;
            g_mapCamera->values[0] = 0.0f;
            g_mapCamera->values[1] = 0.0f;
            g_lmapScene->unk068 = 0.0f;
            g_lmapScene->pose.position = g_lmapScene->pose.targetPosition;
            FUN_0020ffe8((OuterFUN_0020ffe8 *)g_lmapScene->playerModel, 80.0f, g_lmapScene->moveMode, 0.0f);
            lmapSceneNextState();
            break;
        case 20: {
            f32 stickX;
            f32 stickY;
            g_lmapScene->stateTime++;
            padGetNormalizedAnalogStick(&stickX, &stickY, 0);
            if (stickX < -0.5f || stickX > 0.5f || stickY < -0.5f || stickY > 0.5f ||
                FUN_0027f94c(g_lmapScene->playerModel) > 105.0f) {
                lmapSceneSetState(100);
            }
            break;
        }
        case 100: /* left by input: waits for the next mode */
            break;
        }
        MapVector pushed;
        bool moved = FUN_0027f848(&pushed, g_lmapScene->pose.targetPosition);
        g_lmapScene->pose.targetPosition = pushed;
        g_lmapScene->pose.previousPosition = previous;
        if (!g_gameState.unk3CC && g_gameState.unk021 && moved) {
            g_lmapScene->pose.targetPosition.y -= 2.0f;
            mapProjectPositionToGround(&g_lmapScene->pose.targetPosition, &g_lmapScene->pose.previousPosition);
        }
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 3.0f);
        g_lmapScene->pose.lastPosition = g_lmapScene->pose.position;
        g_lmapScene->pose.previousPosition = previous;
        return;
    }
    case 29:
        g_lmapScene->moveMode = 0;
        g_lmapScene->moveSpeed = 0.0f;
        return;
    case 30:
        switch (g_lmapScene->state) {
        case 0:
            if (++g_lmapScene->stateTime > 60) {
                g_lmapScene->moveMode = 17;
                g_lmapScene->moveSpeed = 5.0f;
                lmapSceneNextState();
            }
            break;
        case 1:
            if (++g_lmapScene->stateTime == 150) {
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
            }
            break;
        }
        return;
    case 31: {
        f32 stickX;
        f32 stickY;
        switch (g_lmapScene->state) {
        case 0: {
            placementUpdateSceneState();
            g_lmapScene->moveMode = 9;
            g_lmapScene->moveSpeed = 0.0f;
            g_lmapScene->pose.targetHeading = g_lmapScene->pose.heading;
            g_lmapScene->pose.targetPosition.x = g_lmapScene->pose.position.x;
            g_lmapScene->pose.targetPosition.y = g_lmapScene->pose.position.y;
            g_lmapScene->pose.targetPosition.z = g_lmapScene->pose.position.z;
            g_lmapScene->unk06C = 0;
            {
                SoundActorQueuePosition position = lmapSceneSoundPosition();
                position.x += mathRemPio2f(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
                position.z += libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
                position.y += 150.0f;
                soundActorStartOnFreeChannel(0x100023a, position);
            }
            lmapSceneNextState();
            break;
        }
        case 1:
            if (++g_lmapScene->stateTime == 6) {
                mapDepartSpawnPlayerEffect(0);
            }
            if (g_lmapScene->stateTime > 20) {
                g_lmapScene->moveMode = 10;
                g_lmapScene->moveSpeed = 3.0f;
                lmapSceneNextState();
                g_lmapScene->struggleCount = 0;
                DAT_00447e8c = 0;
            }
            break;
        case 2:
            g_lmapScene->stateTime++;
            padGetNormalizedAnalogStick(&stickX, &stickY, 0);
            if (stickX < -0.5f || stickX > 0.5f || stickY < -0.5f || stickY > 0.5f) {
                s32 direction = (s32)(mathSnapHeading8(__hardfp_atan2f(stickX, stickY) * 57.324840f) * 0.125f);
                if (DAT_00447e8c != direction) {
                    g_lmapScene->struggleCount += 2;
                }
            }
            if (padIsButtonPressed(1) || padIsButtonPressed(0) || padIsButtonPressed(9) || padIsButtonPressed(10)) {
                g_lmapScene->struggleCount += 3;
            }
            switch (g_lmapScene->stateTime) {
            case 10:
            case 40:
            case 75:
            case 110:
            case 145:
                mapDepartSpawnPlayerEffect(0);
                break;
            }
            if (g_lmapScene->struggleCount + g_lmapScene->stateTime > 120) {
                mapModelRequest();
                mapDepartSpawnPlayerEffect(0);
                g_lmapScene->moveMode = 11;
                g_lmapScene->moveSpeed = 3.0f;
                lmapSceneNextState();
            }
            break;
        case 3:
            if (++g_lmapScene->stateTime > 10) {
                g_lmapScene->moveSpeed = 5.0f;
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    }
    case 32:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 3;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->pose.targetHeading = g_lmapScene->pose.heading;
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
            g_lmapScene->unk06C = 0;
            FUN_002879dc(10, 20, 0);
            mapDepartSpawnPlayerEffect(0);
            soundActorStartOnFreeChannel(0x1000186, lmapSceneSoundPosition());
            {
                SoundActorQueuePosition position = lmapSceneSoundPosition();
    position.x += mathRemPio2f(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.z += libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 50.0f;
    position.y += 150.0f;
                soundActorStartOnFreeChannel(randBetween(0, 1) + 0x1000238, position);
            }
            if (g_gameState.mapId == 5 && g_gameState.areaId == 9) {
                partyApplyPercentHealthDamage(2, 5);
                partyApplyStatusMask(2, 5, 5);
            } else {
                partyApplyPercentHealthDamage(2, 3);
                partyApplyStatusMask(2, 5, 15);
            }
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 10) {
                g_lmapScene->moveSpeed = 5.0f;
                lmapSetSceneId(1);
            }
            break;
        }
        lmapSceneUpdateRegions();
        return;
    case 33:
        mapEaseSceneHeading();
        g_lmapScene->unk06C = 0;
        g_lmapScene->moveMode = 0;
        g_lmapScene->moveSpeed = 0.0f;
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 6.0f);
        lmapSceneUpdateRegions();
        return;
    case 34:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 33;
            g_lmapScene->moveSpeed = 0.0f;
            lmapCameraSetMode(5);
            mapFastModelCreate(g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z,
                         g_lmapScene->pose.heading);
            g_lmapScene->pose.targetHeading = g_lmapScene->pose.heading;
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
            g_lmapScene->unk06C = 0;
            lmapSceneNextState();
            return;
        case 1:
            if (g_lmapScene->stateTime == 2) {
                soundPlaySeUnpanned(0x1000179);
            }
            if (g_lmapScene->stateTime == 45) {
                soundPlaySeUnpanned(0x10001fd);
            }
            if (g_lmapScene->stateTime == 45) {
                soundPlaySeUnpanned(0x1000202);
            }
            if (g_lmapScene->stateTime == 156) {
                soundPlaySeUnpanned(0x1000201);
            }
            if (g_lmapScene->stateTime == 240) {
                soundPlaySeUnpanned(0x10001fe);
            }
            if (++g_lmapScene->stateTime > 240) {
                lmapSceneNextState();
            }
            return;
        case 2:
            if (++g_lmapScene->stateTime > 90) {
                slotSetRequest(0, 10, 255);
                lmapSceneNextState();
            }
            return;
        case 3:
            if (screenFadesAllReady()) {
                lmapCameraSetMode(0);
                g_lmapScene->moveMode = 0;
                g_lmapScene->moveSpeed = 5.0f;
                mapIfMarkModelDestroy();
                lmapSceneNextState();
            }
            return;
        case 4:
            lmapSceneNextState();
            return;
        case 5:
            mapDestroyPrimaryModel();
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 0.0f;
            if (!g_gameState.map.actionOption) {
                screenFadeStartIn(0, 10, 255);
            }
            lmapSceneNextState();
            return;
        case 6:
            if (++g_lmapScene->stateTime > 15) {
                g_lmapScene->moveSpeed = 5.0f;
                lmapSetSceneId(1);
            }
            return;
        }
        return;
    case 35: {
        /* The height curve of the jump, one entry a frame. */
        f32 heights[98] = {
        0.21f, 0.82f, 1.83f, 3.23f, 5.03f, 7.2f, 9.74f, 12.65f, 15.91f, 19.53f,
        23.49f, 27.79f, 32.42f, 37.38f, 42.65f, 48.23f, 54.11f, 60.29f, 66.76f, 73.51f,
        80.53f, 87.83f, 95.38f, 103.19f, 111.24f, 119.53f, 128.06f, 136.81f, 145.79f, 154.97f,
        164.36f, 173.95f, 183.73f, 193.7f, 203.84f, 214.15f, 224.63f, 235.26f, 246.04f, 256.96f,
        268.02f, 279.21f, 290.52f, 301.95f, 313.48f, 325.12f, 336.84f, 348.66f, 360.56f, 372.52f,
        384.56f, 396.65f, 408.8f, 420.99f, 433.22f, 445.48f, 457.76f, 470.06f, 482.38f, 494.69f,
        507.0f, 519.31f, 531.59f, 543.85f, 556.08f, 568.27f, 580.41f, 592.51f, 604.54f, 616.51f,
        628.4f, 640.22f, 651.95f, 663.58f, 675.11f, 686.54f, 697.85f, 709.03f, 720.09f, 731.02f,
        741.8f, 752.43f, 762.9f, 773.21f, 783.35f, 793.32f, 803.1f, 812.68f, 822.07f, 831.26f,
        840.23f, 848.98f, 857.51f, 865.8f, 873.85f, 881.66f, 889.21f, 896.51f,
        };
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->pose.targetHeading = g_lmapScene->pose.heading = g_gameState.heading;
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position = g_gameState.overviewPosition;
            g_lmapScene->unk06C = 0;
            lmapCameraSetMode(6);
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime > 10) {
                FUN_0021df18();
                soundPlaySeUnpanned(0x10000c0);
                lmapSceneNextState();
            }
            break;
        case 2:
            if ((u32)g_lmapScene->stateTime < 98) {
                g_lmapScene->pose.position.y = g_lmapScene->pose.targetPosition.y + heights[g_lmapScene->stateTime];
            }
            g_lmapScene->stateTime++;
            break;
        }
        return;
    }
    case 36:
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 3.0f;
            g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
            g_lmapScene->pose.targetHeading =
                mathPositionHeadingDegrees(g_lmapScene->pose.position, g_lmapScene->pose.targetPosition);
            g_lmapScene->unk06C = 0;
            lmapSceneNextState();
            break;
        case 1:
            mapEaseSceneHeading();
            lmapSceneEasePosition(0.1f, 0.1f);
            if (++g_lmapScene->stateTime == 1) {
                if (g_gameState.areaId == 3 || g_gameState.areaId == 7) {
                    lmapCameraSetMode(7);
                }
            }
            if (g_gameState.areaId == 3 ? g_lmapScene->stateTime > 15 : g_lmapScene->stateTime > 7) {
                soundPlaySeUnpanned(0x10000c1);
                lmapSceneNextState();
            }
            break;
        case 2:
            g_lmapScene->pose.position.x += (g_lmapScene->pose.targetPosition.x - g_lmapScene->pose.position.x) * 0.1f;
            g_lmapScene->pose.position.z += (g_lmapScene->pose.targetPosition.z - g_lmapScene->pose.position.z) * 0.1f;
            if (++g_lmapScene->stateTime > 5) {
                g_lmapScene->moveMode = 6;
                g_lmapScene->moveSpeed = 3.0f;
                lmapSceneNextState();
            }
            break;
        case 3:
            if (g_lmapScene->stateTime == 4) {
                mapDepartSpawnPlayerEffect(0);
                SoundActorQueuePosition position = lmapSceneSoundPosition();
                position.x += mathRemPio2f(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 10.0f;
                position.z += libm_cosf(g_lmapScene->pose.heading * DEGREES_TO_RADIANS) * 10.0f;
                position.y += 150.0f;
                soundActorStartOnFreeChannel(0x100023b, position);
            }
            g_lmapScene->pose.position.x += (g_lmapScene->pose.targetPosition.x - g_lmapScene->pose.position.x) * 0.1f;
            g_lmapScene->pose.position.z += (g_lmapScene->pose.targetPosition.z - g_lmapScene->pose.position.z) * 0.1f;
            g_lmapScene->pose.position.y += g_lmapScene->stateTime * 3.0f;
            g_lmapScene->stateTime++;
            break;
        }
        return;
    case 37: {
        MapVector previous = g_lmapScene->pose.targetPosition;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        g_lmapScene->unk06C = 0;
        if (g_gameState.unk021 && !g_gameState.unk3CC &&
            (g_lmapScene->unk068 <= -0.1f || g_lmapScene->unk068 >= 0.1f)) {
            g_lmapScene->pose.targetPosition.y = previous.y - 2.0f - g_lmapScene->unk068;
        }
        g_lmapScene->moveMode = 18;
        g_lmapScene->moveSpeed = 10.0f;
        if (g_lmapScene->slideStep > 4.0f) {
            g_lmapScene->slideStep -= (g_lmapScene->slideStep - 4.0f) * 0.5f;
        } else {
            g_lmapScene->slideStep = 4.0f;
        }
        g_lmapScene->pose.targetPosition.x +=
            mathRemPio2f(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * g_lmapScene->slideStep;
        g_lmapScene->pose.targetPosition.z +=
            libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * g_lmapScene->slideStep;
        g_lmapScene->pose.previousPosition = previous;
        if (!g_gameState.unk3CC && g_gameState.unk021) {
            if (mapProjectPositionToGround(&g_lmapScene->pose.targetPosition, &g_lmapScene->pose.previousPosition)) {
                g_lmapScene->unk068 = 0.0f;
            } else {
                g_lmapScene->unk068 += 2.0f;
                if (g_lmapScene->unk068 > 20.0f) {
                    g_lmapScene->unk068 = 20.0f;
                }
            }
        }
        FUN_002804ec(&g_lmapScene->pose.targetPosition);
        g_lmapScene->nearClip = 0.0f;
        mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 3.0f);
        mapEaseSceneHeading();
        g_lmapScene->pose.lastPosition = g_lmapScene->pose.position;
        g_lmapScene->pose.previousPosition = previous;
        lmapCameraSetMode(15);
        return;
    }
    case 38:
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        switch (g_lmapScene->state) {
        case 0:
            g_lmapScene->unk06C = 0;
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            lmapSceneNextState();
            break;
        case 1:
            if (++g_lmapScene->stateTime == 4 && g_gameState.unk0B4 < 99) {
                soundPlaySeUnpanned(g_gameState.unk0B4 + 0x10000af);
            }
            break;
        }
        FUN_002804ec(&g_lmapScene->pose.targetPosition);
        g_lmapScene->nearClip = 0.0f;
        mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
        lmapSceneEasePosition(1.0f / 3.0f, 1.0f / 6.0f);
        mapEaseSceneHeading();
        return;
    }
}

}
