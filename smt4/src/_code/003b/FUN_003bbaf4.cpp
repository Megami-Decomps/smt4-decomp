#include "common.h"

extern "C" {

int fileSlotLoad(int id);

void FUN_003bbaf4(u32 *object)
{
    fileSlotLoad(0x33);
}

} /* extern "C" */
