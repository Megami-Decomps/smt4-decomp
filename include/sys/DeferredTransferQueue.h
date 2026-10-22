#ifndef SYS_DEFERREDTRANSFERQUEUE_H
#define SYS_DEFERREDTRANSFERQUEUE_H

#include "common.h"
#include <stddef.h>

struct DeferredTransferSlot {
    u8 prefix[0x38];
    u32 limit;
    u8 unk3C[0x14];
    u32 position;
    u8 unk54[0x1C];
};
struct DeferredTransferState {
    u8 prefix[8];
    DeferredTransferSlot *slots;
    u8 unk0C[8];
    u32 count;
    u32 produced;
    u32 consumed;
};
struct DeferredTransferJob {
    DeferredTransferSlot *slot;
    void *data;
    u32 size;
};

typedef char DeferredTransferSlotLayoutCheck[sizeof(DeferredTransferSlot) == 0x70 &&
    offsetof(DeferredTransferSlot, limit) == 0x38 &&
    offsetof(DeferredTransferSlot, position) == 0x50 ? 1 : -1];
typedef char DeferredTransferStateLayoutCheck[sizeof(DeferredTransferState) == 0x20 &&
    offsetof(DeferredTransferState, slots) == 8 &&
    offsetof(DeferredTransferState, count) == 0x14 &&
    offsetof(DeferredTransferState, produced) == 0x18 &&
    offsetof(DeferredTransferState, consumed) == 0x1C ? 1 : -1];
typedef char DeferredTransferJobLayoutCheck[sizeof(DeferredTransferJob) == 0xC &&
    offsetof(DeferredTransferJob, data) == 4 &&
    offsetof(DeferredTransferJob, size) == 8 ? 1 : -1];

#endif
