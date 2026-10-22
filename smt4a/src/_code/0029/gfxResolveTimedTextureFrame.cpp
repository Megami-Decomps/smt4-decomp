#include "gfx/TimedTextureFrames.h"

extern "C" {
// Resolve a frame's inclusive tick interval, with optional looping or end clamping.
void gfxResolveTimedTextureFrame(const TimedTextureFrames* animation, u32 tick, TimedTextureFrameInfo* output)
{
    s32 selected = -1;
    u32 count = animation->frameCount;
    u32 frameTime = 0;
    if (count == 1) {
        selected = 0;
    } else {
        if (animation->flags & 1) {
            frameTime = tick % animation->totalDuration;
        } else if (animation->totalDuration > tick) {
            frameTime = tick;
        } else {
            selected = count - 1;
        }
        if (selected == -1) {
            u32 end = 0;
            const TextureFrameDuration* duration = animation->durations;
            for (u32 i = 0; i < count; ++i, ++duration) {
                end += duration->ticks;
                if (frameTime <= end) {
                    selected = i;
                    break;
                }
                ++end;
            }
        }
    }
    output->scaleX = 1.0f;
    output->scaleY = (animation->flags & 4) ? 2.0f : 1.0f;
    output->frame = animation->frames[selected];
    output->width = (f32)output->frame->width;
    output->height = (f32)output->frame->height;
}
}
