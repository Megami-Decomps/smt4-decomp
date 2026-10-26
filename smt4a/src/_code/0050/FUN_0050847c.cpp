/* NON_MATCHING: retail saves only lr (push {lr}/pop {pc}) where armcc here saves {r4, lr}; library-style codegen. */
#include "common.h"

struct LookupResult {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

extern "C" {

LookupResult *FUN_005083a0(void *owner, u32 mode);

/* Looks the owner up in mode 0x4000 and returns the word at offset 0x8. */
u32 FUN_0050847c(void *owner)
{
    return FUN_005083a0(owner, 0x4000)->value;
}

} /* extern "C" */
