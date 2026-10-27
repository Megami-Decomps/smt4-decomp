#include "common.h"

extern "C" {

typedef struct Global5b3bf4 {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 value;
} Global5b3bf4;
extern Global5b3bf4 g_gfxSettings;

void nw_gfx_res_ResGraphicsFile_Setup(u32 *slot, u32 allocator, u32 value);
u32 asdMemoryGetDefaultAllocator(void);

/* Stores `value` at 0x7C of the global and registers it with the default allocator. */
void gfxSetupResGraphicsFile(u32 value)
{
    u32 allocator;

    g_gfxSettings.value = value;
    allocator = asdMemoryGetDefaultAllocator();
    nw_gfx_res_ResGraphicsFile_Setup(&g_gfxSettings.value, allocator, g_gfxSettings.value);
}

} /* extern "C" */
