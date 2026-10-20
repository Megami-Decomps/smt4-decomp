#include "common.h"

extern "C" {

void FUN_001af148(u32 *object);
extern u32 DAT_005b445c;

/* Calls FUN_001af148 on the word at 0x5B445C. */
void FUN_001a2e68(void)
{
    FUN_001af148(&DAT_005b445c);
}

} /* extern "C" */
