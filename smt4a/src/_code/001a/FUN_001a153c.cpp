#include "classes/SndObject24.h"

extern "C" {
s32 FUN_001a153c(SndObject24 *object, u8 value)
{
    SndObject24Params *params = &object->params;
    s8 previous = params->byteValue;
    params->byteValue = value;
    return previous;
}
}
