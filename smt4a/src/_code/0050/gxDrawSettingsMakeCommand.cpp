/* NON_MATCHING: cull-mode branching, packet-store grouping, constant synthesis and scratch-register allocation differ; an optimization flag may explain them. */
#include "shard/W6_W6Match4_GxDrawSettings.h"
#include "shard/W6_W6Match8_GpuDepth.h"

struct GpuDepthViewport {
    f32 scale;
    u8 offsetEnabled;
    u8 unk05[3];
    f32 offset;
    f32 nearDepth;
    f32 farDepth;
    s8 depthBits;
    u8 unk15[3];
};
// Word/pointer fields not exposed by the existing byte-oriented settings view.
struct GxDrawPacketFields {
    u8 unk00[0x18];
    GpuDepthState depth;
    u8 unk30[0xc];
    u8 stencilFunction;
    u8 unk3d[3];
    u32 stencilReference;
    u32 stencilMask;
    u8 stencilFail;
    u8 depthFail;
    u8 depthPass;
    u8 unk4b[0xd];
    GxDrawSettings *depthOwner;
    u8 unk5c;
    u8 frontFace;
    u8 cullSide;
    u8 unk5f[5];
    GpuDepthViewport viewport;
    u32 colorState;
};

extern "C" {
u32 *FUN_00500d38(GxDrawSettings *, u32 *, s32);
u32 *gpuEmitDepthBufferCommands(const GpuDepthState *, u32 *, s32, s32);
u32 *FUN_00177abc(const GpuDepthViewport *, u32 *);
u32 *gxEmitFramebufferAccessMasks(u32 *, u32 *, s32);

u32 *gxDrawSettingsMakeCommand(GxDrawSettings *settings, u32 *commands, s32 reset)
{
    GxDrawPacketFields *packet = reinterpret_cast<GxDrawPacketFields *>(settings);
    if (reset) {
        *commands++ = 1;
        *commands++ = 0x000f0111;
        *commands++ = 1;
        *commands++ = 0x000f0110;
    }
    u32 outputMode = 0;
    if (settings->outputEnabled) {
        if (packet->frontFace) {
            if (packet->frontFace == 1 && packet->cullSide == 1)
                outputMode = 2;
            else
                outputMode = 1;
        } else if (packet->cullSide == 0) {
            outputMode = 2;
        } else {
            outputMode = 1;
        }
    }
    *commands++ = outputMode;
    *commands++ = 0x000f0040;
    commands = FUN_00500d38(settings, commands, 0);
    if (settings->fragment.logicEnabled) {
        *commands++ = 0x00e40000;
        *commands++ = 0x00030100;
        *commands++ = 0x01010000;
        *commands++ = 0x000f0101;
        *commands++ = settings->fragment.logicOperation;
        *commands++ = 0x000f0102;
    }
    commands = gpuEmitDepthBufferCommands(&packet->depth, commands, 0, 1);
    *commands++ = (settings->alphaEnabled != 0) |
                  (settings->alphaFunction << 4) | (settings->alphaReference << 8);
    *commands++ = 0x00030104;
    *commands++ = (settings->buffers.stencilEnabled != 0) |
                  (packet->stencilFunction << 4) | (settings->buffers.stencilWrite << 8) |
                  (packet->stencilReference << 16) | (packet->stencilMask << 24);
    *commands++ = 0x000f0105;
    *commands++ = packet->stencilFail | (packet->depthFail << 4) | (packet->depthPass << 8);
    *commands++ = 0x000f0106;
    u8 colorMask = packet->depthOwner->buffers.colorWriteMask;
    *commands++ = (settings->depthEnabled != 0) | (settings->depthFunction << 4) |
                  ((colorMask & 1) ? 0x100 : 0) | ((colorMask & 2) ? 0x200 : 0) |
                  ((colorMask & 4) ? 0x400 : 0) | ((colorMask & 8) ? 0x800 : 0) |
                  (settings->depthWrite ? 0x1000 : 0);
    *commands++ = 0x000f0107;
    commands = FUN_00177abc(&packet->viewport, commands);
    return gxEmitFramebufferAccessMasks(&packet->colorState, commands, 0);
}
}
