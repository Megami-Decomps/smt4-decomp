#include "common.h"

extern "C" {

typedef struct SlotFUN_0017d158 {
    u8 unk[0x4c];
} SlotFUN_0017d158;

typedef struct ObjFUN_0017d158 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SlotFUN_0017d158 slots[2];
    /* 0x9C */ u32 current;
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ u32 unkA4;
} ObjFUN_0017d158;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0017d158_hook(void *slot);

void FUN_0017d158(ObjFUN_0017d158 *obj)
{
    obj->unkA0 = 0;
    obj->current ^= 1;
    obj->unkA4 = 0;
    FUN_0017d158_hook(&obj->slots[obj->current]);
}

} /* extern "C" */
