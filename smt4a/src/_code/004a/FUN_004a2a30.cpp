/* NON_MATCHING: layered panel opacity, draw arguments and caption table addressing differ. */
#include "common.h"
#include "util/DrawTextAtRelativePosition.h"
#include "shard/W9_W9Match8_WorkRecords.h"

namespace {
struct ProfileEntryDrawView {
    u8 unk000[0xC8];
    u8 layout[0x761];
    s8 style;
    u8 unk82A[0x26];
    s32 fade;
    u8 unk854[0xC];
    u8 disabled;
};
struct ProfileCaptionTable { s32 y[10]; char labels[10][32]; };
}
extern "C" {
extern const u32 DAT_005e1ca8[], DAT_005e1cd0[], DAT_005e1e88[];
extern const s32 DAT_005e1cf8[];
extern const ProfileCaptionTable DAT_005e1d20;
s32 FUN_002a4b28(u16 textId);
void FUN_004a80d8(ProfileEntryDrawView *panel, s32 entry, s32 fade, s32 style, f32 scale);
void efctSetSpeed(f32 scale);
void FUN_004a7a50(ProfileEntryDrawView *panel, s32 enabled, u32 textId, s32 entry, s32 alternate, s32 fade);
void FUN_004a7cb0(ProfileEntryDrawView *panel, u32 textId, s32 entry, s32 alternate, s32 fade, f32 scale);
void FUN_004a7ba0(ProfileEntryDrawView *panel, u32 textId, s32 entry, s32 alternate, s32 fade, f32 scale);
void FUN_004a7814(ProfileEntryDrawView *panel, u32 first, s32 entry, s32 alternate, s32 fade, u32 second);
void drawSetColorFromRGBA8(u32 color);
void FUN_002e7284(TextLayoutContextA *context, s32 x, s32 y, s32 fade, const char *text);
void FUN_00183bb0(void);

void FUN_004a2a30(ProfileEntryDrawView *panel, s32 entry, s32 alternate, u32 textId, f32 scale)
{
    s32 fade = panel->fade;
    if (alternate != 0)
        fade++;
    f32 multiplier = FUN_002a4b28(static_cast<u16>(textId)) != 0 ? 1.0f : 0.5f;
    if (alternate != 0)
        FUN_004a80d8(panel, entry, fade, panel->style, scale);
    f32 entryScale = scale * multiplier;
    s32 enabled = panel->disabled == 0;
    efctSetSpeed(entryScale);
    FUN_004a7a50(panel, enabled, textId, entry, alternate, fade);
    FUN_004a7cb0(panel, textId, entry, alternate, fade, entryScale);
    FUN_004a7ba0(panel, textId, entry, alternate, fade, entryScale);
    efctSetSpeed(entryScale);
    FUN_004a7814(panel, DAT_005e1ca8[entry], entry, alternate, fade, DAT_005e1cd0[entry]);
    drawSetColorFromRGBA8(DAT_005e1e88[entry]);
    TextLayoutContextA *context = reinterpret_cast<TextLayoutContextA *>(panel->layout);
    if (FUN_002a4b28(static_cast<u16>(textId)) != 0)
        FUN_002e7284(context, DAT_005e1cf8[entry], DAT_005e1d20.y[entry], fade, DAT_005e1d20.labels[entry]);
    else
        drawTextAtRelativePosition(context, 0, DAT_005e1cf8[entry], DAT_005e1d20.y[entry],
            0, 0, 0xFFFFFFFF, fade, "     ???");
    FUN_00183bb0();
    efctSetSpeed(1.0f);
}
}
