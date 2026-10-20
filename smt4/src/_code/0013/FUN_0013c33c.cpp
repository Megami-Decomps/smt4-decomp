#include "common.h"

extern "C" {

typedef struct FlagWords0013c33c {
    u32 state;                     /* 0x00 */
    u32 flagsA;                    /* 0x04 */
    u32 flagsB;                    /* 0x08 */
} FlagWords0013c33c;

void FUN_0013c348(u32 *state, u32 *flagsA, u32 *flagsB);

/* Passes the object's three flag words on to FUN_0013c348, the function that follows it. */
void FUN_0013c33c(FlagWords0013c33c *words)
{
    FUN_0013c348(&words->state, &words->flagsA, &words->flagsB);
}

} /* extern "C" */
