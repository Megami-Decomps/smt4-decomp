#include "classes/SelectionState.h"

// Copy the three-word payload and the common record flags.
extern "C" void _ZN9Obj4224b010copyValuesEPK20SelectionValueRecord(SelectionValueRecord *destination, const SelectionValueRecord *source)
{
    destination->value.words.second = source->value.words.second;
    destination->value.words.third = source->value.words.third;
    destination->value.words.first = source->value.words.first;
    destination->active = source->active;
    destination->kind = source->kind;
}
