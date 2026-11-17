#include "common.h"
#include "effect/ScalarParameter.h"

extern "C" {

/* Virtual slot: resets the scalar parameter to 0. */
void _ZN9Obj557b3812refreshRectsEv(ScalarParameter *self)
{
    self->unk04 = 0;
    self->value = 0.0f;
}

} /* extern "C" */
