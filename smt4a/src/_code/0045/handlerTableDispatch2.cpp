#include "shard/Shard0045.h"

extern "C" {

typedef struct HandlerKey {
    /* 0x00 */ s32 kind;
} HandlerKey;

extern void (*DAT_0059dae4[2])(s32 *obj);

/* Calls the handler for the object's kind: 0x80000000 uses entry 0, 0x40000000 entry 1. */
void handlerTableDispatch2(HandlerKey **ref)
{
    HandlerKey *key = *ref;

    if (key->kind == -0x7FFFFFFF - 1) {
        DAT_0059dae4[0]((s32 *)key);
    } else if (key->kind == 0x40000000) {
        DAT_0059dae4[1]((s32 *)key);
    }
}

} /* extern "C" */
