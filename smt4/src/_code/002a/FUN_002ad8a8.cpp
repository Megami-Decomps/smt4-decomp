/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_002ad8b4(void *p);

void FUN_002ad8a8(u8 *p)
{
    FUN_002ad8b4(p + 12404);
}

}
