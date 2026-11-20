#include "shard/Shard0043.h"

extern "C" {

typedef struct VHandler VHandler;

typedef struct VHandlerVtbl {
    /* 0x00 */ void (*slot0)(VHandler *self, u32 a, u32 b);
} VHandlerVtbl;

struct VHandler {
    /* 0x00 */ const VHandlerVtbl *vtbl;
};

typedef struct HandlerRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ VHandler *handler;
} HandlerRef;

extern HandlerRef g_handlerRefForward;

/* Forwards (a, b) to the global handler object, if one is installed (tail call). */
void handlerRefForward(u32 a, u32 b)
{
    if (g_handlerRefForward.handler != NULL) {
        g_handlerRefForward.handler->vtbl->slot0(g_handlerRefForward.handler, a, b);
    }
}

} /* extern "C" */
