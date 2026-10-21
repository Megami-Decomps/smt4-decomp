/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void objClearFlagPair(void *p);

void FUN_002937c8(u8 *p)
{
    objClearFlagPair(p + 16);
}

}
