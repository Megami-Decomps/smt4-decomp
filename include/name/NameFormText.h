#ifndef NAME_NAMEFORMTEXT_H
#define NAME_NAMEFORMTEXT_H

#include "common.h"
#include <stddef.h>

struct NameFormCharacter {
    s8 high;
    s8 low;
};
struct NameFormTextFields {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 length;
    /* 0x13 */ u8 unk13[0x8d];
    /* 0xA0 */ NameFormCharacter characters[18];
};
typedef char NameFormTextLayoutCheck[sizeof(NameFormCharacter) == 2 &&
    offsetof(NameFormTextFields, length) == 0x12 &&
    offsetof(NameFormTextFields, characters) == 0xa0 && sizeof(NameFormTextFields) == 0xc4 ? 1 : -1];

template <class Form>
static __inline s16 nameFormGetCharacter(const Form *form, s8 index)
{
    if (index < 0)
        return (s16)0x8140;
    u16 highPart = (u16)((u8)form->text.characters[index].high << 8);
    s8 lowPart = form->text.characters[index].low;
    return (s16)(highPart + (u8)lowPart);
}

#endif
