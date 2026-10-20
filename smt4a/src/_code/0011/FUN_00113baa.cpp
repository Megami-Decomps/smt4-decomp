#include "common.h"

extern "C" {

void FUN_002e9f00(u8 *member, s32 value);

typedef struct Notifier {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 member80[0x10];
    /* 0x90 */ s8 pending;
} Notifier;

/* Notifies the embedded member (value 4) if `pending` is 1; always returns 1. */
u32 FUN_00113baa(Notifier *object)
{
    if (object->pending == 1) {
        FUN_002e9f00(object->member80, 4);
    }
    return 1;
}

} /* extern "C" */
