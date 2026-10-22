/* NON_MATCHING: -O2 candidate; the 60-byte preset copy splits into mixed VFP/integer chunks instead of one15-register transfer, increasing preserved registers/frame size. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct FrameTransitionPresets {
    s32 values[15];
};
struct FrameTransitionWork {
    u8 unk00[0x1c];
    u8 enabled;
    u8 unk1d[3];
    s32 frame;
    u8 closing;
    u8 dirty;
    u8 unk26[2];
    f32 scaleX;
    f32 scaleY;
    f32 speed;
    UiResourceParameters resources;
    u8 unk54[0xd20];
    UiAnimatedSprite sprites[4];
    u8 unkfa4[0x9c];
    u8 flag1040;
    u8 unk1041[2];
    u8 flag1043;
    u8 flag1044;
    u8 unk1045[0x393];
    FrameTransitionPresets presets;
};

extern "C" {
extern FrameTransitionWork *g_frameTex;
extern const FrameTransitionPresets g_frameTransitionDefaultPresets;
void sysPlayVoice(u32 sound);
void FUN_003b7b4c(FrameTransitionWork *work);
void FUN_0014e188(UiAnimatedSprite *sprite, u32 group, u32 id,
                  UiResourceParameters *resources, u16 flags, f32 speed);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 restart);

void frameTransitionSetMode(s32 mode)
{
    FrameTransitionWork *work = g_frameTex;
    switch (mode) {
    case 0:
        work->enabled = 0;
        work->frame = 0;
        work->closing = 0;
        work->scaleX = 0.25f;
        work->scaleY = 0.25f;
        work->speed = 20.0f;
        work->flag1040 = 0;
        work->flag1043 = 0;
        work->flag1044 = 0;
        return;
    case 1:
        sysPlayVoice(0x10000be);
        work->enabled = 1;
        work->frame = 0;
        work->closing = 0;
        work->scaleX = 0.25f;
        work->scaleY = 0.25f;
        work->speed = 20.0f;
        g_frameTex->dirty = 1;
        FUN_0014e188(&work->sprites[0], 20, 2000, &work->resources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->sprites[0], 0, 0);
        work->presets = g_frameTransitionDefaultPresets;
        FUN_003b7b4c(work);
        FUN_0014e188(&work->sprites[2], 20, 2000, &work->resources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->sprites[2], 2, 0);
        FUN_0014e188(&work->sprites[3], 20, 2000, &work->resources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->sprites[3], 1, 0);
        return;
    case 2:
        sysPlayVoice(0x10000bf);
        work->frame = 0;
        work->closing = 1;
        work->speed = 7.0f;
        uiSpriteSetImageKeyframe(&work->sprites[3], 0, 1);
        uiSpriteSetImageKeyframe(&work->sprites[2], 0, 1);
        uiSpriteSetImageKeyframe(&work->sprites[0], 0, 1);
        return;
    }
}
}
