#include "common.h"

extern "C" {

int fileSlotLoad(int id);

void FUN_00385aec(u32 *control)
{
    fileSlotLoad(0x26);
}

} /* extern "C" */
