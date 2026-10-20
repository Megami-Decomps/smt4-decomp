#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x20];
    u32 *words;
} DAT_0044de98;

/* Stores `value` in word 0x36 + index of the block at +0x20. */
void FUN_002542d4(int index, u32 value)
{
    u32 *words = DAT_0044de98.words;

    words[index + 0x36] = value;
}

} /* extern "C" */
