#include "classes/SelectionState.h"

// Compare the common flags and the single-word payload.
extern "C" bool _ZNK9Obj4224f811equalsValueEPK20SelectionValueRecord(const SelectionValueRecord *self, const SelectionValueRecord *other)
{
    return other->active == self->active &&
           other->kind == self->kind &&
           other->value.words.first == self->value.words.first;
}
