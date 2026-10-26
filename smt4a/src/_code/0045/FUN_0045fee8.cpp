#include "classes/ObjectCommandRequests.h"

/* A voice update: a parameter set whose halfword at 8 is the changed-parameter mask (0x50 bytes). */
struct ObjectVoiceUpdate {
    /* 0x00 */ u32 unk00[2];
    /* 0x08 */ u16 changedMask;
    /* 0x0A */ u8 unk0A[0x46];
};

/* A type-39 command: the owner's parameter holder and a copy of the update. */
struct ObjectVoiceUpdateNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ObjectVoiceUpdate update;
};

// Records the update's changed mask and queues a type-39 command carrying the whole update.
extern "C" void FUN_0045fee8(ObjectCommandOwner *owner, const ObjectVoiceUpdate *update)
{
    owner->changedMask = update->changedMask;
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectVoiceUpdateNode *command = (ObjectVoiceUpdateNode *)objectCommandBegin(queue, 25);
    command->kind = 39;
    command->owner = (u32)&owner->params;
    command->update = *update;
    listAppendNode(queue, (ObjectCommand *)command);
}
