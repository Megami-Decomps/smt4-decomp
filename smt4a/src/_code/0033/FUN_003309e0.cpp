#include "shard/S3SceneWidget.h"

struct FrameReadinessState {
    u8 unk00[0x1c];
    u8 active;
    u8 unk1D[0xd57];
    SceneSprite first;
    u8 unkDFF[0x8d];
    SceneSprite second;
    u8 unkF17[0x12c];
    u8 enabled;
};

extern "C" {
extern FrameReadinessState* g_frameTex;
s32 recordGetSignedFlags(const SceneSprite *sprite);

u32 FUN_003309e0(void)
{
    const FrameReadinessState* frame = g_frameTex;
    if (frame->enabled != 0 && frame->active != 0) {
        if (recordGetSignedFlags(&frame->first) != 0 && recordGetSignedFlags(&frame->second) != 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}
}
