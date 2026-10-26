/* NON_MATCHING: matches except the saved-register numbering (retail keeps the first byte argument in r4, the owner in r6; armcc numbers them in order of first use). */
#include "classes/ObjectCommandRequests.h"

// Queues a type-37 command for the cursor object carrying a flag and an option byte.
extern "C" void FUN_00466dac(ObjectCursorOwner *owner, u8 flag, u8 option)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommand *command = objectCommandBegin(queue, 6);
    command->kind = 37;
    command->owner = (u32)&owner->params;
    command->payload.bytes.flag = flag;
    command->payload.bytes.option = option;
    listAppendNode(queue, command);
}
