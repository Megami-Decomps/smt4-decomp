#include "common.h"

namespace { struct CursorState { u32 begin; u32 count; }; }

extern "C" {
/* Reads or updates the requested state. */
extern CursorState g_modelCommandBuffer;
void gxGetCommandListParameter(u32 parameter, u32 *value);
void cursorResetFromParam(void)
{
    u32 cursor;
    gxGetCommandListParameter(0x208, &cursor);
    g_modelCommandBuffer.begin = cursor;
    g_modelCommandBuffer.count = 0;
}
}
