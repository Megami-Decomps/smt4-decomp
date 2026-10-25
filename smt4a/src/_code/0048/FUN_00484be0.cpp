/* NON_MATCHING: encoded-character byte assembly and signed/unsigned literal sharing differ. */
#include "shard/W6_W6Match3_NameFormStateA.h"
#include "shard/W6_W6Match7_FontResource.h"
#include "shard/FUN_0019dc44.h"


static __inline void nameFormSetCharacter(NameFormStateA *form, s8 index, s16 character)
{
    FontGlyphLookup *font = FUN_0019dc44(3)->font;
    font->vtable->hasGlyph(font, (u16)character);
    form->text.characters[index].high = (s8)((u16)character >> 8);
    form->text.characters[index].low = (s8)character;
}

// Replace empty or fallback character slots with the full-width space glyph.
extern "C" void FUN_00484be0(NameFormStateA *form)
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
