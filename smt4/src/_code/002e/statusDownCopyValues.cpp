/* Copies `count` (at most 8) ids into the status screen's pending ids after clearing them. */
#include "status/StatusDown.h"

extern "C" {



void *__aeabi_memcpy(void *dest, const void *src, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)

void statusDownCopyValues(const u16 *values, s32 count)
{
    if (count <= 8) {
        StatusDownState *status = g_statusDown;
        for (s32 i = 0; i < 8; i++) {
            status->pending[i] = 0;
        }
        __aeabi_memcpy(status->pending, values, count * sizeof(u16));
    }
}

}
