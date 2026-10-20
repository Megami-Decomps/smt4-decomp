#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void (*handler)(u32 arg);
    /* 0x2C */ u8 unk2C[0x18];
} HandlerEntry;

typedef struct Request {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 index;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u32 arg;
} Request;

extern HandlerEntry g_handlerTable[];

void handlerTableCall(Request *request)
{
    void (*handler)(u32 arg) = g_handlerTable[request->index].handler;

    if (handler != NULL) {
        handler(request->arg);
    }
}

} /* extern "C" */
