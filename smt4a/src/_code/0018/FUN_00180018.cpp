#include "common.h"

extern "C" {

typedef struct Message {
    /* 0x00 */ s32 type;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 value;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 extra;
} Message;

/* For a type-4 message returns its value and stores its extra word in `*extra`; otherwise stores 0 and returns 0. */
s32 FUN_00180018(Message *message, s32 *extra)
{
    s32 value;

    *extra = 0;
    if (message->type == 4) {
        *extra = message->extra;
        value = message->value;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
