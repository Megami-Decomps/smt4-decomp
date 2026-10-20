#include "common.h"

extern "C" {

s32 zlib_inflateInit2_(u32 stream, s32 windowBits, u32 version, u32 streamSize);

/* inflateInit2_ with the default 15-bit window. */
void inflateInitDefault(u32 stream, u32 version, u32 streamSize)
{
    zlib_inflateInit2_(stream, 0xF, version, streamSize);
}

} /* extern "C" */
