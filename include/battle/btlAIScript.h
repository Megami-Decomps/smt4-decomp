/* battle/btlAIScript.c: the battle AI script runner. */
#ifndef BATTLE_BTLAISCRIPT_H
#define BATTLE_BTLAISCRIPT_H

#include "common.h"

/* The script runner's state, one heap block owned by a module global. */
typedef struct BtlAiScript {
    /* 0x00 */ void *data;    /* heap block the script runs on */
    /* 0x04 */ void *process; /* script process object (freed with the script-process destroyer) */
} BtlAiScript;

/* Work area of the job that owns the script runner (Shin Megami Tensei IV). */
typedef struct BtlAiScriptOwner {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 job;       /* job stopped when the runner goes away */
} BtlAiScriptOwner;

/* The same work area in Apocalypse. */
typedef struct BtlAiScriptOwnerA {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u32 job;       /* job stopped when the runner goes away */
} BtlAiScriptOwnerA;

#endif
