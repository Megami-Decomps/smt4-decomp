/* Sets bits 0-1 and clears bit 2 of the global flag byte, and clears the following byte. */
#include "common.h"

extern "C" {

typedef struct Flags {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 step;
} Flags;

extern Flags *FUN_0037d494(void);

void FUN_0040a790(void)
{
    Flags *flags = FUN_0037d494();

    u8 mode = flags->mode;

    flags->step = 0;
    flags->mode = (mode & ~4) | 3;
}

}
