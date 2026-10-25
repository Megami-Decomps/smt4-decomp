/* NON_MATCHING: timeline end comparison operands and 64-bit mask LDRD versus LDM allocation differ. */
#include "battle/btlGameOver.h"
#include "battle/btlMain.h"
#include "battle/btlUI.h"

struct GameOverEyeTimeline;
extern "C" {
extern GameOverEyeTimeline g_btlGameOverEyeTimeline;
extern BtlGameOverGlobalsA g_btlGameOver;
extern BtlUiA *g_btlUiBlock;
extern const char DAT_005285fc[]; /* battle/gameover/gameover.bf */
extern const char DAT_005285dc[]; /* battle/gameover/gameover.mbm */
void FUN_004fdcd8(u32, u32, u32, u32, u32, u32, u32, u32);
void btlUiPanelStart(BtlUiA *);
u32 btlReflectQueuePairedParameters(s32, u32, u32, u32, u32, u32, u32, u32, u32);
void slotSetRequest(u32, u32, u32);
BtlMainStateA *btlGetMainState();
void asdLoadFileAsyncSimple(const char *, void **, u32);
void *gameDataBlocksGetSaveData();
u32 talkEventStartScript(BtlGameOverA *);
u32 FUN_003e71a8(BtlGameOverA *);

/* Drive eye, effect and fade events, then select the normal or forced game-over path. */
u32 FUN_003e6c14(BtlGameOverA *work)
{
    struct TimelineView {
        s32 panelFrame, fade0Frame;
        u32 fade0;
        s32 fade1Frame;
        u32 fade1;
        s32 effectFrame;
        u32 effectId, effectParameter;
        s32 endFrame;
    };
    /* The save counter is outside the shared save-data prefixes. */
    struct SaveCounterView { u8 unk00000[0x27E3D]; u8 gameOvers; };
    typedef char TimelineOffsets[offsetof(TimelineView, endFrame) == 0x20 &&
        offsetof(SaveCounterView, gameOvers) == 0x27E3D ? 1 : -1];
    const TimelineView *timeline = (const TimelineView *)&g_btlGameOverEyeTimeline;
    if (work->timing.frameCounter == timeline->panelFrame) {
        FUN_004fdcd8(0, 0, 0, 0, 7, 0, 11, 0);
        btlUiPanelStart(g_btlUiBlock);
    }
    if (work->timing.frameCounter == timeline->effectFrame)
        btlReflectQueuePairedParameters(0, 0, timeline->effectId, 16, 0,
            timeline->effectParameter, 0, 2, -1);
    if (work->timing.frameCounter == timeline->fade0Frame)
        slotSetRequest(0, timeline->fade0, 255);
    if (work->timing.frameCounter == timeline->fade1Frame)
        slotSetRequest(1, timeline->fade1, 255);
    if (work->timing.frameCounter <= (u32)timeline->endFrame)
        return 0;

    BtlMainStateA *battle = btlGetMainState();
    u64 forcedMask = u64(g_btlGameOver.forcedStates[0]) |
                     (u64(g_btlGameOver.forcedStates[1]) << 32);
    if ((battle->markerMasks.bits & forcedMask) != 0) {
        work->state = 9;
        return FUN_003e71a8(work);
    }
    work->state = 3;
    asdLoadFileAsyncSimple(DAT_005285fc, &work->dataA, 0);
    asdLoadFileAsyncSimple(DAT_005285dc, &work->dataB, 0);
    SaveCounterView *save = (SaveCounterView *)gameDataBlocksGetSaveData();
    if (save->gameOvers < 255)
        ++save->gameOvers;
    work->state = 4;
    return talkEventStartScript(work);
}
}
