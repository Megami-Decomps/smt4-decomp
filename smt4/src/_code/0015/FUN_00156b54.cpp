/* NON_MATCHING: omitted retail's discarded empty element loops; range reset and indexed-object cleanup remain explicit and readable. */
#include "util/IndexedRangeReset.h"

extern "C" void FUN_00156b54(IndexedRangeResetState *state)
{
    state->firstEnd = state->firstBegin;
    state->secondEnd = state->secondBegin;
    s32 count = state->entriesEnd - state->entriesBegin;
    IndexedRangeEntry *entry = state->entriesBegin;
    for (s32 index = 0; index < count; ++index, ++entry) {
        IndexedRangeObject *object = entry->object;
        object->firstPosition = 0;
        object->secondPosition = 0;
        object->firstEnd = object->firstBegin;
        object->secondEnd = object->secondBegin;
        entry->id = -1;
    }
}
