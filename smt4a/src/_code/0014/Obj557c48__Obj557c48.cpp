#include "classes/Obj557c48.h"

/* Clears the table and reserves room for 0x100 words and 0x100 entries. */
Obj557c48::Obj557c48() : unk08(0), unk0C(0), unk10(0), unk14(0), scale(1.0f), unk34(0), unk38(0), unk3C(0)
{
    words.reserve(0x100);
    entries.reserve(0x100);
}
