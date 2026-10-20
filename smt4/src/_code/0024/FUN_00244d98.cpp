#include "common.h"

extern "C" {

int FUN_002c2968(u32 a, u32 b);

extern u32 DAT_00464b7c[];
extern u32 DAT_00464b84[];

void FUN_00244d98(int index)
{
    FUN_002c2968(DAT_00464b7c[index], DAT_00464b84[index]);
}

} /* extern "C" */
