/* NON_MATCHING: control flow now matches retail (the not-loading arm is out of line and returns 0 directly); retail additionally hoists the zero it stores into callee-saved r5 before the loading test. */
#include "shard/X14_JobStateMachine.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_003e4070(void *load, u32 arg);
void FUN_003fa010(JobStateMachine *machine);
s32 FUN_003fa83c(JobStateMachine *machine);
void FUN_00442554(JobStateMachine *machine);

/* Steps the current job's state machine; returns -1 once it reaches state 15, else 0. */
s32 FUN_00227ee8(u32 job)
{
    JobStateMachineWork *work = (JobStateMachineWork *)jobGetWork(job);
    JobStateMachine *machine;

    if (work == NULL) {
        return 0;
    }
    machine = work->machine;
    if (machine->current != machine->next) {
        machine->previous = machine->current;
        machine->current = machine->next;
        FUN_003fa010(machine);
    }
    if (!machine->loading) {
        if (FUN_003fa83c(machine) == 0) {
            return 0;
        }
    } else if (machine->loadDone) {
        FUN_003e4070(machine->load, machine->loadArg);
        machine->loadDone = 0;
        machine->loading = 0;
        machine->next = machine->queued;
        machine->queued = 0;
    }
    FUN_00442554(machine);
    return machine->current == 15 ? -1 : 0;
}

} /* extern "C" */
