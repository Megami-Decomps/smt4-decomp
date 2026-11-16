#include "shard/Shard0039.h"

extern "C" {

extern s32 rosterHasLeader(void);
extern s32 rosterGetLeaderId(void);

s32 FUN_00398024(void)
{
    s32 result = rosterHasLeader();

    if (result == 0 || (result = rosterGetLeaderId()) <= 0) {
        result = -1;
    }
    return result;
}

} /* extern "C" */
