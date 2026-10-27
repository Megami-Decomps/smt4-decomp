#ifndef SMT4A_BATTLE_BTLSTATUSAILMENTS_H
#define SMT4A_BATTLE_BTLSTATUSAILMENTS_H

#include "common.h"

/* True when any of the ailment bits of a combatant's status word is set. Each bit is tested on
 * its own (armcc would otherwise fuse a single-expression chain into one mask test). */
static __inline bool statusFlagsHaveAilment(u32 flags)
{
    if (flags & 0x2)
        return true;
    if (flags & 0x20)
        return true;
    if (flags & 0x40)
        return true;
    if (flags & 0x80)
        return true;
    if (flags & 0x100)
        return true;
    if (flags & 0x200)
        return true;
    if (flags & 0x400)
        return true;
    if (flags & 0x8)
        return true;
    if (flags & 0x800)
        return true;
    if (flags & 0x1000)
        return true;
    if (flags & 0x2000)
        return true;
    return false;
}

#endif
