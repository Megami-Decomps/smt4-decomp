/* NON_MATCHING: 22 raw / 6 shape. Two things remain: retail loads g_btlMain's address right after the
 * FUN_00293ed0 test (ldrne r6 ahead of the frame load) where the build loads it at the switch head, and it sets
 * FUN_003ddb50's value argument (r2) before the three colour floats. The second is the callee's parameter order:
 * (actor, options, red, green, blue, value) gives retail's schedule here and leaves the other caller identical,
 * but it is a shared prototype and is reported rather than applied.
 * The two empty cases are retail's: its decision tree pivots on 212 and then on 148, which a switch over the
 * eleven frames with code cannot produce (it pivots on 218 and 100); two or three more labels between 148 and
 * 212 that only break give exactly retail's tree. Their frame numbers are not recoverable, so 150 and 160 stand
 * for them. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "shard/W4_Match1b_Node.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "battle/BtlGlobals.h"
#include "util/MathFunctions.h"
#include "battle/BtlUiGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/LmapPlayerModel.h"

/* Fields of the battle state the cutscene reads beyond the shared prefix. */
struct ReflectCutsceneView {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ void *scaleGroup;
    /* 0x4398 */ u8 unk4398[0x650];
    /* 0x49E8 */ s32 soundSlot;           /* negative: no sound playing */
};

/* The action record's source id at 0x5c. */
struct ReflectActionView {
    /* 0x00 */ u8 unk00[0x5c];
    /* 0x5c */ s32 sourceId;
};

typedef char ReflectCutsceneOffsets[
    offsetof(ReflectCutsceneView, scaleGroup) == 0x4394 &&
    offsetof(ReflectCutsceneView, soundSlot) == 0x49E8 &&
    offsetof(ReflectActionView, sourceId) == 0x5c ? 1 : -1];

extern "C" {
extern void *g_btlAux;
extern void *DAT_004398d4;

void FUN_00338358(BtlMainState *state);
void armySummonResetRootTransform(BtlMainState *state);
s32 FUN_00293ed0(BtlMainState *state);
f32 FUN_00338404(BtlMainState *state);
void btlQueueKeyedScalarReflectAction(s32 channel, void *unit, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
s32 inputQueryButtonState(s32 first, s32 second);
s32 tableIsSupportedKind(BtlMainState *state, u32 index);
u32 FUN_0024502c(BtlMainState *state, s32 slot);
u32 soundSlotStopById(u32 id);
void armySummonSetCommandTransform(BtlMainState *state);
void modelClearPendingAnimation(BtlMainState *state);
void modelSlotDetachChild(BtlCamera *main);
void btlUiPlaySceneFadeOutWhenReady(BtlUi *uiBlock);
void slotResetIdle(BtlMainState *state, s32 slot, u32 value);
void FUN_003ddb50(u32 actor, void *options, u32 value, f32 red, f32 green, f32 blue);
void FUN_00282820(s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);
u32 btlReflectQueueFlaggedRecords(s32 actor, void *options, u32 value);
void btlActionReflectRun(s32 actionId, void *argument);
void actionCreateKindFive(s32 id, void *argument, u32 value);
void FUN_00244fb0(BtlMainState *state, u32 slot, u32 palette, u32 param, u32 alpha);
void FUN_00339254(BtlMainState *state);
void groupStartItems(void *group);
void objectDestroyGfx(BtlCamera *main);
void btlCameraStartMove(BtlCamera *main, u32 value);
void FUN_003dc02c(void *object);
void FUN_00339dc0(BtlMainState *state);
void FUN_00338fb0(BtlMainState *state);
void objectScriptDestroy(BtlMainState *state);
void objResourceRelease(BtlMainState *state);
void btlUiPanelFadeInWhenReady(BtlUi *uiBlock);
u8 buttonHelpGetMode(void);
void buttonHelpSetPreset(u32 preset);
void battleSetActionKind(BtlMainState **block);
void btlActionQueueSourceReflect(s32 id, void *argument, BtlActionRecord *source);

/* Steps the reflect cutscene by one frame; the frame counter lives in the channel's timer. Returns 1 once the
 * cutscene has finished. */
u32 FUN_003d173c(BtlMainState **block, ActionStateChannel *channel)
{
    u32 finished = 0;
    FUN_00338358(*block);
    armySummonResetRootTransform(*block);
    bool summonReady = FUN_00293ed0(*block) != 0;
    u32 frame = channel->timer;
    if (!summonReady)
        return 0;
    if (FUN_00338404(*block) == 40.0f)
        btlQueueKeyedScalarReflectAction(0, channel, 0x10001ee, 0, 0, 0, 0);
    if (inputQueryButtonState(9, 1) != 0 && (s32)frame > 0 &&
        tableIsSupportedKind(*block, 0) != 0 && FUN_0024502c(*block, 0) != 0) {
        s32 soundSlot = reinterpret_cast<ReflectCutsceneView *>(*block)->soundSlot;
        if (soundSlot >= 0)
            soundSlotStopById(soundSlot);
        frame = 0x122;
    }

    switch (frame) {
    case 0:
        asdDebugHookPtr(DAT_004398d4);
        armySummonSetCommandTransform(*block);
        modelClearPendingAnimation(*block);
        modelSlotDetachChild(g_btlMain);
        mathVectorClear(g_btlMain->cameraPosition);
        btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
        slotResetIdle(*block, 0, 10);
        btlQueueKeyedScalarReflectAction(0, channel, 0x100010a, 0, 0, 0, 1);
        break;
    case 90:
        FUN_003ddb50(0, channel, 5, 0.36f, 0.28f, 0.26f);
        break;
    case 100:
        if (reinterpret_cast<ReflectCutsceneView *>(*block)->scaleGroup != NULL) {
            nodeGroupSetScale((Obj4206e8 *)((ReflectCutsceneView *)*block)->scaleGroup, nodeVec3(0.08f, 0.08f, 0.08f));
        }
        break;
    case 148:
        for (s32 index = 0x43; index < 109; ++index) {
            BtlActionRecord *action = &(*block)->actions[index];
            if ((action->status & 1) && (action->status & 0x8000)) {
                action->status |= 0x80000;
                action->presentationFlags &= ~0x1000;
                btlActionQueueSourceReflect(reinterpret_cast<ReflectActionView *>(action)->sourceId, channel, action);
                btlQueueKeyedScalarReflectAction(reinterpret_cast<ReflectActionView *>(action)->sourceId, channel, 0x10001e9, 0, 0, 0, 0);
            }
        }
        break;
    case 150: /* retail's switch has two or three labels here that do nothing: see the note at the top */
    case 160:
        break;
    case 212:
        for (s32 index = 0x43; index < 109; ++index) {
            BtlActionRecord *action = &(*block)->actions[index];
            if ((action->status & 1) && (action->status & 0x8000))
                action->presentationFlags |= 0x1000;
        }
        break;
    case 218:
        FUN_00282820(0, 0, 0, 0, 5, 0, 6, 0);
        break;
    case 228:
        btlReflectQueueFlaggedRecords(0, channel, 0);
        btlActionReflectRun(1, channel);
        break;
    case 229:
        actionCreateKindFive(0, channel, 10);
        break;
    case 264:
        FUN_00282820(0, 0, 0, 0, 5, 1, 6, 0);
        break;
    case 266:
        FUN_00244fb0(*block, 0, 1, 15, 0xff);
        break;
    case 290:
        reinterpret_cast<ReflectCutsceneView *>(*block)->soundSlot = -1;
        FUN_00339254(*block);
        asdDebugHookPtr(DAT_004398d4);
        groupStartItems(DAT_004398d4);
        actionCreateKindFive(0, channel, 1);
        objectDestroyGfx(g_btlMain);
        btlCameraStartMove(g_btlMain, 0);
        FUN_003dc02c(g_btlAux);
        FUN_00339dc0(*block);
        FUN_00338fb0(*block);
        objectScriptDestroy(*block);
        objResourceRelease(*block);
        btlUiPanelFadeInWhenReady(g_btlUiBlock);
        buttonHelpSetPreset(buttonHelpGetMode());
        finished = 1;
        battleSetActionKind(block);
        break;
    }
    ++channel->timer;
    return finished;
}
}
