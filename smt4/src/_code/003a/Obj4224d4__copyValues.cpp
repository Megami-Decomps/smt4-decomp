#include "classes/SelectionState.h"

// Copy the extended payload and common flags without replacing the vtable.
extern "C" void _ZN9Obj4224d410copyValuesEPK28ExtendedSelectionValueRecord(ExtendedSelectionValueRecord *destination, const ExtendedSelectionValueRecord *source)
{
    destination->value.words.second = source->value.words.second;
    destination->value.words.third = source->value.words.third;
    destination->fourth = source->fourth;
    destination->fifth = source->fifth;
    destination->sixth = source->sixth;
    destination->seventh = source->seventh;
    destination->value.words.first = source->value.words.first;
    destination->active = source->active;
    destination->kind = source->kind;
}
