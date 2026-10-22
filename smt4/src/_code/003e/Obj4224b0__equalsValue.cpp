#include "classes/SelectionState.h"

// Compare the common flags and three-word payload.
extern "C" bool _ZNK9Obj4224b011equalsValueEPK20SelectionValueRecord(const SelectionValueRecord *self, const SelectionValueRecord *other)
{
    return other->active == self->active &&
           other->kind == self->kind &&
           other->value.words.first == self->value.words.first &&
           other->value.words.second == self->value.words.second &&
           other->value.words.third == self->value.words.third;
}
