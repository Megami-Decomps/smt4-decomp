/* The StreetPass (cec) record the camp's screens exchange. */
#ifndef CAMP_CAMPCEC_CECRECORD_H
#define CAMP_CAMPCEC_CECRECORD_H

#include "common.h"

/* A received StreetPass record (100 bytes; the cec inbox batches and the DataStore entries hold the same record):
 * the sender's summary (PlayerSummary, shard/Shard0032.h, is its prefix) and the demon sent along. */
typedef struct CampCecReceivedRecord {
    /* 0x00 */ u16 stats[7];
    /* 0x0E */ char name[0x12];
    /* 0x20 */ u8 flags;                   /* bit 2: the sender's name is announced by the script */
    /* 0x21 */ u8 unk21[7];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u16 selectedId;             /* demonId once the record is accepted */
    /* 0x36 */ u8 unk36[0x1A];
    /* 0x50 */ u8 demon[0x10];             /* the demon's block: with demonId and demonLevel it is compared and cleared as 0x14 bytes */
    /* 0x60 */ u16 demonId;                /* 0: none sent (slotNameDisplaySetEntry fills the default) */
    /* 0x62 */ u16 demonLevel;
} CampCecReceivedRecord;

typedef char CampCecReceivedRecordSizeCheck[sizeof(CampCecReceivedRecord) == 100 ? 1 : -1];

#endif
