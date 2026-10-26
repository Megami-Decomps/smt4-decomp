/* NON_MATCHING: matches except that armcc loads the owner's start word (with write-back) before the reloaded target pointer where retail loads the target first. */
#include "classes/ObjectCommandRequests.h"

/* A pair of floats (or the 64-bit word holding them) copied as a unit. */
union ObjectLevelPair {
    u64 bits;
    f32 values[2];
};

/* A command stream target: its kind (0 or 1) selects how a command describes it. */
struct ObjectStreamTarget {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 id;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u8 kind;
    /* 0x1D */ u8 unk1D[0x0A];
    /* 0x27 */ u8 flag;
    /* 0x28 */ u8 unk28[0x29];
    /* 0x51 */ u8 suppressed;
};

struct ObjectStreamOwner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 request[0x20];
    /* 0x3C */ u32 start;
    /* 0x40 */ ObjectLevelPair level;
    /* 0x48 */ u8 flag;
    /* 0x49 */ u8 unk49[3];
    /* 0x4C */ ObjectStreamTarget *target;
};

extern "C" {
ObjectCommandQueue *FUN_00191330(void);
s32 FUN_001911a4(ObjectCommandQueue *queue, s32 value);
u8 FUN_00463e10(ObjectStreamTarget *target, ObjectCommand *command, u8 *request, u32 start, ObjectLevelPair level);
u8 FUN_004645ec(ObjectStreamTarget *target, ObjectCommand *command, u8 *request, u32 start, ObjectLevelPair level);
}

// Copies the owner's flag to its target and queues a type-43 command describing the target with the owner's
// request block, unless the target is suppressed, then flushes the queue.
extern "C" void FUN_00463a9c(ObjectStreamOwner *owner)
{
    u8 *request = owner->request;
    owner->target->flag = owner->flag;
    ObjectStreamTarget *target = owner->target;
    u32 start = owner->start;
    ObjectLevelPair level = owner->level;
    if (target->suppressed != 0) {
        return;
    }
    ObjectCommandQueue *queue = FUN_00191330();
    ObjectCommand *command = objectCommandBegin(queue, 25);
    command->kind = 43;
    u8 value = target->kind;
    if (value == 0) {
        value = FUN_00463e10(target, command, request, start, level);
    } else if (value == 1) {
        value = FUN_004645ec(target, command, request, start, level);
    } else {
        value = 0;
    }
    command->payload.bytes.flag = value;
    command->owner = target->id;
    listAppendNode(queue, command);
    FUN_001911a4(queue, 1);
}
