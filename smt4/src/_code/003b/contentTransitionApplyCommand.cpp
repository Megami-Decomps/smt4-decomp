/* NON_MATCHING: -O2 candidate; case 2 uses flag-store writeback plus separate state/phase stores instead of retail's STRD. */
#include "shard/W6_W6Match6_ContentTransition.h"

struct ContentTransitionCommand {
    u8 unk00[0x21];
    u8 kind;
    u8 unk22[0x32];
    ShortJumpDestination destination;
};

extern "C" {
void FUN_0022b29c(ContentTransition *transition, s32 sourceMap, u32 destinationMap);
void gameSynchronizeMapState(ContentTransition *transition);
void FUN_002bd808(ShortJumpDestination *destination, const ShortJumpDestination *source);

void contentTransitionApplyCommand(ContentTransition *transition, const void *commandContext)
{
    transition->phase = 0;
    transition->state = 5;
    ShortJumpDestination destination;
    destination.map = 0;
    destination.area = 0;
    destination.place = 0;
    const ContentTransitionCommand *command = (const ContentTransitionCommand *)commandContext;
    u32 flags;
    switch (command->kind) {
    default:
        return;
    case 1:
        destination.map = command->destination.map;
        FUN_002bd808(&transition->destination, &destination);
        flags = transition->flags | 0x10;
        break;
    case 2:
        destination.map = command->destination.map;
        destination.area = command->destination.area;
        destination.place = command->destination.place;
        FUN_002bd808(&transition->destination, &destination);
        transition->flags |= 0x100010;
        transition->phase = 0;
        transition->state = 5;
        return;
    case 7:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x200000;
        break;
    case 6:
        flags = transition->flags | 0x800000;
        break;
    case 5:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x4000000;
        break;
    case 3:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x1000000;
        break;
    case 4:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x2000000;
        break;
    case 8:
        FUN_0022b29c(transition, (s16)transition->sourceMap, command->destination.map);
        transition->state = 4;
        transition->phase = 0;
        return;
    case 9:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x8000000;
        break;
    case 10:
        gameSynchronizeMapState(transition);
        flags = transition->flags | 0x20000000;
        break;
    }
    transition->flags = flags;
}
}
