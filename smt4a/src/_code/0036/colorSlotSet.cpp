#include "shard/Shard0036.h"
#include "code/Code0036_Smt4a.h"

extern "C" {

/* Sets the colour at +4 and keeps a copy of it as a word at +8. */
void colorSlotSet(ColorSlot *slot, u8 r, u8 g, u8 b, u8 a)
{
    slot->color.rgba.r = r;
    slot->color.rgba.g = g;
    slot->color.rgba.b = b;
    slot->color.rgba.a = a;
    slot->copy = slot->color.word;
}

} /* extern "C" */
