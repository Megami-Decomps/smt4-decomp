/* NON_MATCHING: snapshot address anchoring, copy coalescing, and saved-register lifetimes differ; local view preserves shared prefix size. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/W5_W5Match8_CameraTransition.h"

/* Local view: the secondary transition extends beyond BattleVectorTransition's recovered end. */
struct SecondaryVectorTransitionView {
    BattleVectorTransition base;
    BattleVector3 progress;
    u8 unk824[0x18];
    s32 duration;
    s32 frame;
    s32 mode;
};
struct SecondaryVectorSnapshots {
    BattleVector3 current;
    BattleVector3 start;
    BattleVector3 position;
};
typedef char SecondaryVectorTransitionOffsetsCheck[
    offsetof(SecondaryVectorTransitionView, progress) == 0x818 &&
    offsetof(SecondaryVectorTransitionView, duration) == 0x83C &&
    offsetof(SecondaryVectorTransitionView, mode) == 0x844 ? 1 : -1];

extern "C" {
extern CameraTransitionGlobals g_btlMain;
extern SecondaryVectorSnapshots DAT_00493530;

// Set the alternate destination, retaining transition snapshots according to battle camera mode.
void FUN_003d64dc(SecondaryVectorTransitionView *transition, s32 duration, s32 mode,
                 f32 x, f32 y, f32 z)
{
    if (g_btlMain.mode == 2) {
        DAT_00493530.position = transition->base.positionData.position;
        DAT_00493530.current = transition->progress;
        transition->base.alternateDestination.x = x;
        transition->base.alternateDestination.y = y;
        transition->base.alternateDestination.z = z;
        transition->base.elapsedData.alternateElapsed = transition->base.secondaryElapsed;
    } else if (g_btlMain.mode == 1) {
        DAT_00493530.current = transition->progress;
        transition->base.alternateDestination.x = x;
        transition->base.alternateDestination.y = y;
        transition->base.alternateDestination.z = z;
        DAT_00493530.start = DAT_00493530.current;
        transition->progress.z = 0;
        transition->progress.y = 0;
        transition->progress.x = 0;
        transition->base.elapsedData.alternateElapsed = transition->base.secondaryElapsed;
        transition->mode = mode;
        transition->duration = duration;
        transition->frame = 0;
        transition->base.flags |= 0x2000;
    } else {
        transition->base.alternateDestination.x = x;
        transition->base.alternateDestination.y = y;
        transition->base.alternateDestination.z = z;
        transition->progress.z = 0;
        transition->progress.y = 0;
        transition->progress.x = 0;
    }
    transition->mode = mode;
    transition->duration = duration;
    transition->frame = 0;
    transition->base.flags |= 0x2000;
}
}
