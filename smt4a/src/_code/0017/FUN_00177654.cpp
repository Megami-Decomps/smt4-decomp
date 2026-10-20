#include "common.h"

extern "C" {

typedef struct Options {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x062 */ s16 first;
    /* 0x064 */ u8 unk064[0xC8];
    /* 0x12C */ s16 second;
} Options;

Options *gameGetOptions(void);

/* Returns 1 when both option values are nonzero. */
u32 FUN_00177654(void)
{
    Options *options;
    u32 result;

    options = gameGetOptions();
    if (options->first == 0 || options->second == 0) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
