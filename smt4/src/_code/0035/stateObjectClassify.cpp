#include "common.h"

extern "C" {

typedef struct StateObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
} StateObject;

/* 0 without an object, 2 while it is in state 0 or 1, else 1. */
u32 stateObjectClassify(u32 unused, StateObject *object)
{
    u32 result;

    if (object == NULL) {
        result = 0;
    } else if (object->state == 0 || object->state == 1) {
        result = 2;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
