/* NON_MATCHING: initial animation phases are outlined after the shared return rather than before the timeline; -O2 candidate. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlUI.h"
#include "battle/btlGameOver.h"
#include "code/Code0013.h"

struct GameOverEyeTimeline {
    s32 panelFrame, fade0Frame;
    u32 fade0;
    s32 fade1Frame;
    u32 fade1;
    s32 effectFrame;
    u32 effectId, effectParameter;
    s32 endFrame;
};
extern "C" {
extern BtlAuxA *g_btlAux;
extern GameOverEyeTimeline g_btlGameOverEyeTimeline;
extern BtlUiA *g_btlUiBlock;
extern void *g_btlCamera;
extern const char DAT_00530eb0[]; // "Dead_eyes"
void FUN_004f7b84(BtlAuxA *, const char *);
u32 FUN_004f6d34(BtlAuxA *);
void FUN_004fdcd8(u32, u32, u32, u32, u32, u32, u32, u32);
void btlUiPanelStart(BtlUiA *);
u32 btlReflectQueuePairedParameters(s32 actor, u32 flags, u32 value, u32 parameter,
                 u32 target, u32 first, u32 second, u32 third, u32 fourth);
void slotSetRequest(u32, u32, u32);
void FUN_003f14a0(BtlMainStateA *);
void btlTalkBustUpDestroy();
void holderStopJob2(BtlMainStateA *);
void objectJobStop(BtlMainStateA *);
void FUN_00290ba4(BtlMainStateA *);
void eventCommandClearPending(void *);

u32 btlGameOverRunEyeSequence(BtlGameOverSequence *sequence)
{
    switch (sequence->phase) {
    case 0:
        FUN_004f7b84(g_btlAux, DAT_00530eb0);
        sequence->phase = 1;
        sequence->frame = 0;
        // Fall through while the animation is becoming available.
    case 1:
        if (!FUN_004f6d34(g_btlAux))
            return 0;
        sequence->phase = 2;
        break;
    case 2:
        break;
    default:
        return 0;
    }
    if (sequence->frame == g_btlGameOverEyeTimeline.panelFrame) {
        FUN_004fdcd8(0, 0, 0, 0, 7, 0, 11, 0);
        btlUiPanelStart(g_btlUiBlock);
    }
    if (sequence->frame == g_btlGameOverEyeTimeline.effectFrame)
        btlReflectQueuePairedParameters(0, 0, g_btlGameOverEyeTimeline.effectId, 16, 0, g_btlGameOverEyeTimeline.effectParameter, 0, 2, -1);
    if (sequence->frame == g_btlGameOverEyeTimeline.fade0Frame && FUN_0013def0(0) != 1 && FUN_0013def0(0) != 3)
        slotSetRequest(0, g_btlGameOverEyeTimeline.fade0, 255);
    if (sequence->frame == g_btlGameOverEyeTimeline.fade1Frame && FUN_0013def0(1) != 1 && FUN_0013def0(1) != 3)
        slotSetRequest(1, g_btlGameOverEyeTimeline.fade1, 255);
    if (sequence->frame > g_btlGameOverEyeTimeline.endFrame) {
        BtlMainStateA *battle = btlGetMainState();
        FUN_003f14a0(battle);
        btlTalkBustUpDestroy();
        holderStopJob2(battle);
        objectJobStop(battle);
        FUN_00290ba4(battle);
        if (g_btlCamera)
            eventCommandClearPending(g_btlCamera);
        sequence->state = sequence->mode == 2 ? 1 : 3;
        sequence->phase = 0;
    }
    ++sequence->frame;
    return 0;
}
}
