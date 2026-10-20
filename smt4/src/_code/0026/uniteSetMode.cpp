#include "common.h"

extern "C" {

typedef struct Unite {
    /* 0x000 */ u8 unk000[0x3fc];
    /* 0x3fc */ u32 value3fc;
    /* 0x400 */ u32 value400;
    /* 0x404 */ u8 unk404[0x1c];
    /* 0x420 */ u8 mode;
} Unite;

extern Unite *g_unite;

/* Sets the unite's mode and clears its two counters, if the unite exists. */
void uniteSetMode(u8 mode)
{
    Unite *unite = g_unite;

    if (unite != NULL) {
        unite->mode = mode;
        unite->value400 = 0;
        unite->value3fc = 0;
    }
}

} /* extern "C" */
