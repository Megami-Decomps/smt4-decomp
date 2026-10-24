#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void mapCompleteGroup(s32 group);

/* Script command: completes the map group given as the first argument. */
u32 FUN_002017dc(void)
{
    mapCompleteGroup(scrGetArg(0));
    return 1;
}

} /* extern "C" */
