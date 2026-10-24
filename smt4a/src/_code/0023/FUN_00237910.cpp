#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void *partyFindSlotById(u16 id);
void FUN_004d0d70(void *slot);

/* Script command: runs FUN_004d0d70 on the party slot of the id in argument zero. */
s32 FUN_00237910(void)
{
    FUN_004d0d70(partyFindSlotById(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
