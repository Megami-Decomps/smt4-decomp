/* NON_MATCHING: retail keeps the 0 it stores in callee-saved r5 (set before the loading test) and
 * places the FUN_003fa83c branch last, jumping back into the shared FUN_00442554 call. */
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
    if (machine->loading) {
        if (machine->loadDone) {
            FUN_003e4070(machine->load, machine->loadArg);
            machine->loadDone = 0;
            machine->loading = 0;
            machine->next = machine->queued;
            machine->queued = 0;
        }
        FUN_00442554(machine);
    } else if (FUN_003fa83c(machine) != 0) {
        FUN_00442554(machine);
    }
    return machine->current == 15 ? -1 : 0;
}

} /* extern "C" */
