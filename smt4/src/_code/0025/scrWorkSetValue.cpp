#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x20];
    u32 *words;
} g_scrContext;

/* Stores `value` in word 0x36 + index of the block at +0x20. */
void scrWorkSetValue(int index, u32 value)
{
    u32 *words = g_scrContext.words;

    words[index + 0x36] = value;
}

} /* extern "C" */
