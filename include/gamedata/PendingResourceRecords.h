#ifndef GAMEDATA_PENDINGRESOURCERECORDS_H
#define GAMEDATA_PENDINGRESOURCERECORDS_H

#include "common.h"
#include <stddef.h>

struct PendingResourceRecord {
    u8 registeredId;
    u8 unk01[3];
    const char *resource;
    char name[0x80];
    u8 flags; /* 0x88 */
    u8 unk89[3];
};
struct PendingResourceOwner {
    u8 unk0000[0x30E0];
    PendingResourceRecord records[3]; /* 0x30E0 */
};
typedef char PendingResourceRecordLayoutCheck[sizeof(PendingResourceRecord) == 0x8C &&
    offsetof(PendingResourceRecord, flags) == 0x88 &&
    offsetof(PendingResourceOwner, records) == 0x30E0 ? 1 : -1];

#endif
