/* NON_MATCHING: encoded-character byte assembly and signed/unsigned literal sharing differ. */
#include "shard/W6_W6Match3_NameFormState.h"
#include "shard/W6_W6Match7_FontResource.h"


static __inline void nameFormSetCharacter(NameFormState *form, s8 index, u16 character)
{
    FontGlyphLookup *font = reinterpret_cast<FontGlyphResourceOwner *>(recordTableGet(3))->font;
    font->vtable->hasGlyph(font, (u16)character);
    form->text.characters[index].high = (s8)((u16)character >> 8);
    form->text.characters[index].low = (s8)character;
}

// Replace empty or fallback character slots with the full-width space glyph.
extern "C" void FUN_003983dc(NameFormState *form)
{
    s32 length = form->text.length;
    if (length > 0) {
        for (s32 i = length - 1; i >= 0; --i) {
            if (nameFormGetCharacter(form, (s8)i) == 0 ||
                nameFormGetCharacter(form, (s8)i) == (s16)0x8140) {
                nameFormSetCharacter(form, (s8)i, (s16)0x8140);
            }
        }
    }
}
