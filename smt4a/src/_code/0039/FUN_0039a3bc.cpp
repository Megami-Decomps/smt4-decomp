/* NON_MATCHING: `slots` and `index` are held in swapped callee-saved registers (r4/r5), and the state slot is accessed with a write-back load. */
#include "common.h"

extern "C" {

#define STATE_READY 2
#define STATE_BUSY 3

typedef struct Slots {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ int state[1];
} Slots;

int FUN_001acf98(int kind, u32 id);
int asdTMTexTableNodeIsLoaded(u32 kind, u32 id);
u32 FUN_002adba8(int index);

/* If slot `index` is not yet marked and asdTMTexTableNodeIsLoaded has nothing for it, issues FUN_001acf98 and marks the slot ready. */
void FUN_0039a3bc(Slots *slots, int index)
{
    u32 id = FUN_002adba8(index);

    if (asdTMTexTableNodeIsLoaded(0x2e, id) == 0) {
        int *state = &slots->state[index];

        if (*state != STATE_BUSY && *state != STATE_READY) {
            id = FUN_002adba8(index);
            FUN_001acf98(0x2e, id);
            *state = STATE_READY;
        }
    }
}

} /* extern "C" */
