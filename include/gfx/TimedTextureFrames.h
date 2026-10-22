#ifndef GFX_TIMED_TEXTURE_FRAMES_H
#define GFX_TIMED_TEXTURE_FRAMES_H
#include "common.h"
#include <stddef.h>

struct TimedTextureFrame {
    u8 unk00[0x14];
    s32 width;
    s32 height;
};
struct TextureFrameDuration {
    u32 ticks;
    u8 unk04[0xC];
};
struct TimedTextureFrames {
    u32 unk00;
    u32 frameCount;
    u32 flags;
    u32 unk0C;
    const TextureFrameDuration* durations;
    const TimedTextureFrame* const* frames;
    u32 totalDuration;
};
struct TimedTextureFrameInfo {
    f32 scaleX;
    f32 scaleY;
    f32 width;
    f32 height;
    const TimedTextureFrame* frame;
};
typedef char TimedTextureFrameOffsets[offsetof(TimedTextureFrame, width) == 0x14 &&
    offsetof(TimedTextureFrame, height) == 0x18 ? 1 : -1];
typedef char TextureFrameDurationSizeCheck[sizeof(TextureFrameDuration) == 0x10 ? 1 : -1];
typedef char TimedTextureFramesOffsets[sizeof(TimedTextureFrames) == 0x1C &&
    offsetof(TimedTextureFrames, frameCount) == 4 && offsetof(TimedTextureFrames, durations) == 0x10 &&
    offsetof(TimedTextureFrames, frames) == 0x14 && offsetof(TimedTextureFrames, totalDuration) == 0x18 ? 1 : -1];
typedef char TimedTextureFrameInfoOffsets[sizeof(TimedTextureFrameInfo) == 0x14 &&
    offsetof(TimedTextureFrameInfo, frame) == 0x10 ? 1 : -1];
#endif
