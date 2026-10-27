/* NON_MATCHING: readable rewrite of the reflect-cutscene step (same calls/rows as retail, 311 vs 311); armcc builds the frame switch tree around 218 instead of retail's 212 and loads g_btlMain later than retail's hoisted r6. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "shard/W4_Match1b_Node.h"
#include "AsdSDK/AsdDebugHooks.h"

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
extern BtlMain *g_btlMain;
extern void *DAT_00435d18;
extern void *DAT_004398d4;
extern u32 g_btlUiBlock;

void FUN_00338358(BtlMainState *state);
void armySummonResetRootTransform(BtlMainState *state);
s32 FUN_00293ed0(BtlMainState *state);
f32 FUN_00338404(BtlMainState *state);
void FUN_002505c0(s32 channel, void *unit, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
s32 FUN_002c1658(s32 first, s32 second);
s32 tableIsSupportedKind(BtlMainState *state, u32 index);
u32 FUN_0024502c(BtlMainState *state, s32 slot);
u32 soundSlotStopById(u32 id);
void armySummonSetCommandTransform(BtlMainState *state);
void modelClearPendingAnimation(BtlMainState *state);
void modelSlotDetachChild(BtlMain *main);
void mathVectorClear(BtlMain *main);
void btlUiPlaySceneFadeOutWhenReady(u32 uiBlock);
void slotResetIdle(BtlMainState *state, s32 slot, u32 value);
void FUN_003ddb50(u32 actor, void *options, u32 value, f32 red, f32 green, f32 blue);
void nodeGroupSetScale(void *group, NodeVec3 scale);
void FUN_00282820(s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);
u32 FUN_003de9e4(s32 actor, void *options, u32 value);
void btlActionReflectRun(s32 actionId, void *argument);
void actionCreateKindFive(s32 id, void *argument, u32 value);
void FUN_00244fb0(BtlMainState *state, u32 slot, u32 palette, u32 param, u32 alpha);
void FUN_00339254(BtlMainState *state);
void groupStartItems(void *group);
void objectDestroyGfx(BtlMain *main);
void FUN_0024082c(BtlMain *main, u32 value);
void FUN_003dc02c(void *object);
void FUN_00339dc0(BtlMainState *state);
void FUN_00338fb0(BtlMainState *state);
void objectScriptDestroy(BtlMainState *state);
void objResourceRelease(BtlMainState *state);
void btlUiPanelFadeInWhenReady(u32 uiBlock);
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
    if (FUN_00293ed0(*block) != 0) {
        u32 frame = channel->timer;
        if (FUN_00338404(*block) == 40.0f)
            FUN_002505c0(0, channel, 0x10001ee, 0, 0, 0, 0);
        if (FUN_002c1658(9, 1) != 0 && static_cast<s32>(frame) > 0 &&
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
            mathVectorClear(g_btlMain);
            btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
            slotResetIdle(*block, 0, 10);
            FUN_002505c0(0, channel, 0x100010a, 0, 0, 0, 1);
            break;
        case 90:
            FUN_003ddb50(0, channel, 5, 0.36f, 0.28f, 0.26f);
            break;
        case 100:
            if (reinterpret_cast<ReflectCutsceneView *>(*block)->scaleGroup != NULL) {
                NodeVec3 scale = {0.08f, 0.08f, 0.08f};
                nodeGroupSetScale(reinterpret_cast<ReflectCutsceneView *>(*block)->scaleGroup, scale);
            }
            break;
        case 148:
            for (s32 index = 0x43; index < 109; ++index) {
                BtlActionRecord *action = &(*block)->actions[index];
                if ((action->status & 1) && (action->status & 0x8000)) {
                    action->status |= 0x80000;
                    action->presentationFlags &= ~0x1000;
                    btlActionQueueSourceReflect(reinterpret_cast<ReflectActionView *>(action)->sourceId, channel, action);
                    FUN_002505c0(reinterpret_cast<ReflectActionView *>(action)->sourceId, channel, 0x10001e9, 0, 0, 0, 0);
                }
            }
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
            FUN_003de9e4(0, channel, 0);
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
            FUN_0024082c(g_btlMain, 0);
            FUN_003dc02c(DAT_00435d18);
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
    }
    return finished;
}
}
