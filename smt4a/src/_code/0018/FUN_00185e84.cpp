/* NON_MATCHING: sprite-selection value stays in r2 rather than retail's r0, changing x/y saved-register allocation. */
#include "gamedata/Table04Record.h"
#include "shard/S3UiLookup.h"

extern "C" {
bool idIsAbove400(u32 id);
u32 requestKindToId(u32 kind);
void FUN_0017ffa8(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, s32 depth);
s32 padGetMappedValue(u32 id);
s32 dataTableCountRecordStages(u32 id);
void drawSetColorFromRGBA8(u32 color);
const UiTextMetrics *asdTMTexTableEntryAt(u32 bank, u32 sprite);
void FUN_00180310(u32 layer, s32 x, s32 y, u32 flags, u32 font, s32 depth, const char *format, ...);
void FUN_00183bb0(void);

// Draw a categorized skill icon and its clamped, color-coded upgrade badge.
void FUN_00185e84(u32 id, s32 x, s32 y, s32 depth, s32 showUpgrade, s32 adjustment)
{
    u32 sprite;
    if (id == (u32)-1)
        sprite = 0x3EF;
    else if (id == (u32)-2)
        sprite = 0x3F0;
    else if (id == (u32)-3)
        sprite = 0x3F6;
    else {
        if (id == (u32)-99)
            return;
        if (idIsAbove400(id))
            sprite = 0x419;
        else {
            const Table04Record *record = dataTable04FindById(id);
            sprite = record == NULL ? 1000 : requestKindToId(record->properties & 0x1F);
        }
    }
    FUN_0017ffa8(2, 0xB, sprite, x, y, depth);
    if (showUpgrade != 0) {
        u32 upgrade = (padGetMappedValue(id) + adjustment) & 0xFF;
        s32 maximum = dataTableCountRecordStages(id);
        if ((s32)upgrade > maximum)
            upgrade = maximum & 0xFF;
        if (upgrade > 1) {
            drawSetColorFromRGBA8((s32)upgrade >= maximum ? 0xFBEB39FF : 0x72E027FF);
            const UiTextMetrics *position = asdTMTexTableEntryAt(0xB, 0x402);
            FUN_00180310(2, position->x + x, position->y + y, 0, 1, depth + 1, "+");
            position = asdTMTexTableEntryAt(0xB, 0x401);
            FUN_00180310(2, position->x + x, position->y + y, 0, 1, depth + 1, "%d", upgrade - 1);
            FUN_00183bb0();
        }
    }
}
}
