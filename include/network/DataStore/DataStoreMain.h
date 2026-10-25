/* network/DataStore/DataStoreMain.c: the network DataStore (server-side save data) client. */
#ifndef NETWORK_DATASTORE_DATASTOREMAIN_H
#define NETWORK_DATASTORE_DATASTOREMAIN_H

#include "common.h"

/* Three words copied together (the request header). */
typedef struct DataStoreWordTriple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
} DataStoreWordTriple;

/* The connection a DataStore request runs on. */
typedef struct DataStoreLink {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 value;
} DataStoreLink;

/* A request in flight; the DataStore polls it through its virtual interface. */
class DataStoreRequest {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual DataStoreWordTriple *getHeader() = 0;   /* 0x0C */
    virtual s32 isDone() = 0;                       /* 0x10 */
    virtual void vfn14() = 0;
    virtual s32 *getResult() = 0;                   /* 0x18 */
    virtual void *getResultObject() = 0;            /* 0x1C */
};

/* The reply to a request: its header and whether it has arrived. */
class DataStoreReply {
public:
    virtual DataStoreWordTriple *getHeader() = 0;   /* 0x00 */
    virtual s32 isDone() = 0;                       /* 0x04 */
};

/* The part of the DataStore state that tracks the request in flight (0x2C..0x48). */
typedef struct DataStoreTransfer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ DataStoreLink *link;        /* the connection the request runs on */
    /* 0x0C */ u32 linkValue;              /* the link's value when the request finished */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ DataStoreRequest *request;  /* the pending request, if any */
    /* 0x18 */ DataStoreReply *reply;      /* the server's reply being awaited, if any */
} DataStoreTransfer;

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
    union {
        /* 0x1C */ u8 unk1C[0xC];
        /* 0x1C */ DataStoreWordTriple header; /* the in-flight request's header */
    };
    union {
        /* 0x28 */ u32 unk28;
        /* 0x28 */ void *result;           /* what the last request returned */
    };
    union {
        /* 0x2C */ u8 unk2C[0x1C];
        /* 0x2C */ u32 transferState[7];
        /* 0x2C */ DataStoreTransfer transfer;
    };
    /* 0x48 */ s32 entries;                /* base of the 10 entries of 100 bytes */
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 unk50;

    /* Ends the current step: stores what it produced and flags the work as done (step 9). */
    void finish(void *produced)
    {
        result = produced;
        busy = 1;
        unk0d = 1;
        unk0e = 1;
        unk10 = 9;
    }

    /* Moves on to the next step, remembering the link's value. */
    void advance(u32 next, u32 value)
    {
        initialState[0] = next;
        transfer.linkValue = value;
    }

    /* Like finish, but ends in step 8. */
    void finishAtStep8(void *produced)
    {
        result = produced;
        busy = 1;
        unk0d = 1;
        unk0e = 1;
        unk10 = 8;
    }
} DataStoreWork;

/* The DataStore controller (smt4a only). */
typedef struct DataStoreCtrl {
    /* 0x00 */ u32 task;
    /* 0x04 */ u8 unk04[0x8];
    /* 0x0C */ DataStoreWork *work;
} DataStoreCtrl;

extern "C" {
void FUN_003344b4(u32 a, u32 b);
}

extern "C" {
u32 objBStateAllowsAction(void);
}

#endif
