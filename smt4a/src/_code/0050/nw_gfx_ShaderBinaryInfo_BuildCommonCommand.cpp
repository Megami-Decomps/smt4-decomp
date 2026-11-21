/* NON_MATCHING: layout and stores now follow retail; retail keeps &buffer and the zero in saved registers (r5/r6, one more pushed) and stores the secondary command's zero value before the dual-pass branch. */
#include "gfx/ShaderSafeBuffer.h"

extern "C" {
void nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(ShaderSafeBuffer *buffer, const void *data, u32 size);
void FUN_00503c90(ShaderCommandWork *, ShaderSafeBuffer *, u32, const void *, u32);
void FUN_005043b0(ShaderCommandWork *, ShaderSafeBuffer *);
}

/* Writes the shader's common commands (the geometry-pass switch, then each pass's reset and
 * register block) into destination; returns the number of bytes written. */
extern "C" s32 nw_gfx_ShaderBinaryInfo_BuildCommonCommand(ShaderCommandWork *work, void *destination, u32 size)
{
    ShaderSafeBuffer buffer(destination, size);
    /* Block scope: retail reuses this command's stack slot for FUN_00503c90's outgoing stack argument. */
    {
        ShaderRegisterCommand enable;
        if (work->dualPass > 0)
            enable.value = 1;
        else
            enable.value = 0;
        enable.header = 0x10244;
        nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &enable, sizeof(enable));
    }
    ShaderRegisterCommand reset;
    reset.value = 0;
    reset.header = 0xF02D5;
    nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &reset, sizeof(reset));
    FUN_00503c90(work, &buffer, 0x2D6, work->data, work->count);
    if (work->dualPass > 0) {
        ShaderRegisterCommand resetSecondary;
        resetSecondary.value = 0;
        resetSecondary.header = 0xF02A5;
        nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &resetSecondary, sizeof(resetSecondary));
        FUN_00503c90(work, &buffer, 0x2A6, work->data, work->count);
    }
    FUN_005043b0(work, &buffer);
    return buffer.cursor - buffer.start;
}
