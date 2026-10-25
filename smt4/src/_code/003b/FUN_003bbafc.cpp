#include "common.h"
#include "util/FUN_003bbafc.h"

extern "C" {

int fileSlotFree(int id);

void FUN_003bbafc(void)
{
    fileSlotFree(0x33);
}

} /* extern "C" */
