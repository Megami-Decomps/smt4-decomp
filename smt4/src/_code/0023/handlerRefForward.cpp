#include "common.h"

extern "C" {

struct Handler;
typedef struct HandlerVtbl {
    /* 0x0 */ void (*run)(struct Handler *handler, u32 a, u32 b);
} HandlerVtbl;

typedef struct Handler {
    /* 0x0 */ HandlerVtbl *vtbl;
} Handler;

extern struct {
    u8 unk0[4];
    Handler *handler;
} g_handlerRefForward;

void handlerRefForward(u32 a, u32 b)
{
    if (g_handlerRefForward.handler != NULL) {
        g_handlerRefForward.handler->vtbl->run(g_handlerRefForward.handler, a, b);
    }
}

} /* extern "C" */
