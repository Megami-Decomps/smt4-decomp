#include "classes/Obj532300.h"

extern "C" {
void FUN_0048a378(Obj532300 *panel);
u8 buttonHelpIsNotActive(void);
}

static __inline void flagsClearBits(u32 *flags, u32 bits)
{
    *flags &= ~bits;
}

// Task state machine: open the help (0), wait until it has closed (1), then clear the display flag and finish (2).
void Obj532300::FUN_0048d1c8()
{
    s32 next;
    if (state == 0) {
        FUN_0048a378(this);
        next = 1;
    } else if (state == 1) {
        if (buttonHelpIsNotActive() != 0) {
            state = 2;
        }
        return;
    } else if (state == 2) {
        flagsClearBits(&flags, 0x1000000);
        step = 2;
        next = 0;
    } else {
        return;
    }
    state = next;
}
