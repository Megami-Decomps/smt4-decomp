#include "common.h"

extern "C" {

/* Object with an "initialised" flag at 0x68 and a member at 0x58. */
typedef struct {
    u8 unk00[0x58];
    u8 member[0x10];    /* 0x58 */
    u8 initialised;     /* 0x68 */
} Lazy;

int FUN_0043d210(Lazy *self, u8 *member);

/* One-time setup: runs FUN_0043d210 on the member the first time it is called. */
void FUN_002ea6cc(Lazy *self)
{
    if (self->initialised == 0) {
        FUN_0043d210(self, self->member);
        self->initialised = 1;
    }
}

} /* extern "C" */
