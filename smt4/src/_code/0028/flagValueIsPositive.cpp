#include "gamedata/FlagValueIsPositive.h"
#include "code/Code0028.h"

/* Whether the requested flag has a positive stored value. */
extern "C" u8 flagValueIsPositive(s32 index)
{
    return 0 < flagValueRead(index);
}
