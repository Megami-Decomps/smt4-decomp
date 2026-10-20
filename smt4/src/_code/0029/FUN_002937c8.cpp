/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_002937d0(void *p);

void FUN_002937c8(u8 *p)
{
    FUN_002937d0(p + 16);
}

}
