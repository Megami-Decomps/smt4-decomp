#ifndef SYS_MOUNTNAMEKEY_H
#define SYS_MOUNTNAMEKEY_H
#include "common.h"

extern "C" void sysFatalBreak(void);
extern "C" const s8 DAT_00536d10[]; /* fallback mount name */

static __inline u64 mountPackName(const s8 *name)
{
    u64 key = 0;
    for (s32 index = 0; index < 8; ++index) {
        s8 character = name[index];
        if (character == ':')
            return key;
        key = (key << 8) | (s64)character;
    }
    return 0;
}

// Packs the prefix of a mount path (up to the first ':' or end of string, at most seven characters).
static __inline u64 mountKeyFromName(const s8 *name)
{
    s8 prefix[8];
    for (s32 length = 0; length < 8; ++length) {
        s8 character = name[length];
        if (character == 0 || character == ':') {
            prefix[length] = ':';
            return mountPackName(prefix);
        }
        prefix[length] = character;
    }
    sysFatalBreak();
    return mountPackName(DAT_00536d10);
}
#endif
