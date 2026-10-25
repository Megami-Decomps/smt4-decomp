#include "common.h"
#include "util/FUN_0023478c.h"

extern "C" {

int fileSectionGetData(u32 a, int b, int c);
extern u32 fileSlotGetBuffer(u32 id);

void FUN_0023478c(u32 unused, int index)
{
    u32 value = fileSlotGetBuffer(0x41);

    if (index != -1) {
        fileSectionGetData(value, index, 0);
    }
}

} /* extern "C" */
