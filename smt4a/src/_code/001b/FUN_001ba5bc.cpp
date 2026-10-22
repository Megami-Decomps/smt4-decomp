/* NON_MATCHING: control-field preloading needs callee-saved registers and the final pointer update differs. */
#include "shard/S2GrTexture.h"
#include <stddef.h>

extern "C" {
// Emit both texture-unit control writes, optionally preceded by a masked padding command.
u32* FUN_001ba5bc(const GrTexture* texture, u32* command, u32 addPadding)
{
    // Procedural-unit controls lie beyond the shared texture prefix's recovered end.
    struct ControlView {
        u8 unk00[0x1C];
        u8 primaryType;
        u8 unk1D[0x3B];
        u8 secondaryEnabled;
        u8 unk59[0x23];
        u8 tertiaryEnabled;
        u8 separateTertiaryCoordinates;
        u8 unk7E[0x22];
        u8 proceduralEnabled;
        u8 proceduralCoordinates;
    };
    typedef char ControlOffsets[offsetof(ControlView, primaryType) == 0x1C &&
        offsetof(ControlView, secondaryEnabled) == 0x58 &&
        offsetof(ControlView, tertiaryEnabled) == 0x7C &&
        offsetof(ControlView, separateTertiaryCoordinates) == 0x7D &&
        offsetof(ControlView, proceduralEnabled) == 0xA0 &&
        offsetof(ControlView, proceduralCoordinates) == 0xA1 ? 1 : -1];
    const ControlView* control = reinterpret_cast<const ControlView*>(texture);
    if (addPadding != 0) {
        *command++ = 0;
        *command++ = 0x00200080;
        *command++ = 0;
        *command++ = 0;
    }
    *command++ = u32(control->primaryType != 5) |
        (u32(control->secondaryEnabled != 0) << 1) |
        (u32(control->tertiaryEnabled != 0) << 2) |
        (u32(control->proceduralCoordinates) << 8) |
        (u32(control->proceduralEnabled != 0) << 10) |
        (u32(control->separateTertiaryCoordinates != 0) << 13) | 0x1000;
    *command++ = 0x000F0080;
    *command++ = u32(control->primaryType != 5) |
        (u32(control->secondaryEnabled != 0) << 1) |
        (u32(control->tertiaryEnabled != 0) << 2) |
        (u32(control->proceduralCoordinates) << 8) |
        (u32(control->proceduralEnabled != 0) << 10) |
        (u32(control->separateTertiaryCoordinates != 0) << 13) | 0x11000;
    *command++ = 0x000F0080;
    return command;
}
}
