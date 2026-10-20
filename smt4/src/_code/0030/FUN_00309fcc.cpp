#include "common.h"

extern "C" {

int FUN_002ac838(u32 a, u8 *buffer, int size);
int FUN_002bf694(u8 *buffer, u32 value);
int FUN_002c3940(u8 *buffer, int size);
int FUN_0035eabc(u32 value);

void FUN_00309fcc(u32 a, u32 b)
{
    u8 buffer[260];

    FUN_002c3940(buffer, 0x100);
    FUN_002bf694(buffer, a);
    FUN_002ac838(b, buffer, 0x100);
    FUN_0035eabc(b);
}

} /* extern "C" */
