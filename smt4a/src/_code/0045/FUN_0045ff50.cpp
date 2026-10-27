#include "classes/ObjectCommandRequests.h"

/* Four payload words copied into a command as a block. */
struct ObjectCommandBlock {
    u32 words[4];
};

/* A type-40 command: the owner's parameter holder, a four-word block and the owner's request block. */
struct ObjectRequestBlockNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ ObjectCommandBlock block;
    /* 0x28 */ u32 requestBlock;
};

// Records the request value and queues a type-40 command for the owner's request block.
extern "C" void FUN_0045ff50(ObjectCommandOwner *owner, u32 value, const ObjectCommandBlock *block)
{
    owner->requestValue = value;
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectRequestBlockNode *command = (ObjectRequestBlockNode *)objectCommandBegin(queue, 11);
    command->kind = 40;
    command->owner = (u32)&owner->params;
    command->requestBlock = (u32)owner->requestBlock;
    command->block = *block;
    listAppendNode(queue, (ObjectCommand *)command);
}
