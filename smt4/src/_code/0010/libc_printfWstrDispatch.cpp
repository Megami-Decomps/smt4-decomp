#include "common.h"

extern "C" {

typedef struct Obj00100974 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 handle;
} Obj00100974;

void libc_printfWstr(void *obj, u32 a, u32 b);
__weak void FUN_00100974_hook(void *obj, u32 a, u32 b);

int libc_printfWstrDispatch(Obj00100974 *obj, u32 a, u32 b)
{
    if (obj->handle != 0) {
        FUN_00100974_hook(obj, a, b);
    } else {
        libc_printfWstr(obj, a, b);
    }
    return 1;
}

} /* extern "C" */
