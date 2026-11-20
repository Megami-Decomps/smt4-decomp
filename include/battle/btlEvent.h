/* battle/btlEvent.c: battle events. */
#ifndef BATTLE_BTLEVENT_H
#define BATTLE_BTLEVENT_H

#include "common.h"
#include <stddef.h>
#include "script/scrScriptProcess.h"
struct ScriptProcess;

/* The event block, kept by a module global (Shin Megami Tensei IV layout; allocated with 0x100 bytes). */
typedef struct BtlEvent {
    /* 0x00 */ union { u32 unk00; u32 state; };
    /* 0x04 */ union { u8 unk04[4]; u32 flags; };
    /* 0x08 */ void *dataA;     /* heap blocks */
    /* 0x0C */ void *dataB;
    /* 0x10 */ union { void *dataC; ScriptProcess *runner; };
    /* 0x14 */ ScriptProcess *process;   /* script process object */
    /* 0x18 */ void *entries;            /* the event table's records */
    /* 0x1C */ u32 entryCount;
    /* 0x20 */ s32 entry;                /* script entry to start, negative while none is chosen */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ s32 frames;               /* frames the script has run */
    /* 0x2C */ u8 stage;                 /* BTL_EVENT_PREPARE's progress, 0 to 3 */
    /* 0x2D */ u8 unk2D[0xD3];
} BtlEvent;
typedef char BtlEventRunnerLayoutCheck[(sizeof(BtlEvent) == 0x100 && offsetof(BtlEvent, flags) == 4 && offsetof(BtlEvent, runner) == 0x10 &&
    offsetof(BtlEvent, entries) == 0x18 && offsetof(BtlEvent, entry) == 0x20 && offsetof(BtlEvent, frames) == 0x28 &&
    offsetof(BtlEvent, stage) == 0x2C) ? 1 : -1];

/* BtlEvent::state. Each state hands over to the next in the same frame when its wait is already over. */
enum {
    BTL_EVENT_IDLE = 0,
    BTL_EVENT_LOAD_TABLE = 1,       /* request the event table */
    BTL_EVENT_WAIT_TABLE = 2,
    BTL_EVENT_LOAD_MESSAGES = 3,    /* request the message bank */
    BTL_EVENT_WAIT_MESSAGES = 4,
    BTL_EVENT_LOAD_SCRIPT = 5,      /* request the script file */
    BTL_EVENT_WAIT_SCRIPT = 6,
    BTL_EVENT_CREATE_SCRIPT = 7,    /* build the script process */
    BTL_EVENT_PREPARE = 8,          /* bring the battle's auxiliary resources up */
    BTL_EVENT_START_SCRIPT = 9,
    BTL_EVENT_RUN_SCRIPT = 10
};

/* Work area of the job that owns the event block. */
typedef struct BtlEventOwner {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 job;         /* job stopped when the block is destroyed */
} BtlEventOwner;

/* The same work area in Apocalypse. */
typedef struct BtlEventOwnerA {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ u32 job;         /* job stopped when the block is destroyed */
} BtlEventOwnerA;

#endif
