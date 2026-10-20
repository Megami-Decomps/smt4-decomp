/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"

extern "C" {

typedef struct MachineState MachineState;
typedef s32 (*StateHandler)(MachineState *machine);

#define MACHINE_HANDLER_DONE 3
#define MACHINE_STATE_FINISHED 9

struct MachineState {
    u8 unk000[12];
    StateHandler handlers[231];   /* 0x00c */
    u32 previousState;            /* 0x3a8 */
    s32 state;                    /* 0x3ac */
    s32 nextState;                /* 0x3b0 */
    u8 unk3b4[0x34];
    u8 finished;                  /* 0x3e8 */
};

/* Runs the current state's handler; when it reports completion and a next state is queued, switches to it. */
u32 FUN_0025d5c8(MachineState **owner)
{
    MachineState *machine = *owner;
    StateHandler handler = machine->handlers[machine->state];
    s32 result;
    s32 next;
    u32 old;
    u8 finishing;

    if (handler != NULL && (result = handler(machine), result == MACHINE_HANDLER_DONE) &&
        (next = machine->nextState, next != -1)) {
        old = machine->state;
        machine->state = next;
        finishing = next == MACHINE_STATE_FINISHED;
        machine->previousState = old;
        if (finishing) {
            result = 1;
        }
        machine->nextState = -1;
        if (finishing) {
            machine->finished = result;
        }
    }
    return 0;
}

} /* extern "C" */
