/* NON_MATCHING: default draw-settings initialization scheduling differs from retail. */
#include "shard/W6_W6Match4_GxDrawSettings.h"
#include <stddef.h>

namespace {
/* Local view: pointer-bearing fields cannot be added to the byte-aligned shared unions. */
struct DrawSettingsInitializationView {
    u8 enabled, unk01, unk02, sourceFactor, destinationFactor;
    u8 colorEquation, alphaEquation, blendRed, blendGreen, blendBlue, blendAlpha, unk0B;
    DrawSettingsInitializationView *blendOwner;
    u8 logicEnabled, logicOperation, unk12[2];
    DrawSettingsInitializationView *logicOwner;
    u8 overrideAccess, accessEnabled, unk1A[2];
    f32 colorMinimum, colorMaximum, alphaMinimum, alphaMaximum;
    DrawSettingsInitializationView *accessOwner;
    u8 alphaEnabled, alphaReference, alphaFunction, unk33;
    DrawSettingsInitializationView *alphaOwner;
    u8 stencilEnabled, stencilWrite, unk3A[2], stencilFunction, unk3D[3];
    u32 stencilReference, stencilMask;
    u8 stencilFail, stencilDepthFail, stencilPass, unk4B;
    DrawSettingsInitializationView *stencilOwner;
    u8 colorWriteMask, unk51[3];
    u8 depthEnabled, depthWrite, depthFunction, unk57;
    DrawSettingsInitializationView *depthOwner;
    u8 outputEnabled, outputColor, outputDepth, unk5F;
    DrawSettingsInitializationView *outputOwner;
    f32 polygonOffset;
    u8 polygonOffsetEnabled, unk69[3];
    f32 depthOffset, depthMinimum, depthMaximum;
    u8 depthBits, unk79[3];
    DrawSettingsInitializationView *depthRangeOwner;
};
typedef char DrawSettingsInitializationViewLayout[
    sizeof(DrawSettingsInitializationView) == sizeof(GxDrawSettings) &&
    offsetof(DrawSettingsInitializationView, blendOwner) == 0x0C &&
    offsetof(DrawSettingsInitializationView, depthRangeOwner) == 0x7C ? 1 : -1];
}

/* Initialize the cached GPU draw settings and their owner back-pointers. */
extern "C" void _ZN9SlotStateC1Ev(GxDrawSettings *settings)
{
    DrawSettingsInitializationView *state = reinterpret_cast<DrawSettingsInitializationView *>(settings);
    state->enabled = 0;
    state->unk01 = 0;
    state->unk02 = 0;
    state->sourceFactor = 6;
    state->destinationFactor = 6;
    state->colorEquation = 7;
    state->alphaEquation = 7;
    state->blendRed = 255;
    state->blendGreen = 255;
    state->blendBlue = 255;
    state->blendAlpha = 255;
    state->blendOwner = state;
    state->logicEnabled = 0;
    state->logicOperation = 6;
    state->logicOwner = state;
    state->overrideAccess = 0;
    state->accessEnabled = 1;
    state->colorMinimum = 0.0f;
    state->colorMaximum = 1.0f;
    state->alphaMinimum = 0.0f;
    state->alphaMaximum = 1.0f;
    state->accessOwner = state;
    state->alphaEnabled = 0;
    state->alphaReference = 0;
    state->alphaFunction = 0;
    state->alphaOwner = state;
    state->stencilEnabled = 0;
    state->stencilWrite = 255;
    state->stencilFunction = 1;
    state->stencilReference = 0;
    state->stencilMask = 255;
    state->stencilFail = 0;
    state->stencilDepthFail = 0;
    state->stencilPass = 0;
    state->stencilOwner = state;
    state->colorWriteMask = 15;
    state->depthEnabled = 1;
    state->depthWrite = 1;
    state->depthFunction = 4;
    state->depthOwner = state;
    state->outputEnabled = 1;
    state->outputColor = 1;
    state->outputDepth = 1;
    state->outputOwner = state;
    state->polygonOffset = 0.0f;
    state->polygonOffsetEnabled = 0;
    state->depthOffset = 0.0f;
    state->depthMinimum = 0.0f;
    state->depthMaximum = 1.0f;
    state->depthBits = 24;
    state->depthRangeOwner = state;
}
