#include "common.h"

extern "C" {

extern u32 DAT_00570d58;

/* Stores `value` in the word at 0x570D58. */
void FUN_00203a6c(u32 value)
{
    DAT_00570d58 = value;
}

} /* extern "C" */
