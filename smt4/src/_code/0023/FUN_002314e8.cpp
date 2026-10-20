#include "common.h"

extern "C" {

typedef struct ObjFUN_002314e8 {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0C */ u8 flag;
    /* 0x0D */ u8 unk0d[0x0b];
    /* 0x18 */ u32 unk18;
} ObjFUN_002314e8;

void FUN_002316e8(ObjFUN_002314e8 *obj, int value);

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002314e8_hook(void *obj, int value);

void FUN_002314e8(ObjFUN_002314e8 *obj, int value)
{
    obj->unk18 = 0;
    if (value >= 100) {
        obj->flag = 0;
        FUN_002316e8(obj, value);
    } else {
        obj->flag = 1;
        FUN_002314e8_hook(obj, value);
    }
}

} /* extern "C" */
