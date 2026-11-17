#include "common.h"
#include "effect/ScalarParameter.h"

extern "C" {

/* Virtual slot: resets the scalar parameter to 1. */
void _ZN9Obj42088012refreshRectsEv(ScalarParameter *self)
{
    self->unk04 = 0;
    self->value = 1.0f;
}

} /* extern "C" */
