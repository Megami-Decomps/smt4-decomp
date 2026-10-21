/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x1AA]; u16 state; struct { u8 unk00[8]; u8 value; } *child; };
void FUN_002e93c2(void *value);
/* Releases the active child field and clears its state. */
void FUN_002fd412(Object *object) {
    if (object->state != 0) FUN_002e93c2(&object->child->value);
    object->state = 0;
}
}
