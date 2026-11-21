#include "common.h"

extern "C" {

/* Address of the sub block at +0x6fc of the object. */
int renderCtxGetBuiltinCamera(int obj)
{
    return obj + 0x6fc;
}

} /* extern "C" */
