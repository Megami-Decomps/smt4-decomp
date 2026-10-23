/* NON_MATCHING: state switch uses comparisons instead of the retail jump table; sprite-scale getter and layer scheduling also differ. */
#include "ui/UiSpriteState.h"

extern "C" {
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);
void efctSetSpeed(f32 scale);
void FUN_001835b4(u32 type, u32 texture, s32 image, s32 x, s32 y, s32 layer);
void FUN_00344cd0(void *controller, s32 x, s32 y, u32 texture,
    s32 firstImage, s32 secondImage, s32 thirdImage, s32 fourthImage,
    s32 fifthImage, s32 sixthImage, s32 seventhImage,
    s32 selected, s32 first, s32 second, u32 flags, s32 mode);
void FUN_0049d938(void *work, s32 x, s32 y, f32 scale);

void FUN_0049d594(void *panel)
{
    struct ListPanelDrawView {
        u32 task;
        u8 state;
        u8 unk005[0x187];
        u8 controller[0x86];
        s16 first;
        s16 second;
        s16 selected;
        u8 unk218[0x24];
        UiSpriteState sprite;
    };
    ListPanelDrawView *work = static_cast<ListPanelDrawView *>(panel);
    s32 x = vec2GetXInt(&work->sprite);
    s32 y = vec2GetYInt(&work->sprite);
    f32 scale = work->sprite.unk20;
    efctSetSpeed(scale);
    for (s32 index = 0; index < 5; ++index)
        FUN_001835b4(2, 0x33, index + 0x39, x, y, index + 0xbf);
    for (s32 index = 0; index < 9; ++index) {
        FUN_001835b4(2, 0x33, index * 2 + 0x3e, x, y, index + 0xc4);
        FUN_001835b4(2, 0x33, index * 2 + 0x3f, x, y, index + 0xc5);
    }
    efctSetSpeed(1.0f);
    FUN_0049d938(work, x, y, scale);
    efctSetSpeed(scale);
    FUN_00344cd0(work->controller, x, y, 0x33,
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56,
        work->selected, work->first, work->second, 0x6a, 0);
    efctSetSpeed(1.0f);
    switch (work->state) {
    case 4:
    case 5:
    case 6:
        efctSetSpeed(scale);
        FUN_001835b4(2, 0x33, 0x7e, x, y, 0xc9);
        break;
    }
    efctSetSpeed(1.0f);
    efctSetSpeed(1.0f);
}
}
