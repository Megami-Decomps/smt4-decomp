/* NON_MATCHING: scalar-channel registers and the large timer-field address decomposition differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/Shard0034.h"

struct UniteScalarAnimationRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ScalarAnimationChannel *channel;
};
struct UniteAnimationView {
    /* 0x0000 */ u8 unk0000[0x95c8];
    /* 0x95c8 */ void *objectA;
    /* 0x95cc */ void *objectB;
    /* 0x95d0 */ UniteScalarAnimationRef *animation;
    /* 0x95d4 */ u8 unk95d4[8];
    /* 0x95dc */ u32 timer;
};

extern "C" {
extern UniteWorkIV *g_unite;
void FUN_00210194(void *object, f32 value);

void FUN_001df6d8()
{
    UniteWorkIV *work = g_unite;
    if (!work) {
        return;
    }
    UniteAnimationView *view = (UniteAnimationView *)work;
    FUN_00210194(view->objectA, 480.0f);
    FUN_00210194(view->objectB, 480.0f);
    ScalarAnimationChannel *channel = view->animation->channel;
    f32 value = channel->interpolate(channel->start, channel->end, 480.0f, channel->work);
    channel->previous = channel->current;
    channel->current = value;
    channel->dirty = 1;
    view->timer = 480;
    ++work->unk95D8;
}
}
