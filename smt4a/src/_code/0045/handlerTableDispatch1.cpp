#include "shard/Shard0045.h"

extern "C" {

typedef struct HandlerKey {
    /* 0x00 */ s32 kind;
} HandlerKey;

extern void (*g_handlerTable1[2])(s32 *obj);

/* Calls the handler for the object's kind: 0x80000000 uses entry 0, 0x40000000 entry 1. */
void handlerTableDispatch1(HandlerKey **ref)
{
    HandlerKey *key = *ref;

    if (key->kind == -0x7FFFFFFF - 1) {
        g_handlerTable1[0]((s32 *)key);
    } else if (key->kind == 0x40000000) {
        g_handlerTable1[1]((s32 *)key);
    }
}

} /* extern "C" */
