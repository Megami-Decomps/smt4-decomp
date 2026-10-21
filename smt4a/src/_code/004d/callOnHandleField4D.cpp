#include "shard/Shard004D.h"

extern "C" {

typedef struct HandleRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
} HandleRef;

extern void controllerSetPosition(u32 value);

void callOnHandleField4D(HandleRef **ref)
{
    if (*ref != NULL) {
        controllerSetPosition((*ref)->value);
    }
}

} /* extern "C" */
