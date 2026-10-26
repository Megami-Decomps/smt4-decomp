#include "classes/SndObject24.h"

extern "C" {
u16 FUN_00146dc8(SndObject24 *object, u16 value)
{
    SndObject24Params *params = &object->params;
    u16 previous = params->value;
    params->value = value;
    return previous;
}
}
