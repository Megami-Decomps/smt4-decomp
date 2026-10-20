/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void mtx44Copy(void *dst, const void *src);

void FUN_002bfe20(void *dst, u8 *src)
{
    mtx44Copy(dst, src + 1328);
}

}
