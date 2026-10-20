#include "common.h"

extern "C" {

void FUN_002eeb98(void *object, u32 field, u32 a, u32 b);

/* Calls FUN_002eeb98 with the object's first word. */
void FUN_00107100(u32 *object, u32 a, u32 b)
{
    FUN_002eeb98(object, object[0], a, b);
}

} /* extern "C" */
