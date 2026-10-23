/* The battle script object (smt4) and the scripted unit's flags, shared by btlScriptQueueRequestIfIdle and FUN_00338c38. */
#ifndef SHARD_W4_MATCH6_BTLSCRIPT_H
#define SHARD_W4_MATCH6_BTLSCRIPT_H

#include "common.h"
#include <stddef.h>

#define BTL_UNIT_FLAG_BUSY_A 0x80
#define BTL_UNIT_FLAG_BUSY_B 0x1000

typedef struct BtlScriptUnit {
    /* 0x0 */ u32 flags;
} BtlScriptUnit;

typedef struct BtlScriptStatusRecord {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s16 unitId;
    /* 0x06 */ u8 statusA;
    /* 0x07 */ u8 statusB;
} BtlScriptStatusRecord;
typedef char BtlScriptStatusRecordLayout[
    sizeof(BtlScriptStatusRecord) == 8 &&
    offsetof(BtlScriptStatusRecord, statusA) == 6 &&
    offsetof(BtlScriptStatusRecord, statusB) == 7 ? 1 : -1];

typedef struct BtlScript {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
    /* 0x44A4 */ u8 unk44a4[0x10];
    /* 0x44B4 */ u8 busyA;
    /* 0x44B5 */ u8 unk44b5[2];
    /* 0x44B7 */ u8 busyB;
    union {
        /* 0x44B8 */ u8 unk44b8[0x49E0 - 0x44B8];
        /* 0x44B8 */ BtlScriptStatusRecord unitStatus[128];
    };
    /* 0x49E0 */ u32 pending;
} BtlScript;
typedef char BtlScriptUnitStatusLayout[
    offsetof(BtlScript, unitStatus) == 0x44b8 &&
    sizeof(BtlScript) == 0x49e4 ? 1 : -1];

#endif
