#include "classes/SelectionState.h"

/* These objects compare by activity and kind, not their payload. */
extern "C" bool selectionEqualIdentity(const SelectionValueRecord *object, const SelectionValueRecord *other)
{
    return other->active == object->active && other->kind == object->kind;
}
