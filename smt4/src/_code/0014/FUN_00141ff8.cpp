#include "common.h"

extern "C" {

struct ObjFUN_00142000;

typedef struct Wrapper00141ff8 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ ObjFUN_00142000 *obj;
} Wrapper00141ff8;

u32 FUN_00142000(ObjFUN_00142000 *obj);

/* Passes the wrapper's obj on to FUN_00142000, the function that follows it. */
u32 FUN_00141ff8(Wrapper00141ff8 *wrapper)
{
    return FUN_00142000(wrapper->obj);
}

} /* extern "C" */
