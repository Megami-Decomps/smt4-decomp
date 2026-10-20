#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 flags;
} Obj;

/* Sets flag bit `bit`. */
void FUN_0026e61c(Obj *obj, u32 bit)
{
    obj->flags = obj->flags | (u16)(1 << (bit & 0xff));
}

} /* extern "C" */
