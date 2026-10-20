#include "common.h"

extern "C" {

void FUN_001a0990(u32 *object);
extern u32 DAT_005b445c;

/* Calls FUN_001a0990 on the word at 0x5B445C. */
void FUN_0018b920(void)
{
    FUN_001a0990(&DAT_005b445c);
}

} /* extern "C" */
