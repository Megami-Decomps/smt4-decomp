#include "common.h"

extern "C" {

typedef struct Lock {
    u8 unk00[4];
    s32 depth;   /* 0x04 */
    u32 owner;   /* 0x08 */
} Lock;

extern u32 FUN_002fb208(void);

/* Takes a recursive lock: records the owner on the first entry and counts the depth. */
void recursiveLockEnter(Lock *lock)
{
    if (lock->depth == 0) {
        lock->owner = FUN_002fb208();
    }
    lock->depth++;
}

} /* extern "C" */
