#include "classes/SelectionState.h"

// Compare the common flags and full extended payload.
extern "C" bool _ZNK9Obj4224d411equalsValueEPK28ExtendedSelectionValueRecord(const ExtendedSelectionValueRecord *self, const ExtendedSelectionValueRecord *other)
{
    return other->active == self->active &&
           other->kind == self->kind &&
           other->value.words.first == self->value.words.first &&
           other->value.words.second == self->value.words.second &&
           other->value.words.third == self->value.words.third &&
           other->fourth == self->fourth &&
           other->fifth == self->fifth &&
           other->sixth == self->sixth &&
           other->seventh == self->seventh;
}
