#include "common.h"

extern "C" {

/* The battle UI block: only the request list this unit touches is named. */
typedef struct BtlUiBlock {
    /* 0x0000 */ u8 unk0000[0x28C4];
    /* 0x28C4 */ u8 requestObject[0x74BC - 0x28C4];
    /* 0x74BC */ u16 requests[0x24];
    /* 0x7504 */ s8 requestCount;
} BtlUiBlock;

/* The battle UI globals: only the block pointer is named here. */
typedef struct BtlUiGlobals {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiBlock *block;
} BtlUiGlobals;

extern BtlUiGlobals g_btlUi;

void uiObjectClearRequestState(void *object);

/* Adds `id` to the battle UI request list unless it is already there, then clears the request state. */
void btlUiAddRequest(u32 unused, u16 id)
{
    BtlUiBlock *ui = g_btlUi.block;
    s32 i;

    for (i = 0; i < ui->requestCount; i++) {
        if (ui->requests[i] == id) {
            break;
        }
    }
    if (i >= ui->requestCount) {
        ui->requests[ui->requestCount] = id;
        ui->requestCount++;
    }
    uiObjectClearRequestState(ui->requestObject);
}

} /* extern "C" */
