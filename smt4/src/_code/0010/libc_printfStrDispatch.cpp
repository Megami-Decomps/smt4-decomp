/* Dispatches to the object's handler hook if it has one (a weak call armlink removed), else to libc_printfStr; returns 1. */
#include "common.h"

extern "C" {

struct Obj00100338 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *handler;
};

void libc_printfStr(Obj00100338 *obj, u32 a, u32 b);
__weak void FUN_00100338_hook(Obj00100338 *obj, u32 a, u32 b);

u32 libc_printfStrDispatch(Obj00100338 *obj, u32 a, u32 b)
{
    if (obj->handler != NULL) {
        FUN_00100338_hook(obj, a, b);
    } else {
        libc_printfStr(obj, a, b);
    }
    return 1;
}

}
