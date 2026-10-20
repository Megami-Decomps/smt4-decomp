#include "common.h"

extern "C" {

typedef struct Element {
    /* 0x000 */ u8 unk000[0x158];
} Element; /* 0x158 */

typedef struct ElementList {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ Element *elements;
    /* 0x110 */ s32 count;
} ElementList;

void FUN_003fe298(Element *element, u32 arg0, u32 arg1);

/* Calls FUN_003fe298 on every element of the list. */
void FUN_003fd8dc(ElementList *list, u32 arg0, u32 arg1)
{
    Element *element = list->elements;
    Element *end = element + list->count;

    for (; element != end; element++) {
        FUN_003fe298(element, arg0, arg1);
    }
}

} /* extern "C" */
