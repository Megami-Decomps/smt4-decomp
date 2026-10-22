#include "common.h"

struct HandleStatus;
struct HandleStatusVtable {
    /* 0x00 */ void *destroy;
    /* 0x04 */ void *deleteObject;
    /* 0x08 */ void *unk08;
    /* 0x0C */ void (*readStatus)(HandleStatus *);
};
struct HandleStatus {
    /* 0x00 */ HandleStatusVtable *vtable;
};

/* Dispatch the handle holder's status operation. */
extern "C" void handleHolderDispatchStatus(HandleStatus *holder)
{
    holder->vtable->readStatus(holder);
}
