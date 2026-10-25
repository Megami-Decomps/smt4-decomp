/* The unit table of the object behind g_engineCleanupOwner (Apocalypse), as the script
 * commands read it. */
#ifndef SHARD_X14_ENGINEUNITS_H
#define SHARD_X14_ENGINEUNITS_H

#include "common.h"
#include <stddef.h>

/* One 0x150-byte unit entry. */
typedef struct EngineUnit {
    /* 0x00 */ s8 rank;        /* below 25: the slot's own record; from 25: a table record */
    /* 0x01 */ u8 unk01[0x65];
    /* 0x66 */ u16 id;
    /* 0x68 */ u8 unk68[0xE8];
} EngineUnit;

typedef struct EngineUnits {
    /* 0x0000 */ u8 unk0000[0x4398];
    /* 0x4398 */ u8 exitMode;  /* 1: stop the BGM, 3: play exitSe */
    /* 0x4399 */ u8 unk4399;
    /* 0x439A */ u16 exitSe;
    /* 0x439C */ u8 unk439C[0x90];
    /* 0x442C */ EngineUnit units[37];
    /* 0x74BC */ u8 unk74BC[4];
    /* 0x74C0 */ s32 current;  /* index of the active unit */
    union {
        /* 0x74C4 */ u8 unk74C4[0xA6C];
        struct {
            u8 prefix[0x78];
            /* 0x753C */ u8 reserve[3];
            /* 0x753F */ u8 active[24];
            /* 0x7557 */ u8 pending;
        } partyMarkers;
    };
    /* 0x7F30 */ u32 job;
} EngineUnits;

typedef struct EngineUnitsRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EngineUnits *instance;
} EngineUnitsRef;

/* A record with its id at 0x62. */
typedef struct EngineUnitRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} EngineUnitRecord;

typedef char EngineUnitsOffsets[sizeof(EngineUnit) == 0x150 && offsetof(EngineUnit, id) == 0x66 &&
    offsetof(EngineUnits, units) == 0x442C && offsetof(EngineUnits, current) == 0x74C0 &&
    offsetof(EngineUnits, exitMode) == 0x4398 && offsetof(EngineUnits, exitSe) == 0x439A &&
    offsetof(EngineUnits, job) == 0x7F30 &&
    offsetof(EngineUnitRecord, id) == 0x62 ? 1 : -1];
typedef char EngineUnitsPartyMarkerOffsetsCheck[
    offsetof(EngineUnits, partyMarkers.reserve) == 0x753C &&
    offsetof(EngineUnits, partyMarkers.active) == 0x753F &&
    offsetof(EngineUnits, partyMarkers.pending) == 0x7557 &&
    sizeof(EngineUnits) == 0x7F34 ? 1 : -1];


#endif
