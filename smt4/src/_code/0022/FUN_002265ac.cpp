/* NON_MATCHING: command words and all earlier instructions match; only the last four word stores/return-pointer update use different addressing modes and scheduling. */
#include "shard/W6_W6Match4_GxDrawSettings.h"

// Emit color/depth/stencil buffer access masks, optionally resetting the access registers first.
extern "C" u32 *FUN_002265ac(GxDrawSettings **owner, u32 *commands, s32 reset)
{
    if (reset) {
        *commands++ = 1;
        *commands++ = 0xf0111;
        *commands++ = 1;
        *commands++ = 0xf0110;
    }
    const GxDrawSettings *settings = *owner;
    if (settings->fragment.overrideAccess) {
        *commands++ = 15;
        *commands++ = 0x10112;
        *commands++ = 15;
        *commands++ = 0x10113;
        *commands++ = 0;
        *commands++ = 0x10114;
        *commands++ = 0;
        *commands++ = 0x10115;
        return commands;
    }
    *commands++ = settings->buffers.colorWriteMask &&
                  (settings->buffers.colorWriteMask != 15 || settings->enabled || settings->fragment.logicEnabled) ? 15 : 0;
    *commands++ = 0x10112;
    *commands++ = (*owner)->buffers.colorWriteMask ? 15 : 0;
    *commands++ = 0x10113;
    settings = *owner;
    u32 readMask = 0;
    u32 writeMask = 0;
    if (settings->depthEnabled) {
        if (settings->depthWrite) {
            readMask = 2;
            writeMask = 2;
        } else if (settings->buffers.colorWriteMask) {
            readMask = 2;
        }
    }
    if (settings->buffers.stencilEnabled) {
        if (settings->buffers.stencilWrite) {
            readMask |= 1;
            writeMask |= 1;
        } else if (settings->buffers.colorWriteMask) {
            readMask |= 1;
        }
    }
    *commands++ = readMask;
    *commands++ = 0x10114;
    *commands++ = writeMask;
    *commands++ = 0x10115;
    return commands;
}
