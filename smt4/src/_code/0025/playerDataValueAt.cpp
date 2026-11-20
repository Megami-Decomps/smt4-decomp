#include "common.h"

extern "C" {

int devilBuildAffinitySlots(u16 *dst, u32 src);
extern u32 gameGetPlayerData(void);

u16 playerDataValueAt(int index)
{
    u32 source = gameGetPlayerData();
    u16 values[20];

    devilBuildAffinitySlots(values, source);
    return values[index] & 0x3ff;
}

} /* extern "C" */
