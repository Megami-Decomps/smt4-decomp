/* NON_MATCHING: the main path now writes through a post-incremented cursor like retail; the flush and override packets still lower to different stm groupings, and the build keeps an extra saved register (r7). */
#include "shard/W6_W6Match4_GxDrawSettings.h"

static __inline bool blendFactorReadsDestination(u8 factor)
{
    return factor == 4 || factor == 5 || factor == 8 || factor == 9 || factor == 14;
}

static __inline bool framebufferNeedsColorRead(const GxDrawSettings *settings)
{
    if (settings->buffers.colorWriteMask == 0) {
        return false;
    }
    if (settings->buffers.colorWriteMask != 15) {
        return true;
    }
    if (settings->enabled &&
        (settings->fragment.colorEquation != 0 ||
         settings->fragment.alphaEquation != 0 ||
         blendFactorReadsDestination(settings->fragment.sourceFactor) ||
         blendFactorReadsDestination(settings->fragment.destinationFactor))) {
        return true;
    }
    if (!settings->fragment.logicEnabled) {
        return false;
    }
    u8 operation = settings->fragment.logicOperation;
    return operation != 0 && operation != 3 && operation != 4 && operation != 5;
}

// Append framebuffer access masks, optionally flushing and invalidating first.
extern "C" u32 *gxEmitFramebufferAccessMasks(u32 *settingsWord, u32 *commands, s32 flush)
{
    if (flush) {
        commands[0] = 1;
        commands[1] = 0xf0111;
        commands[2] = 1;
        commands[3] = 0xf0110;
        commands += 4;
    }
    const GxDrawSettings *settings = reinterpret_cast<const GxDrawSettings *>(*settingsWord);
    if (settings->fragment.overrideAccess) {
        commands[0] = 15;
        commands[1] = 0x10112;
        commands[2] = 15;
        commands[3] = 0x10113;
        commands[4] = 0;
        commands[5] = 0x10114;
        commands[6] = 0;
        commands[7] = 0x10115;
        return commands + 8;
    }

    *commands++ = framebufferNeedsColorRead(settings) ? 15 : 0;
    *commands++ = 0x10112;
    settings = reinterpret_cast<const GxDrawSettings *>(*settingsWord);
    *commands++ = settings->buffers.colorWriteMask != 0 ? 15 : 0;
    *commands++ = 0x10113;
    settings = reinterpret_cast<const GxDrawSettings *>(*settingsWord);
    u32 depthStencilRead = 0;
    u32 depthStencilWrite = 0;
    if (settings->depthEnabled) {
        if (settings->depthWrite) {
            depthStencilRead = 2;
            depthStencilWrite = 2;
        } else if (settings->buffers.colorWriteMask) {
            depthStencilRead = 2;
        }
    }
    if (settings->buffers.stencilEnabled) {
        if (settings->buffers.stencilWrite) {
            depthStencilRead |= 1;
            depthStencilWrite |= 1;
        } else if (settings->buffers.colorWriteMask) {
            depthStencilRead |= 1;
        }
    }
    *commands++ = depthStencilRead;
    *commands++ = 0x10114;
    *commands++ = depthStencilWrite;
    *commands++ = 0x10115;
    return commands;
}
