#include "common.h"

extern "C" {

int FUN_00241d58(int slot);

void btlEventResetSlots(int base)
{
    int i = 0;
    int entry;

    do {
        entry = base + i * 0x30;
        *(u32 *)(entry + 0x139c) = 0;
        *(u32 *)(entry + 0x1398) = 0xffffffff;
        FUN_00241d58(entry + 0x13a0);
        i = i + 1;
        *(u32 *)(entry + 0x13c4) = 0;
    } while (i < 0x32);
}

} /* extern "C" */
