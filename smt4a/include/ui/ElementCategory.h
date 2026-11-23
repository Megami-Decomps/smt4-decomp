#ifndef UI_ELEMENT_CATEGORY_H
#define UI_ELEMENT_CATEGORY_H

#include "code/Code0019.h"

/* Gets the message group used for an element's label and portrait. */
static __inline s32 elementMessageGroup(u32 category)
{
    s32 id;
    switch (category) {
    case 0: id = 0xae; break;
    case 1: id = 0xb2; break;
    case 2: id = 0xb0; break;
    case 3: id = 0xb1; break;
    case 4: id = 0xb3; break;
    case 5: id = 5; break;
    case 6: id = 0xba; break;
    case 7: id = 0xb9; break;
    case 8: id = 0xaf; break;
    case 9: id = 0xbb; break;
    default: id = -1; break;
    }
    return id;
}

/* Maps a category to the demon entry used by its portrait and display label. */
static __inline u16 elementDemonId(u32 category)
{
    s32 slot = elementMessageGroup(category);
    if (slot < 0) {
        return 0;
    }
    if (category == 9) {
        return 0x29d;
    }
    return dataTable10FindValue((u16)slot);
}

#endif
