#include "common.h"
#include "code/Code002c.h"

extern "C" {

extern struct {
    u8 unk00[0x10];
    u8 unk10;
    u8 unk11[3];
} g_screenFadeSlots[];

u8 pairedAvailabilityGetState(int index)
{
    return g_screenFadeSlots[index].unk10;
}

} /* extern "C" */
