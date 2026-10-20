/* NON_MATCHING: retail dispatches the state switch through a jump table (cases 1-3); built uses a compare chain. */
#include "common.h"

extern "C" {

typedef struct Process Process;
struct Process {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 group;
    /* 0x38 */ u8 unk38[0x20];
    /* 0x58 */ Process *firstChild;
    /* 0x5C */ Process *nextSibling;
    /* 0x60 */ u8 unk60[0x38];
    /* 0x98 */ u8 state;
};

/* Ends a process: gives each child its group and ends it, then moves a live process (state 1-3) to state 4. */
void asdProcessEnd(Process *process)
{
    Process *child = process->firstChild;

    while (child != NULL) {
        Process *next = child->nextSibling;

        child->group = process->group;
        asdProcessEnd(child);
        child = next;
    }
    switch (process->state) {
    case 1:
    case 2:
    case 3:
        process->state = 4;
        break;
    default:
        break;
    }
}

} /* extern "C" */
