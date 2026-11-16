#include "common.h"
#include "camp/ButtonHelp/ButtonHelp.h"

extern "C" {

extern s16 *gameGetFlagBlock(void);

u8 rosterHasLeader(void)
{
    s16 *base = gameGetFlagBlock();

    return base[0x420] != 0;
}

} /* extern "C" */
