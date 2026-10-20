#include "common.h"

extern "C" {

extern u32 FUN_002907a8(void);

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 timestamp;
} Obj;

/* 1 when the timestamp is unset, in the future, or more than 900 ticks old. */
u32 FUN_00381914(Obj *obj)
{
    u32 now;
    u32 result;

    if (((obj->timestamp == 0) || (now = FUN_002907a8(), now < obj->timestamp)) ||
        (FUN_002907a8() - obj->timestamp >= 901)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
