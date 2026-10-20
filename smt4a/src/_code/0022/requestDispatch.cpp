#include "common.h"

extern "C" {

/* 0x44-byte table entry; the handler pointer sits at +0xc. */
typedef struct {
    u8 unk00[0xc];
    void (*handler)(void *arg);     /* 0x0c */
    u8 unk10[0x34];
} HandlerEntry;

/* Request: entry index at 4, handler argument at 8. */
typedef struct {
    u8 unk00[4];
    u16 index;      /* 0x04 */
    u8 unk06[2];
    void *arg;      /* 0x08 */
} Request;

extern HandlerEntry g_handlerTable[];

/* Dispatches the request to its table entry's handler. */
void requestDispatch(Request *request)
{
    g_handlerTable[request->index].handler(request->arg);
}

} /* extern "C" */
