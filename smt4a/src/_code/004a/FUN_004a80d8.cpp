/* NON_MATCHING: first animated-member address is placed directly in r0 rather than passed through r1. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void efctSetSpeed(f32 speed);
void FUN_00493518(TextLayoutContextA *context, s32 sprite, s32 x, s32 y, u32 flags, f32 scale);
f32 vec2GetSpeed(const void *object);

void FUN_004a80d8(PanelTextOwnerPrefixA *owner, s32 row, u32 flags, s32 alternate, f32 scale)
{
    // Layout and animated member data extend beyond the shared text-owner prefix.
    struct AnimatedMember {
        u8 prefix[0x20];
        f32 scale;
    };
    struct PanelDecorationView {
        PanelTextOwnerPrefixA owner;
        u8 unk096[0x32];
        u8 layout[0x14C];
        AnimatedMember first;
        u8 unk238[0x554];
        AnimatedMember last;
    };
    typedef char PanelDecorationOffsets[
        offsetof(PanelDecorationView, layout) == 0xC8 &&
        offsetof(PanelDecorationView, first) == 0x214 &&
        offsetof(PanelDecorationView, last) == 0x78C ? 1 : -1];
    PanelDecorationView *panel = reinterpret_cast<PanelDecorationView *>(owner);
    const PanelTextLayoutEntryPrefixA *position = reinterpret_cast<const PanelTextLayoutEntryPrefixA *>(layoutFindTableEntry(
        reinterpret_cast<TextLayoutContextA *>(panel->layout), row + 0x42F));
    s32 x = position->x;
    s32 y = position->y;
    efctSetSpeed(vec2GetSpeed(&panel->first) * scale);
    FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x426, x, y, flags, scale);
    FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x426, x, y, flags, scale);
    FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x428, x, y, flags, scale);
    efctSetSpeed(scale);
    FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x429, x, y, flags, scale);
    if (alternate) {
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x5CF, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x5D0, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x5D2, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x5D1, x, y, flags, vec2GetSpeed(&panel->last) * scale);
    } else {
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x42A, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x42B, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x5C9, x, y, flags, scale);
        FUN_00493518(reinterpret_cast<TextLayoutContextA *>(panel->layout), 0x42C, x, y, flags, vec2GetSpeed(&panel->last) * scale);
    }
}
}
