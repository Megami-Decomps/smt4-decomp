#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 partyHasStoredDemon(u16 id);

/* Script command: returns 1 when the party has the demon with the given id stored. */
u32 scrComm_Party_HasStoredDemon(void)
{
    scrSetResult(partyHasStoredDemon(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */
