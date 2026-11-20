/* NON_MATCHING: 54 lines: the channel callback's arguments load in another order (retail: work, range, then the
 * function pointer) and the work/channel registers swap (r4/r5); the reset count's address decomposition differs. */
#include "ui/UiSpriteApi.h"
#include "camp/Unite/UniteGlobals.h"
#include "shard/Shard0034.h"

struct UniteScalarAnimationRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ScalarAnimationChannel *channel;
};

extern "C" {
void modelOwnerApplyAnimationTime(void *object, f32 value);

void FUN_001df6d8()
{
    UniteWork *work = g_unite;
    if (!work) {
        return;
    }
    modelOwnerApplyAnimationTime(work->preview.previewSound, 480.0f);
    modelOwnerApplyAnimationTime(work->preview.previewModel, 480.0f);
    /* the preview camera (camp/jakyou_all.bccam) animates one scalar channel */
    ScalarAnimationChannel *channel = ((UniteScalarAnimationRef *)work->preview.camera)->channel;
    f32 value = channel->interpolate(channel->range, 480.0f, channel->work);
    channel->previous = channel->current;
    channel->current = value;
    channel->dirty = 1;
    work->unk95DC = 480;
    ++work->unk95D8;
}
}
