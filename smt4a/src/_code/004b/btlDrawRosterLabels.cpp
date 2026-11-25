/* NON_MATCHING: the centered coordinates and text color use different load and add schedules. */
#include <stdio.h>
#include "shard/Shard0037.h"
#include "shard/S3UiLookup.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "text/TextDraw.h"
#include "addon/LookupRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

enum {
    ROSTER_DIM_UNSELECTED = 2,
    ROSTER_LABEL_LAYOUT_TABLE = 0x11,
    ROSTER_LABEL_ORIGIN = 0x11,
    ROSTER_LABEL_FIRST_SLOT = 0xAE
};
/* The label format (0x52D838). */
static const char s_labelFormat[] = "%s";

extern "C" {
BattleRosterRecordA *partyGetSlot(u32 id);

/* Centers each active roster member's label in its layout slot, dimming unselected members in mode two. */
void btlDrawRosterLabels(Obj25C *owner, s32 x, s32 y, f32 alpha)
{
    TextureTableEntryIV *origin;
    f32 dimAlpha;
    s32 visible = 0;
    s32 slot;

    origin = asdTMTexTableEntryAt(ROSTER_LABEL_LAYOUT_TABLE, ROSTER_LABEL_ORIGIN);
    dimAlpha = alpha * 0.5f;
    for (slot = 0; slot < 12; ++slot) {
        BattleRosterRecordA *record = partyGetSlot(owner->ids[slot] & 0xFFFF);
        if (record != NULL && (record->label.enabled & 1) != 0) {
            f32 labelAlpha = alpha;
            if (owner->transition.mode == ROSTER_DIM_UNSELECTED && owner->flags[slot] == 0) {
                labelAlpha = dimAlpha;
            }
            char text[64];
            sprintf(text, s_labelFormat, (const char *)table01RecordLookupForContent(record->label.nameId));
            TextureTableEntryIV *placement = asdTMTexTableEntryAt(ROSTER_LABEL_LAYOUT_TABLE, visible + ROSTER_LABEL_FIRST_SLOT);
            s32 width = fontMeasureLineAdvance(text, 1);
            s32 offset = (placement->placement->width - width) / 2;
            s32 drawX = placement->x + offset + x + origin->x;
            s32 drawY = placement->y + y + origin->y;
            textDrawString((f32)drawX, (f32)drawY, 0.0f, 1, 0.0f,
                           (record->label.flags & 2) != 0 ? 0xDC0F14FF : 0xFFFFFFFF, labelAlpha, text);
            ++visible;
        }
    }
}
}
