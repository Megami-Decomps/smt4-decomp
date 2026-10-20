/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_002c4040(void *p);

void FUN_002c4038(u8 *p)
{
    FUN_002c4040(p + 4);
}

}
