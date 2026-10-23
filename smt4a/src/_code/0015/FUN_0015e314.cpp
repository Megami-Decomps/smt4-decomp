/* NON_MATCHING: counter loop restored; binding-store inline shape, two compiler hints and register allocation differ. */
#include "common.h"

struct ObjectCounterTable {
    u32 count;
    u32 values[1];
};

struct ObjectCounterTableOwner {
    u8 unk00[0x0c];
    struct {
        u32 unk00;
        u32 resource;
    } binding;                         /* 0x0c */
    u8 unk14[0x204];
    ObjectCounterTable *counters;       /* 0x218 */
};
struct ObjectCounterBindCommand {
    u32 next;
    u8 operation;                      /* 0x04 */
    u8 unk05[7];
    u32 renderState;                   /* 0x0c */
    ObjectCounterTableOwner *owner;     /* 0x10 */
};
struct ObjectCounterCommandQueue {
    u8 unk00[0x184];
    u32 renderState;                   /* 0x184 */
};

extern "C" {
void listAppendNode(ObjectCounterCommandQueue *queue, ObjectCounterBindCommand *command);
ObjectCounterBindCommand *objectCommandReserveWords(ObjectCounterCommandQueue *queue, u32 words);
ObjectCounterCommandQueue *objectCommandQueueGet(void);
u32 FUN_00194f94(u32 resource);

/* Initialize caller-provided counter storage and enqueue its resource binding. */
u32 FUN_0015e314(ObjectCounterTableOwner *owner, u32 resource, void *buffer, u32 bytes)
{
    u32 end = (u32)buffer + bytes;
    u32 requiredBytes = 4 + FUN_00194f94(resource) * sizeof(u32);
    u32 requiredEnd = ((u32)buffer + requiredBytes + 3) & ~3u;
    if ((s32)(requiredEnd - end) > 0)
        return 0;

    owner->counters = (ObjectCounterTable *)buffer;
    owner->counters->count = FUN_00194f94(resource);
    for (u32 i = 0; i < owner->counters->count; ++i)
        owner->counters->values[i] = 0;
    owner->binding.resource = resource;
    ObjectCounterCommandQueue *queue = objectCommandQueueGet();
    ObjectCounterBindCommand *command = objectCommandReserveWords(queue, 5);
    command->renderState = queue->renderState;
    command->operation = 0x32;
    command->owner = owner;
    listAppendNode(queue, command);
    return 1;
}
}
