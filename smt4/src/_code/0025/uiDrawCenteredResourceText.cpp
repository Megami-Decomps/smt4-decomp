#include "shard/S3UiLookup.h"

extern "C" {
void FUN_002bf380(u32 screen, u32 resource, u32 kind, s32 x, s32 y, u32 mode);
UiTextMetrics *asdTMTexTableEntryAt(u32 resource, u32 kind);
void asdTextSetBaseColor(UiTextObject *text, u32 color);
void FUN_002598f0(UiTextObject *text, s32 x, s32 y, u32 flags, f32 opacity);
}

/* Place the UI frame and horizontally center its text inside the resource width. */
extern "C" void uiDrawCenteredResourceText(UiCenteredText *owner, const UiTextPlacement *placement, s32 x, s32 y)
{
    if (owner == NULL) {
        return;
    }
    FUN_002bf380(2, 57, 14, placement->x + x, placement->y + y, 111);
    UiTextMetrics *metrics = asdTMTexTableEntryAt(57, 158);
    s32 inset = (metrics->dimensions[0] - owner->width) / 2;
    asdTextSetBaseColor(owner->text, 0xFFFFFF00);
    FUN_002598f0(owner->text, metrics->x + placement->x + inset + x,
                 placement->y + metrics->y + y, 112, placement->opacity);
}
