#include "common.h"

extern "C" {

typedef struct FlagWords0018c4f8 {
    u32 state;                     /* 0x00 */
    u32 flagsA;                    /* 0x04 */
    u32 flagsB;                    /* 0x08 */
} FlagWords0018c4f8;

void FUN_0018c504(u32 *state, u32 *flagsA, u32 *flagsB);

/* Passes the object's three flag words on to FUN_0018c504, the function that follows it. */
void FUN_0018c4f8(FlagWords0018c4f8 *words)
{
    FUN_0018c504(&words->state, &words->flagsA, &words->flagsB);
}

} /* extern "C" */
