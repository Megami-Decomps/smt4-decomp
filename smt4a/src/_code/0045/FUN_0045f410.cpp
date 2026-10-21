/* NON_MATCHING: queue/owner/option saved registers differ, as do initial command stores; direct owner-handle assignment also omits retail's MOV R1,R0. */
#include "common.h"

struct CommandOwner;
struct CommandOwnerVtable {
    u8 unk00[0x20];
    u32 (*getHandle)(CommandOwner* owner);
};
struct CommandOwner {
    const CommandOwnerVtable* vtable;
};
struct OwnerCommand {
    u32 next;
    u8 kind;
    u8 unk05[7];
    u32 token;
    u32 owner;
    u8 unk14;
    u8 option;
};
struct OwnerCommandQueue {
    u8 unk00[0x184];
    u32 token;
};

extern "C" {
OwnerCommandQueue* objectCommandQueueGet(void);
OwnerCommand* objectCommandReserveWords(OwnerCommandQueue* queue, u32 kind);
void listAppendNode(OwnerCommandQueue* queue, OwnerCommand* command);

void FUN_0045f410(CommandOwner* owner, u8 option)
{
    OwnerCommandQueue* queue = objectCommandQueueGet();
    OwnerCommand* command = objectCommandReserveWords(queue, 6);
    command->token = queue->token;
    command->kind = 10;
    command->owner = owner->vtable->getHandle(owner);
    command->option = option;
    listAppendNode(queue, command);
}
}
