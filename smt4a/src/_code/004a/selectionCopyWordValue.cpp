#include "classes/SelectionState.h"

/* Copy the word-valued selection state without changing ownership. */
extern "C" void selectionCopyWordValue(SelectionValueRecord *object, const SelectionValueRecord *source)
{
    object->value.words.first = source->value.words.first;
    object->active = source->active;
    object->kind = source->kind;
}
