/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_00184758(void *p, u32 a, u32 b);

void FUN_00184748(u8 *p)
{
    FUN_00184758(p + 732, 3, 0);
}

}
