/* NON_MATCHING: register allocation differs (retail keeps `values` in r0 and the state pointer in r3, the build moves `values` to r3 first). */
/* Copies `count` (at most 8) halfwords into the global state's buffer at +0x4B2 after clearing the 16 bytes. */
#include "common.h"

extern "C" {

typedef struct State0044e190 {
    /* 0x000 */ u8 unk000[0x4b2];
    /* 0x4B2 */ u16 buffer[8];
} State0044e190;

extern State0044e190 *g_statusDown;

void *rt_memcpy(void *dest, const void *src, u32 size);

void FUN_002efe98(const u16 *values, int count)
{
    if (count <= 8) {
        ((u32 *)g_statusDown->buffer)[0] = 0;
        ((u32 *)g_statusDown->buffer)[1] = 0;
        ((u32 *)g_statusDown->buffer)[2] = 0;
        ((u32 *)g_statusDown->buffer)[3] = 0;
        rt_memcpy(g_statusDown->buffer, values, count * 2);
    }
}

}
