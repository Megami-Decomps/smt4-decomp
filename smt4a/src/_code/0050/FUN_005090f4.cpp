#include "common.h"

extern "C" {

struct ObjFUN_005090fc;

typedef struct Wrapper005090f4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ ObjFUN_005090fc *obj;
} Wrapper005090f4;

u32 FUN_005090fc(ObjFUN_005090fc *obj);

/* Passes the wrapper's obj on to FUN_005090fc, the function that follows it. */
u32 FUN_005090f4(Wrapper005090f4 *wrapper)
{
    return FUN_005090fc(wrapper->obj);
}

} /* extern "C" */
