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
} DAT_00472a38;

void FUN_002399bc(u32 a, u32 b)
{
    if (DAT_00472a38.handler != NULL) {
        DAT_00472a38.handler->vtbl->run(DAT_00472a38.handler, a, b);
    }
}

} /* extern "C" */
