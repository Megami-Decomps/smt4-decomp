#include "common.h"

extern "C" {

void onlineStringConstruct(u32 dest, u8 *buffer);
void onlineSockAddrFormatIpv4(u32 source, u8 *buffer, s32 size);

/* Fills a 256-byte buffer from `source` (size 0x80) and hands it to onlineStringConstruct with `dest`. */
void onlineSockAddrToString(u32 dest, u32 source)
{
    u8 buffer[256];

    onlineSockAddrFormatIpv4(source, buffer, 0x80);
    onlineStringConstruct(dest, buffer);
}

} /* extern "C" */
