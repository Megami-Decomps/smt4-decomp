#include "classes/ObjectCommandRequests.h"

/* A command stream target: its kind (0 or 1) selects how a command describes it. */
struct ObjectStreamTarget {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 kind;
};

struct ObjectStreamOwner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ ObjectStreamTarget *target;
};

extern "C" {
ObjectCommandQueue *FUN_00191330(void);
s32 FUN_001911a4(ObjectCommandQueue *queue, s32 value);
u8 FUN_004632f8(ObjectStreamTarget *target, ObjectCommand *command);
u8 FUN_00463618(ObjectStreamTarget *target, ObjectCommand *command);
}

// Queues a type-42 command describing the stream's target, then flushes the queue.
extern "C" void FUN_00463b94(ObjectStreamOwner *owner)
{
    ObjectStreamTarget *target = owner->target;
    ObjectCommandQueue *queue = FUN_00191330();
    ObjectCommand *command = objectCommandBegin(queue, 15);
    command->kind = 42;
    u8 value = target->kind;
    if (value == 0) {
        value = FUN_004632f8(target, command);
    } else if (value == 1) {
        value = FUN_00463618(target, command);
    } else {
        value = 0;
    }
    command->payload.bytes.flag = value;
    listAppendNode(queue, command);
    FUN_001911a4(queue, 1);
}
