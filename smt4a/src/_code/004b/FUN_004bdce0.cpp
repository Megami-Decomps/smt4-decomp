/* NON_MATCHING: the visible counter's zeroing is scheduled after the first call, and the centred coordinates' loads and adds are ordered differently. */
#include <stdio.h>
#include "shard/Shard0037.h"
#include "shard/S3UiLookup.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "text/TextDraw.h"
#include "addon/LookupRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct BattleRosterLabelMode {
    u8 unk00[4];
    u8 mode;
};
/* The label format (0x52D838). */
static const char s_labelFormat[] = "%s";

extern "C" {
BattleRosterRecordA *partyGetSlot(u32 id);
s32 fontMeasureLineAdvance(const char *text, s32 font);

/* Centers each active roster member's label in its layout slot, dimming unselected members in mode two. */
void FUN_004bdce0(Obj25C *owner, s32 x, s32 y, f32 alpha)
{
    TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x11, 0x11);
    f32 dimAlpha = alpha * 0.5f;
    s32 visible = 0;
    for (s32 slot = 0; slot < 12; ++slot) {
        BattleRosterRecordA *record = partyGetSlot(owner->ids[slot] & 0xFFFF);
        if (record != NULL && (record->label.enabled & 1) != 0) {
            f32 labelAlpha = alpha;
            if (((BattleRosterLabelMode *)owner)->mode == 2 && owner->flags[slot] == 0) {
                labelAlpha = dimAlpha;
            }
            char text[64];
            sprintf(text, s_labelFormat, reinterpret_cast<const char *>(FUN_00180114(record->label.nameId)));
            TextureTableEntryIV *placement = asdTMTexTableEntryAt(0x11, visible + 0xAE);
            s32 width = fontMeasureLineAdvance(text, 1);
            s32 offset = (placement->placement->width - width) / 2;
            textDrawString((f32)(origin->x + (placement->x + offset + x)), (f32)(placement->y + origin->y + y), 0.0f, 1, 0.0f,
                           (record->label.flags & 2) != 0 ? 0xDC0F14FF : 0xFFFFFFFF, labelAlpha, text);
            ++visible;
        }
    }
}
}
