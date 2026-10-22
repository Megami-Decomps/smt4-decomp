#include "classes/SelectionState.h"

/* Decode a two-byte selection value; retain the first field on short input. */
extern "C" s32 selectionReadBytePair(SelectionValueRecord *object, const u8 *source, u32 size)
{
    if (size == 0)
        return -1;
    object->index = *source++;
    if (--size == 0)
        return -1;
    object->value.words.first = *source;
    return 2;
}
