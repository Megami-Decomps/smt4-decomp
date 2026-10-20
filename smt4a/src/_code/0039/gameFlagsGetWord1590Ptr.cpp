#include "shard/Shard0039.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

/* Pointer to word `index` (below 8) of the table at +0x1590, or NULL. */
u32 *gameFlagsGetWord1590Ptr(s32 index)
{
    Flags0C0C *flags = FUN_00162e8c();

    if (flags != NULL && index < 8) {
        return &flags->words1590[index];
    }
    return NULL;
}

} /* extern "C" */
