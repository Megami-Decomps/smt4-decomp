#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ void (*handler)(u32 arg, u32 value);
    /* 0x30 */ u8 unk30[0x14];
} HandlerEntry;

typedef struct Request {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 index;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u32 arg;
} Request;

extern HandlerEntry g_handlerTable[];

void FUN_0021a4dc(Request *request, u32 value)
{
    void (*handler)(u32 arg, u32 value) = g_handlerTable[request->index].handler;

    if (handler != NULL) {
        handler(request->arg, value);
    }
}

} /* extern "C" */
