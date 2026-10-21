#include "common.h"

// Append the fixed GPU state-reset commands, optionally including the initial reset packet.
extern "C" u32* asdGxAppendStateReset(u32* commands, s32 reset)
{
    if (reset != 0) {
        *commands++ = 0;
        *commands++ = 0x00200080;
        *commands++ = 0;
        *commands++ = 0;
    }
    *commands++ = 0;
    *commands++ = 0x000f008f;
    *commands++ = 1;
    *commands++ = 0x000f01c6;
    *commands++ = 0;
    *commands++ = 0x000f01c2;
    return commands;
}
