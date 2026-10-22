/* NON_MATCHING: aggregate command construction copies constant data and changes the SafeBuffer stack layout. */
#include "common.h"

struct ShaderCommandWork {
    u8 prefix[0x90];
    u8 data[0x200];
    u32 count;
    s32 dualPass;
};
struct ShaderSafeBuffer {
    u8 *start;
    u8 *end;
    u8 *cursor;
    u8 failed;
};
struct ShaderRegisterCommand {
    u32 value;
    u32 header;
};
extern "C" {
void nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(ShaderSafeBuffer *, const void *, u32);
void FUN_00225e9c(ShaderCommandWork *, ShaderSafeBuffer *, u32, const void *, u32);
void FUN_003e2878(ShaderCommandWork *, ShaderSafeBuffer *);
}

extern "C" s32 FUN_003e2264(ShaderCommandWork *work, void *destination, u32 size)
{
    ShaderSafeBuffer buffer = {static_cast<u8 *>(destination),
                               static_cast<u8 *>(destination) + size,
                               static_cast<u8 *>(destination), 0};
    ShaderRegisterCommand enable = {work->dualPass > 0, 0x10244};
    nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &enable, sizeof(enable));
    ShaderRegisterCommand reset = {0, 0xF02D5};
    nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &reset, sizeof(reset));
    FUN_00225e9c(work, &buffer, 0x2D6, work->data, work->count);
    if (work->dualPass > 0) {
        ShaderRegisterCommand resetSecondary = {0, 0xF02A5};
        nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&buffer, &resetSecondary, sizeof(resetSecondary));
        FUN_00225e9c(work, &buffer, 0x2A6, work->data, work->count);
    }
    FUN_003e2878(work, &buffer);
    return buffer.end - buffer.cursor;
}
