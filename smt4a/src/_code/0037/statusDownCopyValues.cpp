#include "status/StatusDownA.h"

extern "C" {

void *__aeabi_memcpy(void *destination, const void *source, u32 size);

void statusDownCopyValues(const u16 *values, s32 count)
{
    if (count <= 8) {
        StatusDownStateA *status = g_statusDown;
        for (s32 i = 0; i < 8; i++) {
            status->pending[i] = 0;
        }
        __aeabi_memcpy(status->pending, values, count * sizeof(u16));
    }
}

} /* extern "C" */
