/* Data table 21 (0x15): 100-byte records keyed by an id byte. */
#ifndef GAMEDATA_X14_TABLE21_H
#define GAMEDATA_X14_TABLE21_H

#include "gamedata/DataTable.h"

typedef struct Table21Entry {
    /* 0x00 */ u8 id;
    union {
        /* 0x01 */ u8 unk01[0x63];
        struct {
            u8 unk01[3];
            u8 payload[0x60]; /* 0x04 */
        } data;
    };
} Table21Entry;

typedef char Table21EntrySizeCheck[sizeof(Table21Entry) == 0x64 ? 1 : -1];
typedef char Table21EntryPayloadOffsetCheck[offsetof(Table21Entry, data.payload) == 4 ? 1 : -1];

#endif
