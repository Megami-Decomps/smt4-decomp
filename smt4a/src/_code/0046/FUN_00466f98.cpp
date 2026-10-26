#include "classes/ObjectCommandRequests.h"

// Queues a type-49 command carrying an id and one word.
extern "C" void FUN_00466f98(u32 id, u32 value)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, 6);
    command->kind = 49;
    command->owner = id;
    command->payload.word = value;
    listAppendNode(queue, command);
}
