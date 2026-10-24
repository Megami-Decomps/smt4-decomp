#include "common.h"

extern "C" {

void _ZN9Obj55aff4C1EPKt(u32 dest, u8 *buffer);
void onlineSockAddrFormatIpv4(u32 source, u8 *buffer, s32 size);

/* Fills a 256-byte buffer from `source` (size 0x80) and hands it to _ZN9Obj55aff4C1EPKt with `dest`. */
void onlineSockAddrToString(u32 dest, u32 source)
{
    u8 buffer[256];

    onlineSockAddrFormatIpv4(source, buffer, 0x80);
    _ZN9Obj55aff4C1EPKt(dest, buffer);
}

} /* extern "C" */
