#include "common.h"

// Tests a bounded UTF-16 string for an ASCII or full-width at sign.
extern "C" u32 textContainsAtSign(void* context, const u16* text, s32 length)
{
    for (s32 i = 0; i < length; ++i) {
        u32 character = text[i];
        if (character == 0) {
            return 0;
        }
        if (character == 0x40 || character == 0xff20) {
            return 1;
        }
    }
    return 0;
}
