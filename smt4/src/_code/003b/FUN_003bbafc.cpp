#include "common.h"
#include "code/Code003b.h"

extern "C" {

int fileSlotFree(int id);

void FUN_003bbafc(void)
{
    fileSlotFree(0x33);
}

} /* extern "C" */
