/* network/DataStore/DataStoreMain.c: the network DataStore (server-side save data) client. */
#ifndef NETWORK_DATASTORE_DATASTOREMAIN_H
#define NETWORK_DATASTORE_DATASTOREMAIN_H

#include "common.h"

/* The DataStore client's state, 0x54 bytes. */
typedef struct DataStoreWork {
    /* 0x00 */ s32 state;                  /* 0..15, 14 = finished */
    union {
        /* 0x04 */ u8 unk04[0x8];
        /* 0x04 */ u32 initialState[2];
    };
    /* 0x0C */ u8 busy;
    /* 0x0D */ u8 unk0d;
    /* 0x0E */ u8 unk0e;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 ready;                   /* the store is ready to be read */
    /* 0x15 */ u8 unk15[0x3];
    /* 0x18 */ u32 unk18;                  /* initialised to 0xE7E3FFFF */
    /* 0x1C */ u8 unk1C[0xC];
    /* 0x28 */ u32 unk28;
    union {
        /* 0x2C */ u8 unk2C[0x1C];
        /* 0x2C */ u32 transferState[7];
    };
    /* 0x48 */ s32 entries;                /* base of the 10 entries of 100 bytes */
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 unk50;
} DataStoreWork;

/* The DataStore controller (smt4a only). */
typedef struct DataStoreCtrl {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 unk04[0x8];
    /* 0x0C */ DataStoreWork *work;
} DataStoreCtrl;

#endif
