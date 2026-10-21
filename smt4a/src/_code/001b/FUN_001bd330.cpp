/* NON_MATCHING: initializer constants use r1/r2/r3 instead of retail r3/ip/r1. */
#include "common.h"

extern "C" {

struct TextureDefaults {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u8 first;
    /* 0x03 */ u8 second;
    /* 0x04 */ u32 value;
};
void FUN_001bd330(TextureDefaults *settings)
{
    settings->first = 255;
    settings->second = 255;
    settings->value = 0;
    settings->mode = 0;
    settings->flags = 2;
}

} /* extern "C" */
