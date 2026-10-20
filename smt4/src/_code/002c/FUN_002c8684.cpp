#include "common.h"

extern "C" {

extern int gameGetMapBlock(void);
extern int gameFlagIsSet(u32 flag);

/* Whether `id` is usable: the two groups of ids (and 0x66, 0x67) each need their unlock flag set. */
u32 FUN_002c8684(u32 id)
{
    gameGetMapBlock();
    if ((id - 0x19 <= 5 || id == 0x66) && gameFlagIsSet(0x144) == 0) {
        return 0;
    }
    if ((id - 0x1F <= 4 || id == 0x67) && gameFlagIsSet(0x15A) == 0) {
        return 0;
    }
    return 1;
}

}
