/* battle/btlAIScript.c: the battle AI script runner. */
#ifndef BATTLE_BTLAISCRIPT_H
#define BATTLE_BTLAISCRIPT_H

#include "common.h"
#include <stddef.h>

/* The script runner's state, one heap block owned by a module global. */
typedef struct BtlAiScript {
    /* 0x00 */ void *data;    /* heap block the script runs on */
    /* 0x04 */ void *process; /* script process object (freed with the script-process destroyer) */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 unk0C;     /* cleared when the runner is created */
    /* 0x10 */ char path[0x80]; /* script file name the runner loads */
} BtlAiScript;

/* The demon record a battle actor points at: its demon id at 0x02. */
typedef struct BtlAiScriptDemon {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 id;
} BtlAiScriptDemon;

/* The battle actor whose AI script is loaded (Apocalypse). */
typedef struct BtlAiScriptActor {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ BtlAiScriptDemon *demon;
} BtlAiScriptActor;

/* The Apocalypse add-on content system: the demon id whose DLC AI script is in use at 0x460. */
typedef struct BtlAiScriptAocSystem {
    /* 0x000 */ u8 unk000[0x460];
    /* 0x460 */ s32 aiDemonId;
} BtlAiScriptAocSystem;

/* Work area of the job that owns the script runner (Shin Megami Tensei IV). */
typedef struct BtlAiScriptOwner {
    /* 0x00 */ u32 id;        /* passed to the runner's job when it is created */
    /* 0x04 */ u8 unk04[0x44];
    /* 0x48 */ u32 job;       /* job stopped when the runner goes away */
} BtlAiScriptOwner;

/* The same work area in Apocalypse. */
typedef struct BtlAiScriptOwnerA {
    /* 0x00 */ void *owner;   /* handed to the runner's job when it is created */
    /* 0x04 */ u8 unk04[0x68];
    /* 0x6C */ u32 job;       /* job stopped when the runner goes away */
} BtlAiScriptOwnerA;

typedef char BtlAiScriptAddedOffsets[offsetof(BtlAiScript, path) == 0x10 &&
    offsetof(BtlAiScriptDemon, id) == 0x02 && offsetof(BtlAiScriptActor, demon) == 0x28 &&
    offsetof(BtlAiScriptAocSystem, aiDemonId) == 0x460 &&
    offsetof(BtlAiScriptOwnerA, job) == 0x6C ? 1 : -1];

#endif
