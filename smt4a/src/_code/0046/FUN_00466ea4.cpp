/* NON_MATCHING: matches except that retail forms the payload address (command + 0x14) early in sl and numbers the saved registers in argument order; armcc forms it just before the store. */
#include "classes/ObjectCommandRequests.h"

/* The cursor extras a type-34 command carries: three words, two values and a mode byte. */
struct ObjectCursorExtra {
    u32 words[3];
};

/* A type-34 command (11 words). */
struct ObjectCursorNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ObjectCursorExtra extra;
    /* 0x20 */ u32 first;
    /* 0x24 */ u32 second;
    /* 0x28 */ u8 mode;
};

// Queues a type-34 command for the cursor object and marks it sent.
extern "C" void FUN_00466ea4(ObjectCursorOwner *owner, u32 first, u32 second, const ObjectCursorExtra *extra, u8 mode)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCursorNode *command = (ObjectCursorNode *)objectCommandBegin(queue, 11);
    command->kind = 34;
    command->owner = (u32)&owner->params;
    command->extra = *extra;
    command->first = first;
    command->second = second;
    command->mode = mode;
    listAppendNode(queue, (ObjectCommand *)command);
    owner->sent = 1;
}
