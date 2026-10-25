#include "common.h"
#include "quest_center/qcUtility.h"

extern "C" {

int fileSlotLoad(int id);

void FUN_00385af4(u32 *arg0)
{
    fileSlotLoad(0x28);
}

} /* extern "C" */
