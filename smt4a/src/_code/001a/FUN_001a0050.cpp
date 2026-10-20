/* Passes the item to the handler's virtual method at slot 3; returns 0xE0E046BC if either pointer is NULL. */
#include "common.h"

extern "C" {

struct Handler;

typedef struct HandlerVtbl {
    /* 0x00 */ void *slots[3];
    /* 0x0C */ u32 (*method3)(struct Handler *handler, void *item);
} HandlerVtbl;

typedef struct Handler {
    /* 0x00 */ HandlerVtbl *vtbl;
} Handler;

u32 FUN_001a0050(void *item, Handler *handler)
{
    if (item != NULL && handler != NULL) {
        return handler->vtbl->method3(handler, item);
    }
    return 0xE0E046BC;
}

}
