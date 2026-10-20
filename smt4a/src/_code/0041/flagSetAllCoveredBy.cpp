#include "common.h"

extern "C" {

#define ENTRY_DEFINED 0x08
#define ENTRY_BLOCKED 0x10

typedef struct FlagEntry00418768 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 flags;       /* ENTRY_* */
    /* 0x03 */ u8 unk03;
} FlagEntry00418768;  /* 4 bytes */

typedef struct FlagBlock00418768 {
    /* 0x000 */ u8 unk000[0x2a0];
    /* 0x2a0 */ FlagEntry00418768 entries[400];
} FlagBlock00418768;

FlagBlock00418768 *gameFlagBlockGet(void);
u32 FUN_001bd100(u32 index);

/* The entry's flag bit, as 0 or 1. */
static u32 entryFlag(u32 index, u32 flag, u32 shift)
{
    return (gameFlagBlockGet()->entries[index].flags & flag) >> shift;
}

/* Returns 0 when some defined, unblocked entry has exactly the bit set `mask` (FUN_001bd100); 1 when none does. */
u32 flagSetAllCoveredBy(u32 mask)
{
    u16 i;

    for (i = 0; i < 400; i++) {
        if (entryFlag(i, ENTRY_DEFINED, 3) != 0
            && (FUN_001bd100(i) & ~mask) == 0
            && (mask & ~FUN_001bd100(i)) == 0
            && entryFlag(i, ENTRY_BLOCKED, 4) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
