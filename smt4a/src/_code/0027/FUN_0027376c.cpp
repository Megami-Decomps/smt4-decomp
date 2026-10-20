/* NON_MATCHING: register naming only: retail uses r1 for the global pointer and r2 for the index temp (swapped here) */
/* Marks the slot's request as pending and kicks it off, if the slot has one. */
#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 handle;
    /* 0x60 */ u8 pending;
    /* 0x61 */ u8 unk61[3];
} Request; /* 0x64 */

typedef struct RequestTable {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Request requests[1];
} RequestTable;

extern RequestTable *g_eplSlots;

extern void FUN_0019c8c0(u32 handle);

void FUN_0027376c(s32 index)
{
    Request *request = &g_eplSlots->requests[index];

    if (request->handle != 0) {
        request->pending = 1;
        FUN_0019c8c0(request->handle);
    }
}

}
