#include "classes/SelectionState.h"

/* Copy the packed selection payload, preserving its owner and parameter. */
extern "C" void selectionCopyPackedValue(SelectionValueRecord *object, const SelectionValueRecord *source)
{
    object->value.packed.first = source->value.packed.first;
    object->value.packed.second = source->value.packed.second;
    object->value.packed.third = source->value.packed.third;
    object->value.packed.fourth = source->value.packed.fourth;
    object->value.packed.fifth = source->value.packed.fifth;
    object->value.packed.sixth = source->value.packed.sixth;
    object->value.packed.flags = source->value.packed.flags;
    object->active = source->active;
    object->kind = source->kind;
}
