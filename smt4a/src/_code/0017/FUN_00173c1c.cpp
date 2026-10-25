/* NON_MATCHING: only the token load register differs (retail ldr r1 then mov r1,#51; built hoists mov r1,#51 and loads the token into r2). */
#include "common.h"

struct QueuedCommandOwner {
    u8 unk000[0x218];
    u32 unk218;
    u32 unk21c;
};
struct QueuedCommand {
    QueuedCommand *next;
    u8 kind;
    u8 unk05[7];
    u32 token;
    QueuedCommandOwner *owner;
};
struct OwnerCommandQueue {
    u8 unk000[0x184];
    u32 token;
};

extern "C" {
OwnerCommandQueue *objectCommandQueueGet();
QueuedCommand *objectCommandReserveWords(OwnerCommandQueue *queue, u32 mode);
void listAppendNode(OwnerCommandQueue *queue, QueuedCommand *command);
u32 FUN_001911a4(OwnerCommandQueue *queue, u32 mode);
void FUN_001912cc(OwnerCommandQueue *queue, u32 token);

static __inline QueuedCommand *commandInit(QueuedCommand *command, OwnerCommandQueue *queue, u8 kind,
                                           QueuedCommandOwner *owner)
{
    command->token = queue->token;
    command->kind = kind;
    command->owner = owner;
    return command;
}

void FUN_00173c1c(QueuedCommandOwner *owner)
{
    OwnerCommandQueue *queue = objectCommandQueueGet();
    QueuedCommand *command = objectCommandReserveWords(queue, 5);
    listAppendNode(queue, commandInit(command, queue, 0x33, owner));
    u32 token = FUN_001911a4(queue, 1);
    FUN_001912cc(queue, token);
    owner->unk21c = 0;
    owner->unk218 = 0;
}
}
