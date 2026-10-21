/* NON_MATCHING: instruction selection/order differs: retail ldr r1, [pc, #40]; compiler ldr r1, [pc, #36]. */
#include "common.h"

struct CommandTemplate {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u32 mode;
};

extern "C" {

extern CommandTemplate DAT_00471dc8;
extern u8 *g_commandBufferCursor;
extern u8 *nw_gfx_internal_FastWordCopyAsm_78(u8 *output, const void *commands);

/* Appends the configured command template and reports its size. */
u32 FUN_0015bd68(u32 enabled)
{
    DAT_00471dc8.mode = enabled != 0 ? 2 : 0;
    g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_78(g_commandBufferCursor, &DAT_00471dc8);
    return 0x138;
}

} /* extern "C" */
