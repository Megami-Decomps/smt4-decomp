#include "common.h"

extern "C" {

extern u32 saveBlockGetPlaySeconds(void);

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 timestamp;
} Obj;

/* 1 when the timestamp is unset, in the future, or more than 900 ticks old. */
u32 timerStampIsExpired(Obj *obj)
{
    u32 now;
    u32 result;

    if (((obj->timestamp == 0) || (now = saveBlockGetPlaySeconds(), now < obj->timestamp)) ||
        (saveBlockGetPlaySeconds() - obj->timestamp >= 901)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
