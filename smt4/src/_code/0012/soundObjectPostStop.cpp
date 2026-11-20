#include "classes/Obj421aa4Requests.h"

/* A sound object that is cleared once its stop request is queued (fields 0x218 and 0x21C). */
struct SoundStopTarget {
    /* 0x000 */ u8 unk000[0x218];
    /* 0x218 */ u32 queued;
    /* 0x21C */ u32 pending;
};

extern "C" {
void soundRequestQueueDequeueUntilToken(Obj421aa4Manager *manager, s32 value);
}

// Enqueues a type-0x32 sound request for the object, flushes the manager and clears the object's queue state.
extern "C" void soundObjectPostStop(SoundStopTarget *target)
{
    Obj421aa4Manager *manager = soundRequestQueueGetInstance();
    Obj421aa4Node *node = soundRequestBegin(manager, 5);
    node->type = 0x32;
    node->id = (u32)target;
    listAppendNode(manager, node);
    soundRequestQueueDequeueUntilToken(manager, soundRequestQueueFlush(manager, 1));
    target->pending = 0;
    target->queued = 0;
}
