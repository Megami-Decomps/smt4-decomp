#ifndef MOBICLIP_CTRL_VX_DECODER_H
#define MOBICLIP_CTRL_VX_DECODER_H
#include "common.h"
#include <stddef.h>

struct VxDecoderState {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 width;
    /* 0x008 */ u32 height;
    /* 0x00C */ u8 unk00C[0x30];
    /* 0x03C */ const u8 *tables[3];
    /* 0x048 */ u32 decodedFrames;
    /* 0x04C */ u8 unk04C[0x624];
};
struct VxDecoder {
    /* 0x00 */ VxDecoderState *state;
    /* 0x04 */ void **buffers;
    /* 0x08 */ u32 bufferCount;
    /* 0x0C */ u32 currentBuffer;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 format;
    /* 0x18 */ u32 stride;
    /* 0x1C */ u32 mode;
};
typedef char VxDecoderStateLayoutCheck[
    sizeof(VxDecoderState) == 0x670 &&
    offsetof(VxDecoderState, width) == 4 && offsetof(VxDecoderState, height) == 8 &&
    offsetof(VxDecoderState, tables) == 0x3C &&
    offsetof(VxDecoderState, decodedFrames) == 0x48 ? 1 : -1];
typedef char VxDecoderLayoutCheck[sizeof(VxDecoder) == 0x20 &&
    offsetof(VxDecoder, format) == 0x14 && offsetof(VxDecoder, stride) == 0x18 &&
    offsetof(VxDecoder, mode) == 0x1C ? 1 : -1];
#endif
