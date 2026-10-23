/* battle/btlEvent.c: battle events. */
#ifndef BATTLE_BTLEVENT_H
#define BATTLE_BTLEVENT_H

#include "common.h"
#include <stddef.h>
struct ScriptRunState;

/* The event block, kept by a module global (Shin Megami Tensei IV layout). */
typedef struct BtlEvent {
    /* 0x00 */ union { u32 unk00; u32 state; };
    /* 0x04 */ union { u8 unk04[4]; u32 flags; };
    /* 0x08 */ void *dataA;     /* heap blocks */
    /* 0x0C */ void *dataB;
    /* 0x10 */ union { void *dataC; ScriptRunState *runner; };
    /* 0x14 */ void *process;   /* script process object */
} BtlEvent;
typedef char BtlEventRunnerLayoutCheck[(sizeof(BtlEvent) == 0x18 && offsetof(BtlEvent, flags) == 4 && offsetof(BtlEvent, runner) == 0x10) ? 1 : -1];

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
