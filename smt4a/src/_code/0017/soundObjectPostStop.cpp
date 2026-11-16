#include "classes/ObjectCommandRequests.h"

/* An object that is cleared once its stop command is queued (fields 0x218 and 0x21C). */
struct ObjectStopTarget {
    /* 0x000 */ u8 unk000[0x218];
    /* 0x218 */ u32 queued;
    /* 0x21C */ u32 pending;
};

extern "C" {
s32 FUN_001911a4(ObjectCommandQueue *queue, s32 value);
void FUN_001912cc(ObjectCommandQueue *queue, s32 token);
}

// Enqueues a type-0x33 command for the object, flushes the queue and clears the object's queue state.
extern "C" void soundObjectPostStop(ObjectStopTarget *target)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, 5);
    command->kind = 0x33;
    command->owner = (u32)target;
    listAppendNode(queue, command);
    FUN_001912cc(queue, FUN_001911a4(queue, 1));
    target->pending = 0;
    target->queued = 0;
}
