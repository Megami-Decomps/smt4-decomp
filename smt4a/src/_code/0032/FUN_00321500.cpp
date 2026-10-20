/* NON_MATCHING: the pool offset 0x2438 and the constant 5 take r2/r3 in the opposite order. */
#include "common.h"

extern "C" {

/* Object with a sub-object at 0x20f0, a counter at 0x2438 and a state word at 0x243c. */
typedef struct {
    u8 unk0000[0x20f0];
    u8 sub[0x348];      /* 0x20f0 */
    u32 counter;        /* 0x2438 */
    u32 state;          /* 0x243c */
} Owner;

int uiSpriteSetKeyframe(u8 *sub, int a, int b);

/* When the state is 0, switches to state 5, clears the counter and restarts the sub-object. */
void FUN_00321500(Owner *owner)
{
    u32 *state = &owner->state;

    if (*state == 0) {
        *state = 5;
        owner->counter = 0;
        uiSpriteSetKeyframe(owner->sub, 0, 0);
    }
}

} /* extern "C" */
