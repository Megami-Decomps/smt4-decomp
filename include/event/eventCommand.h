/* event/eventCommand.c: event command execution. */
#ifndef EVENT_EVENTCOMMAND_H
#define EVENT_EVENTCOMMAND_H

#include "common.h"

/* State of the running command. */
typedef struct EventCommand {
    /* 0x00 */ u32 job;      /* job that runs the command */
    /* 0x04 */ u8 unk04[0x0C];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
} EventCommand;

/* The command's state and a second job handle, side by side in memory. */
typedef struct EventCommandGlobals {
    /* 0x00 */ EventCommand *command;
    /* 0x04 */ u32 job;      /* job stopped together with the command */
} EventCommandGlobals;

#endif
