/* NON_MATCHING: compiler preserves an extra r8 in the element loop. */
#include "shard/Shard0036.h"

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

void FUN_003fe298(ShaderColorState *state, u32 index, RgbaWord color);

/* Calls FUN_003fe298 on every element of the list. */
void FUN_003fd8dc(ElementList *list, u32 index, RgbaWord color)
{
    Element *element = list->elements;
    Element *end = element + list->count;

    for (; element != end; element++) {
        FUN_003fe298(reinterpret_cast<ShaderColorState *>(element), index, color);
    }
}

} /* extern "C" */
