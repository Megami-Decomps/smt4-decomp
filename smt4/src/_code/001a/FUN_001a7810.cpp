/* NON_MATCHING: branch structure, getter and text coordinates now match; armcc still fuses the 0.5*x+0.5 pulse into a vmla (retail: vmul/vadd with one constant register) and schedules the background-call argument setup around the else-if branch differently. */
#include "ui/PartyPanel.h"
#include "shard/TextureDrawCall.h"
#include "shard/S3UiLookup.h"
#include <stddef.h>

extern "C" {
void FUN_002bf380(s32 layer, s32 bank, s32 sprite, s32 x, s32 y, s32 depth);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *sprite);
const u16 *dataTable24Sub0GetRecordS90(u32 id);
const UiTextMetrics *asdTMTexTableEntryAt(u32 bank, u32 entry);
s32 fontMeasureLineAdvance(const u16 *text, s32 font);
void textDrawString(s32 layer, u32 color, const u16 *text,
                  f32 x, f32 y, f32 scale, f32 angle, f32 speed);

// Draw a highlighted/ordinary selector background, availability icon and centered label.
void FUN_001a7810(void *owner, u32 id, s32 x, s32 y, s32 highlighted, s32 alternate, f32 speed)
{
    struct LabelOwnerView { u8 prefix[0x13C]; PartyMember effect; };
    typedef char LabelOwnerSpeedOffset[offsetof(LabelOwnerView, effect.effectSpeed) == 0x15C ? 1 : -1];
    u32 color;
    if (highlighted != 0) {
        FUN_002bf380(2, 0x24, 11, x, y, 101);
        color = 0xFFFFFFFF;
        efctSetSpeed(vec2GetSpeed(&static_cast<LabelOwnerView *>(owner)->effect) * 0.5f + 0.5f);
    } else if (alternate != 0) {
        FUN_002bf380(2, 0x24, 10, x, y, 101);
        color = 0xFF;
    } else {
        FUN_002bf380(2, 0x24, 9, x, y, 101);
        color = 0xFF;
    }
    if (alternate != 0)
        FUN_002bf288(2, 0x24, 0xA0, x, y, 111);
    else
        FUN_002bf288(2, 0x24, 0x9C, x, y, 111);
    efctSetSpeed(speed);
    const u16 *text = dataTable24Sub0GetRecordS90(id);
    const UiTextMetrics *position = asdTMTexTableEntryAt(0x24, 0xA4);
    s32 textWidth = fontMeasureLineAdvance(text, 2);
    s32 centered = (position->dimensions[0] - textWidth) / 2;
    s32 textY = position->y + y;
    s32 textX = position->x + (centered + x);
    textDrawString(2, color, text, (f32)textX, (f32)textY, 0.55f, 0.0f, speed);
}
}
