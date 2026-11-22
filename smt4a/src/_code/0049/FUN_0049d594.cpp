/* NON_MATCHING: explicit states restore the retail jump table and named selection values restore field-load order; outgoing image arguments and speed/layer scheduling still differ. */
#include "ui/UiSpriteApi.h"
#include "shard/TextureDrawCall.h"

extern "C" {
void efctSetSpeed(f32 scale);
void uiDrawListScrollBar(void *controller, s32 x, s32 y, u32 texture,
    s32 firstImage, s32 secondImage, s32 thirdImage, s32 fourthImage,
    s32 fifthImage, s32 sixthImage, s32 seventhImage,
    s32 selected, s32 first, s32 second, u32 flags, s32 mode);
void howToDrawRows(void *work, s32 x, s32 y, f32 scale);

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
    f32 scale = vec2GetSpeed(&work->sprite);
    efctSetSpeed(scale);
    for (s32 index = 0; index < 5; ++index)
        texDrawTableEntryAtStoredOrigin(2, 0x33, index + 0x39, x, y, index + 0xbf);
    for (s32 index = 0; index < 9; ++index) {
        texDrawTableEntryAtStoredOrigin(2, 0x33, index * 2 + 0x3e, x, y, index + 0xc4);
        texDrawTableEntryAtStoredOrigin(2, 0x33, index * 2 + 0x3f, x, y, index + 0xc5);
    }
    efctSetSpeed(1.0f);
    howToDrawRows(work, x, y, scale);
    efctSetSpeed(scale);
    s32 first = work->first;
    s32 second = work->second;
    s32 selected = work->selected;
    uiDrawListScrollBar(work->controller, x, y, 0x33,
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56,
        selected, first, second, 0x6a, 0);
    efctSetSpeed(1.0f);
    switch (work->state) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    case 4:
    case 5:
    case 6:
        efctSetSpeed(scale);
        texDrawTableEntryAtStoredOrigin(2, 0x33, 0x7e, x, y, 0xc9);
        break;
    }
    efctSetSpeed(1.0f);
    efctSetSpeed(1.0f);
}
}
