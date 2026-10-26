/* NON_MATCHING: retail keeps the code in r2 on the no-lookup paths and moves the fallback result back with `mov r2,r4`; built keeps it in r4 throughout. */
#include "shard/W6_W6Match7_FontResource.h"
#include "shard/W6_W6Match2_HelpResources.h"

/* The name entry form: two bytes (high, low) per character slot from 0xB0. */
struct NameForm {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u8 glyphs[1][2];
};

extern "C" {

/* Stores a two-byte character code in a slot of the form, substituting the fallback when the font lacks it. */
void nameFormSetCharacter(NameForm *form, s32 index, u32 code)
{
    if (code != 0xFFFFFFFF) {
        if (code != 0) {
            FontGlyphResourceOwner *resource = FUN_0019dc44(3);
            FontGlyphLookup *font = resource->font;
            if (!font->vtable->hasGlyph(font, (u16)code)) {
                code = 0xFFFF8140;
            }
        }
        form->glyphs[index][1] = (u8)code;
        form->glyphs[index][0] = (u8)(code >> 8);
    }
}
}
