/* NON_MATCHING: libc wcstombs; needs unit cflags `--cpu=5TE -O2 -Ospace` (the `movs rd, rm` Thumb moves and the buffer/saved-state frame order only come out that way); with them four instruction pairs (argument setup around FUN_001009a2/rt_memcpy and the first moves) are still scheduled differently */
#include "common.h"

extern "C" {

struct LocaleState {
    u32 first;
    u32 second;
};

LocaleState *libcLocaleGetCategory(u32 locale, u32 category);
s32 FUN_001009a2(u8 *out, u16 wide, LocaleState *state);
void *rt_memcpy(void *dst, const void *src, u32 count);

/* Converts the zero-terminated wide string `src` into multibyte characters in `dst` (at most `limit` bytes); returns the byte count excluding the terminator, or -1 on an unconvertible character. */
s32 FUN_0026281c(u8 *dst, const u16 *src, u32 limit)
{
    s32 total = 0;
    s32 count;
    u8 buffer[8];
    LocaleState saved;
    LocaleState *state = libcLocaleGetCategory(0, 3);

    for (;;) {
        if (state != NULL) {
            saved = *state;
        }
        count = FUN_001009a2(buffer, *src, state);
        if (count == -1) {
            return count;
        }
        if (dst != NULL) {
            if ((u32)(count + total) > limit) {
                if (state != NULL) {
                    *state = saved;
                }
                break;
            }
            rt_memcpy(dst + total, buffer, count);
        }
        total += count;
        if (*src == 0) {
            total--;
            break;
        }
        src++;
    }
    return total;
}

} /* extern "C" */
