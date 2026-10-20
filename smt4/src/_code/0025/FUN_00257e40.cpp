#include "common.h"

extern "C" {

int FUN_00253d60(u16 *dst, u32 src);
extern u32 gameGetPlayerData(void);

u16 FUN_00257e40(int index)
{
    u32 source = gameGetPlayerData();
    u16 values[20];

    FUN_00253d60(values, source);
    return values[index] >> 10;
}

} /* extern "C" */
