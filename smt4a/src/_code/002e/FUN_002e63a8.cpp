/* NON_MATCHING: Retail movs r4, r1 differs from recovered mov r0, r2. */
#include "common.h"

struct StreamLocalView {
    u8 unk00[0x04];       // 0x00
    u32 unk04;            // 0x04
    u8 unk08[0x04];       // 0x08
    u32 unk0C;            // 0x0C
    u32 unk10;            // 0x10
    s32 unk14;            // 0x14
    u8 unk18[0x04];       // 0x18
    u32 unk1C;            // 0x1C
    u8 unk20[0x2C];       // 0x20
    u32 unk4C;            // 0x4C
};

extern "C" {
void FUN_002e61e8(StreamLocalView* stream);
s32 returnMinusOne2(u32 openArgument, u32 flags);
s32 FUN_00102e7c(StreamLocalView* stream, s32 offset, s32 origin);

// Parse the open mode and initialize the stream after opening successfully.
StreamLocalView* FUN_002e63a8(u32 openArgument, const char* mode,
                            StreamLocalView* stream)
{
    FUN_002e61e8(stream);

    u32 streamFlags;
    u32 openFlags;
    switch (*mode++) {
    case 'r':
        streamFlags = 1;
        openFlags = 0;
        break;
    case 'w':
        streamFlags = 2;
        openFlags = 4;
        break;
    case 'a':
        streamFlags = 0x8002;
        openFlags = 8;
        break;
    default:
        return 0;
    }

    for (;;) {
        switch (*mode++) {
        case '+':
            streamFlags |= 3;
            openFlags |= 2;
            continue;
        case 'b':
            streamFlags |= 4;
            openFlags |= 1;
            continue;
        }
        break;
    }
    if (mode[-1] == 't') {
        openFlags |= 0x10;
    }

    s32 handle = returnMinusOne2(openArgument, openFlags);
    if (handle == -1) {
        return 0;
    }

    stream->unk10 = 0;
    stream->unk04 = 0;
    stream->unk0C = streamFlags;
    stream->unk1C = 0x200;
    stream->unk14 = handle;
    if (openFlags & 8) {
        FUN_00102e7c(stream, 0, 2);
    }
    stream->unk4C |= 1;
    return stream;
}
}
