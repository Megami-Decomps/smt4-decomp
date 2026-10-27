/* NON_MATCHING: retail keeps the code in r2 until the glyph test needs it saved in r4 and merges it back (mov r2,r4) before the two stores (lsr instead of asr for the high byte); armcc here saves it first and shifts arithmetically. */
#include "shard/W6_W6Match3_NameFormState.h"
#include "shard/W6_W6Match7_FontResource.h"

static __inline void nameFormStoreCharacter(NameFormState *form, s32 index, u32 character)
{
    form->text.characters[index].low = (char)character;
    form->text.characters[index].high = (char)(character >> 8);
}

extern "C" {

// Stores the character code at `index` of the name form, substituting the full-width space when the font lacks the glyph.
void nameFormSetCharacter(NameFormState *form, s32 index, u32 character)
{
    if (character != 0xffffffff) {
        if (character != 0) {
            FontGlyphLookup *font = static_cast<FontGlyphResourceOwner *>(recordTableGet(3))->font;
            if (!font->vtable->hasGlyph(font, character & 0xffff)) {
                character = 0xffff8140;
            }
        }
        nameFormStoreCharacter(form, index, character);
    }
}

} /* extern "C" */
