#include "common.h"

extern "C" {

typedef struct HandlerEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ void (*handler)(u32 arg, s32 value);
    /* 0x28 */ u8 unk28[0x1C];
} HandlerEntry;

typedef struct Request {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 index;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u32 arg;
} Request;

extern HandlerEntry g_handlerTable[]; /* 0x464110 */

void handlerTableCallWithValueB(Request *request, s32 value)
{
    void (*handler)(u32 arg, s32 value) = g_handlerTable[request->index].handler;

    if (handler != NULL) {
        handler(request->arg, value);
    }
}

} /* extern "C" */
