#include "classes/SelectionState.h"

/* Compare the selection's kind, activity and word value. */
extern "C" bool selectionEqualWordValue(const SelectionValueRecord *object, const SelectionValueRecord *other)
{
    return other->active == object->active && other->kind == object->kind &&
           other->value.words.first == object->value.words.first;
}
