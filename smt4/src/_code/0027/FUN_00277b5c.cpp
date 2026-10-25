/* NON_MATCHING: the four command stores are scheduled in a different order (retail: constants 1 and 0 first, then stores in field order). */
#include "common.h"

extern "C" {

typedef struct PendingCommand {
    u16 pending;     /* 1 = a command is queued */
    u16 flags;
    s16 id;
    u16 arg;
} PendingCommand;

typedef struct Globals {
    /* 0x0000 */ u8 unk0000[0xCCB8];
    /* 0xCCB8 */ PendingCommand command;
} Globals;

extern Globals *g_mapIf;

int gameMapBlockGetValue(int id);
u8 FUN_00285574(void);

/* Queues command `id` with `arg`, unless it is suppressed by the current state (id 0x24, or a blocking condition on id / 0x29). */
void FUN_00277b5c(int id, u16 arg)
{
    Globals *globals = g_mapIf;

    if (id == 0x24) {
        return;
    }
    if (FUN_00285574() == 1 && gameMapBlockGetValue(0x29) == 1) {
        return;
    }
    if (id != 0x18 && id < 100 && gameMapBlockGetValue(id) == 1) {
        return;
    }
    globals->command.pending = 1;
    globals->command.flags = 0;
    globals->command.id = id;
    globals->command.arg = arg;
}

} /* extern "C" */
