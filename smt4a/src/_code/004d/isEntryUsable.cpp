#include "shard/Shard004D.h"
#include "shard/isEntryUsable.h"

extern "C" {

u32 isEntryUsable(s32 *obj)
{
    if (obj[0] == 0) {
        return 0;
    }
    if (obj[0] == 10 && obj[10] < 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
