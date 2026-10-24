/* NON_MATCHING: retail keeps the output pointer in a stack slot next to the decoded character (str r0,[sp,#4]) and reloads it; built keeps it in r7. */
#include "common.h"

extern "C" {

s32 FUN_001008c8(u16 *wc, u8 byte, s32 state);
s32 *__aeabi_errno_addr(void);
s32 libcLocaleGetCategory(s32 locale, s32 category);

// mbrtowc: decode one multibyte character from `s`; -2 when more bytes are needed, -1 on a bad sequence.
s32 FUN_002c618c(u16 *pwc, const u8 *s, s32 n, s32 state)
{
    u16 wc;
    s32 consumed = 0;
    if (s == NULL) {
        s = (const u8 *)"";
        n = 1;
        pwc = NULL;
    }
    if (state == 0) {
        state = libcLocaleGetCategory(0, 5);
    }
    while (n-- != 0) {
        s32 result = FUN_001008c8(&wc, *s++, state);
        consumed++;
        if (result == -1) {
            *__aeabi_errno_addr() = 4;
            return -1;
        }
        if (result != -2) {
            if (pwc != NULL) {
                *pwc = wc;
            }
            return wc == 0 ? 0 : consumed;
        }
    }
    return -2;
}

} /* extern "C" */
