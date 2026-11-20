#include "common.h"

extern "C" {

int devilBuildAffinitySlots(u16 *dst, u32 src);
extern u32 gameGetPlayerData(void);

u16 playerGetAffinitySlotState(int index)
{
    u32 source = gameGetPlayerData();
    u16 values[20];

    devilBuildAffinitySlots(values, source);
    return values[index] >> 10;
}

} /* extern "C" */
