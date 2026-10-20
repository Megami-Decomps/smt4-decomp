#include "common.h"

extern "C" {

typedef struct Flags004bbc34 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flags;     /* bit 7: the queried flag */
} Flags004bbc34;

Flags004bbc34 *gameDataGetTableEntry(void);

/* Returns bit 7 of the flag byte of the object gameDataGetTableEntry yields. */
u8 flagsBit7Get(void)
{
    return (gameDataGetTableEntry()->flags & 0x80) >> 7;
}

} /* extern "C" */
