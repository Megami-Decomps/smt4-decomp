/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void __ARM_common_memcpy4_8(void *p);

void btlUiCopyIdList(u8 *p)
{
    __ARM_common_memcpy4_8(p + 12404);
}

}
