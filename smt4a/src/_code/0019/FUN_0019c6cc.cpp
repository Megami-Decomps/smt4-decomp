#include "common.h"

struct TextureFrameTable;
struct TextureFrame {
    u16 unk00;
    u16 textureId; // 0x02
};
struct TextureTransitionWork {
    u32 job;
    TextureFrameTable *frames; // 0x04
};

extern "C" {
TextureTransitionWork *jobGetWork(u32);
TextureFrame *dataTable19FindAddonWord(TextureFrameTable *, s32);
void uiSpriteReplaceTextureEntry(TextureTransitionWork *, u32, s32);

// Resolve a frame's texture and forward the transition request to the work object.
void FUN_0019c6cc(u32 job, s32 frame, s32 enabled, s32 available, s32 transition)
{
    TextureTransitionWork *work = jobGetWork(job);
    if (frame <= 0)
        frame = 1;
    u32 texture = 0;
    if (enabled > 0 && available > 0)
        texture = dataTable19FindAddonWord(work->frames, frame)->textureId;
    uiSpriteReplaceTextureEntry(work, texture, transition);
}
}
