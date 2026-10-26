#include "common.h"

struct HidParameters {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

extern "C" {

extern HidParameters DAT_0053f52c;
extern u32 g_nnHidServiceHandle;
extern s32 FUN_00159468(u32 *handle, u32 value);

/* Applies the stored HID service parameter. */
s32 FUN_00146eb0(void)
{
    return FUN_00159468(&g_nnHidServiceHandle, DAT_0053f52c.value);
}

} /* extern "C" */
