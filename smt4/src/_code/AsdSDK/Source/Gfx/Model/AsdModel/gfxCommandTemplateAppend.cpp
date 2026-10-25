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
u32 gfxCommandTemplateAppend(u32 enabled)
{
    if (enabled != 0) {
        DAT_00471dc8.mode = 2;
    } else {
        DAT_00471dc8.mode = 0;
    }
    g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_78(g_commandBufferCursor, &DAT_00471dc8);
    return 0x138;
}

} /* extern "C" */
