/* NON_MATCHING: Saved float registers, prologue scheduling and centered-coordinate load/add ordering differ. */
#include "shard/Shard0037.h"
#include "shard/S3UiLookup.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "text/TextDraw.h"

struct BattleRosterLabelMode {
    u8 unk00[4];
    u8 mode;
};
extern "C" {
extern const char DAT_0052d838[];
UiTextMetrics *asdTMTexTableEntryAt(u32 texture, u32 frame);
BattleRosterRecordA *FUN_003e4d68(u32 id);
const char *FUN_00180114(u16 id);
void textFormatBuffer(char *output, const char *format, ...);
s32 fontMeasureLineAdvance(const char *text, s32 font);

/* Centers each active roster member's label in its layout slot, dimming unselected members in mode two. */
void FUN_004bdce0(Obj25C *owner, s32 x, s32 y, f32 alpha)
{
    UiTextMetrics *origin = asdTMTexTableEntryAt(0x11, 0x11);
    f32 dimAlpha = alpha * 0.5f;
    s32 visible = 0;
    for (s32 slot = 0; slot < 12; ++slot) {
        BattleRosterRecordA *record = FUN_003e4d68(owner->ids[slot] & 0xFFFF);
        if (record != NULL && (record->label.enabled & 1) != 0) {
            f32 labelAlpha = alpha;
            if (((BattleRosterLabelMode *)owner)->mode == 2 && owner->flags[slot] == 0) {
                labelAlpha = dimAlpha;
            }
            char text[64];
            textFormatBuffer(text, DAT_0052d838, FUN_00180114(record->label.nameId));
            UiTextMetrics *placement = asdTMTexTableEntryAt(0x11, visible + 0xAE);
            s32 width = fontMeasureLineAdvance(text, 1);
            s32 labelX = origin->x + (placement->x + (placement->dimensions[0] - width) / 2 + x);
            s32 labelY = placement->y + origin->y + y;
            u32 color = 0xFFFFFFFF;
            if ((record->label.flags & 2) != 0) {
                color = 0xDC0F14FF;
            }
            textDrawString(1, color, text, (f32)labelX, (f32)labelY, 0.0f, 0.0f, labelAlpha);
            ++visible;
        }
    }
}
}
