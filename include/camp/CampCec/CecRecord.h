/* The StreetPass (cec) record the camp's screens exchange. */
#ifndef CAMP_CAMPCEC_CECRECORD_H
#define CAMP_CAMPCEC_CECRECORD_H

#include "common.h"
#include "camp/CampCec/CecProfile.h"
#include <stddef.h>

/* A received StreetPass record (100 bytes; the cec inbox batches and the DataStore entries hold the same record):
 * the sender's summary (PlayerSummary, shard/Shard0032.h, is its prefix) and the demon sent along. */
struct CecReceivedDemon {
    /* 0x00 */ u8 data[0x10];
    /* 0x10 */ u16 id;                    /* 0: none sent (slotNameDisplaySetEntry fills the default) */
    /* 0x12 */ u16 level;
};

typedef struct CampCecReceivedRecord {
    /* 0x00 */ u16 stats[7];
    /* 0x0E */ char name[0x12];
    /* 0x20 */ u8 flags;                   /* bit 2: the sender's name is announced by the script */
    /* 0x21 */ u8 unk21[7];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u16 selectedId;             /* demonId once the record is accepted */
    /* 0x36 */ u8 unk36[0x1A];
    /* 0x50 */ CecReceivedDemon demon;
} CampCecReceivedRecord;

typedef char CampCecReceivedRecordSizeCheck[sizeof(CampCecReceivedRecord) == 100 &&
    offsetof(CampCecReceivedRecord, demon) == 0x50 && sizeof(CecReceivedDemon) == 0x14 &&
    offsetof(CecReceivedDemon, id) == 0x10 ? 1 : -1];

extern "C" void cecRecordSetEquipment(CampCecReceivedRecord *record, CecProfile equipment);

#endif
