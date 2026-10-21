#include "common.h"

extern "C" {

struct Status { u8 unk000[0x5cc]; u16 values[8]; };
extern Status *g_statusDown;
void *rt_memcpy(void *destination, const void *source, u32 size);

void statusDownCopyValues(const u16 *values, s32 count)
{
    if (count <= 8) {
        Status *status = g_statusDown;
        for (s32 i = 0; i < 8; i++) {
            status->values[i] = 0;
        }
        rt_memcpy(status->values, values, count * sizeof(u16));
    }
}

} /* extern "C" */
