/* NON_MATCHING: branch structure, getter, text coordinates and the background calls now match; armcc still fuses the 0.5*x+0.5 pulse into a vmla (retail: vmul/vadd with one constant register). */
#include "ui/PartyPanel.h"
#include "text/TextDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/S3UiLookup.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void texDrawCompositeSprite(s32 layer, s32 bank, s32 sprite, s32 x, s32 y, s32 depth);
void efctSetSpeed(f32 speed);
const u16 *dataTable24Sub0GetRecordS90(u32 id);
s32 fontMeasureLineAdvance(const u16 *text, s32 font);

// Draw a highlighted/ordinary selector background, availability icon and centered label.
void FUN_001a7810(void *owner, u32 id, s32 x, s32 y, s32 highlighted, s32 alternate, f32 speed)
{
    struct LabelOwnerView { u8 prefix[0x13C]; PartyMember effect; };
    typedef char LabelOwnerSpeedOffset[offsetof(LabelOwnerView, effect.effectSpeed) == 0x15C ? 1 : -1];
    u32 color;
    if (highlighted != 0) {
        texDrawCompositeSprite(2, 0x24, 11, x, y, 101);
        color = 0xFFFFFFFF;
        efctSetSpeed(vec2GetSpeed((const UiSpriteState *)(&static_cast<LabelOwnerView *>(owner)->effect)) * 0.5f + 0.5f);
    } else if (alternate != 0) {
        texDrawCompositeSprite(2, 0x24, 10, x, y, 101);
        color = 0xFF;
    } else {
        texDrawCompositeSprite(2, 0x24, 9, x, y, 101);
        color = 0xFF;
    }
    if (alternate != 0)
        texDrawTableEntryAtStoredOrigin(2, 0x24, 0xA0, x, y, 111);
    else
        texDrawTableEntryAtStoredOrigin(2, 0x24, 0x9C, x, y, 111);
    efctSetSpeed(speed);
    const u16 *text = dataTable24Sub0GetRecordS90(id);
    const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x24, 0xA4);
    s32 textWidth = fontMeasureLineAdvance(text, 2);
    s32 centered = (position->placement->width - textWidth) / 2;
    f32 textX = position->x + (centered + x);
    f32 textY = position->y + y;
    textDrawString(textX, textY, 0.55f, 2, 0.0f, color, speed, (const char *)text);
}
}
