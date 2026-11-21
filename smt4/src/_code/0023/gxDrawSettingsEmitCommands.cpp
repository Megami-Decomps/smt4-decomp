#include "shard/W6_W6Match4_GxDrawSettings.h"
#include "shard/W6_W6Match8_GpuDepth.h"
#include "AsdSDK/Source/Sys/Gx/GxStencilState.h"
#include <stddef.h>

struct PipelineDepthBiasView {
    f32 factor;
    u8 offsetEnabled;
    u8 unk05[3];
    f32 bias;
    f32 nearDepth;
    f32 farDepth;
    u8 precision;
    u8 unk15[3];
};
// The canonical settings retain byte-aligned padding.  Embedded depth/stencil
// objects and owner pointers therefore use a local aligned view of that block.
struct PipelineCommandStateView {
    u8 blend[0x10];
    u8 logicEnabled;
    u8 logicOperation;
    u8 unk12[6];
    GpuDepthState depthRange;
    u8 alphaEnabled;
    u8 alphaReference;
    u8 alphaFunction;
    u8 unk33[5];
    GxStencilState stencil;
    u8 colorWriteMask;
    u8 unk51[3];
    u8 depthEnabled;
    u8 depthWrite;
    u8 depthFunction;
    u8 unk57;
    GxDrawSettings *depthOwner;
    u8 cullEnabled;
    u8 winding;
    u8 face;
    u8 unk5F[5];
    PipelineDepthBiasView depthBias;
    GxDrawSettings *owner;
};
typedef char PipelineCommandStateViewOffsets[sizeof(PipelineCommandStateView) == 0x80 &&
    offsetof(PipelineCommandStateView, depthRange) == 0x18 &&
    offsetof(PipelineCommandStateView, stencil) == 0x38 &&
    offsetof(PipelineCommandStateView, depthOwner) == 0x58 &&
    offsetof(PipelineCommandStateView, depthBias) == 0x64 &&
    offsetof(PipelineCommandStateView, owner) == 0x7C ? 1 : -1];

extern "C" {
u32 *FUN_003dfa2c(const void *blend, u32 *commands, s32 includeTarget);
u32 *gpuEmitDepthBufferCommands(const GpuDepthState *depth, u32 *commands, s32 first, s32 enabled);
u32 *gpuDepthRangeEmitCommands(const PipelineDepthBiasView *bias, u32 *commands);
u32 *FUN_002265ac(GxDrawSettings **owner, u32 *commands, s32 reset);

/* The body of Apocalypse's FUN_00500f3c without its access-mask refresh: appends the depth test and the
 * colour/depth write mask register (0x107). The mask comes from the settings the depth state belongs to. */
static __inline u32 *gxEmitColorDepthMask(const PipelineCommandStateView *state, u32 *commands)
{
    *commands++ = (state->depthEnabled != 0) | (state->depthFunction << 4) |
        ((state->depthOwner->buffers.colorWriteMask & 1) ? 0x100 : 0) |
        ((state->depthOwner->buffers.colorWriteMask & 2) ? 0x200 : 0) |
        ((state->depthOwner->buffers.colorWriteMask & 4) ? 0x400 : 0) |
        ((state->depthOwner->buffers.colorWriteMask & 8) ? 0x800 : 0) | (state->depthWrite ? 0x1000 : 0);
    *commands++ = 0xF0107;
    return commands;
}

/* Appends the draw settings' fragment-operation commands: cull mode, blend, logic op, depth range, alpha and
 * stencil tests, depth and colour masks and depth bias, then the framebuffer access masks. */
u32 *gxDrawSettingsEmitCommands(GxDrawSettings *settings, u32 *commands, s32 reset)
{
    PipelineCommandStateView *state = (PipelineCommandStateView *)settings;
    u32 cull = 0;
    if (state->cullEnabled) {
        if (state->winding == 0) {
            cull = state->face == 0 ? 2 : 1;
        } else if (state->winding == 1) {
            cull = state->face == 1 ? 2 : 1;
        } else {
            cull = 1;
        }
    }
    *commands++ = cull;
    *commands++ = 0xF0040;
    commands = FUN_003dfa2c(state->blend, commands, 0);
    if (state->logicEnabled) {
        *commands++ = 0xE40000;
        *commands++ = 0x30100;
        *commands++ = 0x1010000;
        *commands++ = 0xF0101;
        *commands++ = state->logicOperation;
        *commands++ = 0xF0102;
    }
    commands = gpuEmitDepthBufferCommands(&state->depthRange, commands, 0, 1);
    *commands++ = (state->alphaEnabled != 0) | ((u32)state->alphaFunction << 4) |
        ((u32)state->alphaReference << 8);
    *commands++ = 0x30104;
    *commands++ = (state->stencil.enabled != 0) | ((u32)state->stencil.function << 4) |
        ((u32)state->stencil.writeMask << 8) | (state->stencil.reference << 16) |
        (state->stencil.readMask << 24);
    *commands++ = 0xF0105;
    *commands++ = ((u32)state->stencil.depthFailOperation << 4) |
        ((u32)state->stencil.passOperation << 8) | state->stencil.failOperation;
    *commands++ = 0xF0106;
    commands = gxEmitColorDepthMask(state, commands);
    commands = gpuDepthRangeEmitCommands(&state->depthBias, commands);
    return FUN_002265ac(&state->owner, commands, reset);
}
}
