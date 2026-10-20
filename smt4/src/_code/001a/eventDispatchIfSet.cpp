#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ void (*handler)(u32 arg);
    /* 0x20 */ u8 unk20[0x24];
} HandlerEntry;

typedef struct Request {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 index;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u32 arg;
} Request;

extern HandlerEntry g_handlerTable[];

void eventDispatchIfSet(Request *request)
{
    HandlerEntry *entry = &g_handlerTable[request->index];
    void (*handler)(u32 arg) = entry->handler;

    if (handler != NULL) {
        handler(request->arg);
    }
}

} /* extern "C" */
