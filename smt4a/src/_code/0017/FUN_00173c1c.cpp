/* NON_MATCHING: command initialization uses r1 as the early append argument, r2 for its token and r0 for kind51 instead of retaining the node in r0 until initialization ends; instruction count matches. */
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

void FUN_00173c1c(QueuedCommandOwner *owner)
{
    OwnerCommandQueue *queue = objectCommandQueueGet();
    QueuedCommand *command = objectCommandReserveWords(queue, 5);
    command->token = queue->token;
    command->kind = 0x33;
    command->owner = owner;
    listAppendNode(queue, command);
    u32 token = FUN_001911a4(queue, 1);
    FUN_001912cc(queue, token);
    owner->unk21c = 0;
    owner->unk218 = 0;
}
}
