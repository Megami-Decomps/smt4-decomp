#include "common.h"

extern "C" {

void FUN_001af214(u32 *object);
extern u32 DAT_005b445c;

/* Calls FUN_001af214 on the word at 0x5B445C. */
void FUN_0018b9d4(void)
{
    FUN_001af214(&DAT_005b445c);
}

} /* extern "C" */
