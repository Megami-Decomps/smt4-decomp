#include "camp/Unite/UniteWork.h"
#include "gamedata/SearchTable.h"
#include "shard/TextureDrawCall.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {
s32 saveOptionIsEnabled(u32 option);
void efctSetSpeed(f32 value);
void texDrawCompositeSprite(u32 layer, u32 group, s32 image, s32 x, s32 y, s32 order);

/* The speed object the option pulse reads sits at 0x13C of the work; its speed is the f32 at +0x20. */
struct OptionSpeedView {
    u8 prefix[0x13C];
    u8 speedObject[0x24];
};

void FUN_0023dcec(UniteWorkA *work, s32 row, s32 x, s32 y, s32 selected,
                  f32 baseScale, f32 factor)
{
    u32 option = dataTableGetEntry24Byte0(work->optionNamesA.ids[row]);
    efctSetSpeed(factor);
    f32 scale = baseScale * factor;
    u32 style;
    if (selected) {
        texDrawCompositeSprite(2, 0x1A, 0x10, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x95, x, y, 0x6A);
        if (saveOptionIsEnabled(option)) {
            efctSetSpeed(vec2GetSpeed((const UiSpriteState *)(&reinterpret_cast<OptionSpeedView *>(work)->speedObject)) * factor);
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x97, x, y, 0x6D);
            efctSetSpeed(scale);
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x91, x, y, 0x6F);
        } else {
            efctSetSpeed(vec2GetSpeed((const UiSpriteState *)(&reinterpret_cast<OptionSpeedView *>(work)->speedObject)));
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x96, x, y, 0x6F);
            efctSetSpeed(scale);
        }
        style = 0xFF;
    } else {
        texDrawCompositeSprite(2, 0x1A, 0x0F, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x90, x, y, 0x6A);
        if (saveOptionIsEnabled(option))
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x91, x, y, 0x6F);
        style = ~0u;
    }
    const char *text = dataTableGetEntry24Member(work->optionNamesA.ids[row]);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x1A, 0xA4);
    textDrawString((f32)(anchor->x + x), (f32)(anchor->y + y), 0.55f, 2, 0.0f,
                 style, scale, text);
}
}
