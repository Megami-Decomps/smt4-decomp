/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void ARM_common_memcpy4_8(void *p);

void FUN_002ad8a8(u8 *p)
{
    ARM_common_memcpy4_8(p + 12404);
}

}
