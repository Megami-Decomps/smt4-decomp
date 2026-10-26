/* Tail call into the function that follows. */
#include "common.h"
#include "code/Code002a.h"

extern "C" {

void fileSlotFree(u32);

void FUN_002a46d0(void)
{
    fileSlotFree(39);
}

}
