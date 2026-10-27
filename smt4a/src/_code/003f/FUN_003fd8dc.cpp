/* NON_MATCHING: retail pushes {r4-r7, lr} (no alignment pad) because FUN_003fe298 was compiled in the same multifile run; body matches. */
#include "common.h"

struct ShaderColorState;

extern "C" {

typedef struct Element {
    /* 0x000 */ u8 unk000[0x158];
} Element; /* 0x158 */

typedef struct ElementList {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ Element *elements;
    /* 0x110 */ s32 count;
} ElementList;

void FUN_003fe298(ShaderColorState *state, u32 index, u32 color);

/* Calls FUN_003fe298 on every element of the list. */
void FUN_003fd8dc(ElementList *list, u32 index, u32 color)
{
    Element *element = list->elements;
    Element *end = element + list->count;

    for (; element != end; element++) {
        FUN_003fe298(reinterpret_cast<ShaderColorState *>(element), index, color);
    }
}

} /* extern "C" */
