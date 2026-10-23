#ifndef GFX_TEXTURETRANSFERCOMMAND_H
#define GFX_TEXTURETRANSFERCOMMAND_H

#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

union TextureTransferDimensions {
    u32 value;
    struct { u32 width : 16; u32 height : 16; } size;
};
struct TextureTransferCommand {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ const void *source;
    /* 0x08 */ void *destination;
    /* 0x0C */ TextureTransferDimensions output;
    /* 0x10 */ TextureTransferDimensions input;
    /* 0x14 */ struct {
        u32 outputFormat : 3;
        u32 inputFormat : 3;
        u32 options : 5;
        u32 enabled : 1;
        u32 remaining : 20;
    } format;
    /* 0x18 */ u32 unk18;
};
typedef char TextureTransferCommandLayoutCheck[
    sizeof(TextureTransferCommand) == sizeof(AsdCmdRecord) &&
    offsetof(TextureTransferCommand, source) == 4 &&
    offsetof(TextureTransferCommand, destination) == 8 &&
    offsetof(TextureTransferCommand, output) == 0xC &&
    offsetof(TextureTransferCommand, input) == 0x10 &&
    offsetof(TextureTransferCommand, format) == 0x14 ? 1 : -1];

#endif
