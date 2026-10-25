/* NON_MATCHING: armcc merges the highlighted draw branches and tail-calls the global speed setter, unlike retail. */
#include "common.h"

struct GlyphDirectory;
struct GlyphDirectoryVtable {
    void *unk00[17];
    void *(*findGlyph)(GlyphDirectory *directory, u16 code); // 0x44
};
struct GlyphDirectory {
    const GlyphDirectoryVtable *vtable; // 0x00
};
struct GlyphRecordTable {
    u32 unk00[2];
    GlyphDirectory *directory; // 0x08
};
extern "C" GlyphRecordTable *recordTableGet(u32 kind);
extern "C" void textDrawString(u32 layer, u32 color, const u8 *text, f32 x, f32 y, f32 scale, f32 depth, f32 opacity);
extern "C" void efctSetSpeed(f32 speed);

// Draw one encoded glyph with the requested highlight, dimming and effect speed.
extern "C" void uiDrawEncodedGlyph(void *, s32 code, s32 x, s32 y, s32 dimmed, s32 highlighted, f32 speed)
{
    if (code == -1)
        return;
    GlyphDirectory *directory = recordTableGet(3)->directory;
    if (!directory->vtable->findGlyph(directory, static_cast<u16>(code)))
        code = static_cast<s32>(0xffff8140);
    f32 opacity = speed;
    u32 color = 0x323232ff;
    if (highlighted)
        color = 0x72e027ff;
    if (dimmed) {
        opacity -= 0.7f;
        if (opacity < 0.0f)
            opacity = 0.0f;
    }
    u8 text[3];
    text[0] = static_cast<u8>(static_cast<u32>(code) >> 8);
    text[1] = static_cast<u8>(code);
    text[2] = 0;
    if (highlighted)
        textDrawString(4, color, text, static_cast<f32>(x), static_cast<f32>(y), 0.0f, 0.0f, opacity);
    else
        textDrawString(3, color, text, static_cast<f32>(x), static_cast<f32>(y), 0.0f, 0.0f, opacity);
    efctSetSpeed(speed);
}
