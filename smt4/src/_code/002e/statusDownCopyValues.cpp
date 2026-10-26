/* Copies `count` (at most 8) halfwords into the global state's buffer at +0x4B2 after clearing it. */
#include "common.h"

extern "C" {

typedef struct State0044e190 {
    /* 0x000 */ u8 unk000[0x4b2];
    /* 0x4B2 */ u16 values[8];
} State0044e190;

extern State0044e190 *g_statusDown;

void *rt_memcpy(void *dest, const void *src, u32 size);

void statusDownCopyValues(const u16 *values, s32 count)
{
    if (count <= 8) {
        State0044e190 *status = g_statusDown;
        for (s32 i = 0; i < 8; i++) {
            status->values[i] = 0;
        }
        rt_memcpy(status->values, values, count * sizeof(u16));
    }
}

}
