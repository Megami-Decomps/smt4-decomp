/* NON_MATCHING: written from the retail flow; retail forms the block address (command + 0x14) early in r8 and the parameter-holder address after the type store, armcc schedules both later. */
#include "classes/ObjectCommandRequests.h"

/* Four payload words copied into a command as a block. */
struct ObjectCommandBlock {
    u32 words[4];
};

/* A type-41 command: the owner's parameter holder, a four-word block and one more word. */
struct ObjectCommandBlockNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ObjectCommandBlock block;
    /* 0x24 */ u32 value;
};

// Queues a type-41 command for the owner's parameter holder.
extern "C" void FUN_0045fd14(ObjectCommandOwner *owner, u32 value, const ObjectCommandBlock *block)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectCommandBlockNode *command = (ObjectCommandBlockNode *)objectCommandBegin(queue, 10);
    ObjectCommandBlock *payload = &command->block;
    command->kind = 41;
    command->owner = (u32)&owner->params;
    command->value = value;
    *payload = *block;
    listAppendNode(queue, (ObjectCommand *)command);
}
