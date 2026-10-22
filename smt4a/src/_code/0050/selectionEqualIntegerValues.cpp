#include "classes/SelectionState.h"

/* Compare the selection identity and its three integer values. */
extern "C" bool selectionEqualIntegerValues(const SelectionValueRecord *object, const SelectionValueRecord *other)
{
    return other->active == object->active && other->kind == object->kind &&
           other->value.packed.flags == object->value.packed.flags &&
           other->value.words.second == object->value.words.second &&
           other->value.words.third == object->value.words.third;
}
