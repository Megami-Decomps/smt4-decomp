/* Runs the current state's handler; if a failure flag is set, optionally reports it and returns -1, else 0. */
#include "common.h"

extern "C" {

typedef void (*StateHandler)(void);

typedef struct {
    u8 unk000[4];             /* 0x000 */
    u8 reported;              /* 0x004 */
    u8 unk005[0x127];         /* 0x005 */
    StateHandler handlers[8]; /* 0x12c indexed by currentState */
    s32 currentState;         /* 0x14c */
    u8 unk150[4];             /* 0x150 */
    u8 failed;                /* 0x154 */
} Machine;

void sequenceRequestZeroArgument(void);

extern Machine *g_staffRoll;

s32 machineStep(void)
{
    Machine *machine = g_staffRoll;

    machine->handlers[machine->currentState]();
    if (machine->failed != 0) {
        if (machine->reported == 0) {
            sequenceRequestZeroArgument();
        }
        return -1;
    }
    return 0;
}

} /* extern "C" */
