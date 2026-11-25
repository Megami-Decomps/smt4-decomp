/* NON_MATCHING: 17 lines: retail keeps the code in r2 until the glyph test needs it saved in r4 and copies it
 * back (mov r2, r4) before the two stores; the build saves it first. Copying the code into a separate
 * `renderable` local and assigning it back gives IDENTICAL (w93-s10), but that temporary only steers registers. */
#include "shard/W6_W6Match3_NameFormState.h"
#include "shard/W6_W6Match7_FontResource.h"

/* Stores the character, using the full-width space if the font lacks the glyph. */
extern "C" void nameFormSetCharacter(NameFormState *form, s32 index, s32 character)
{
    if (character == NAME_FORM_NO_CHARACTER) {
        return;
    }
    if (character != 0) {
        FontGlyphResourceOwner *resource = (FontGlyphResourceOwner *)recordTableGet(NAME_FORM_FONT_TABLE);
        FontGlyphLookup *font = resource->font;
        if (!font->vtable->hasGlyph(font, (u16)character)) {
            character = (s16)NAME_FORM_FULLWIDTH_SPACE;
        }
    }
    form->text.characters[index].low = (s8)character;
    form->text.characters[index].high = (s8)((character & 0xff00) >> 8);
}
