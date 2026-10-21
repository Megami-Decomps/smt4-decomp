#include "common.h"

struct HidParameters {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

extern "C" {

extern HidParameters DAT_0040b750;
extern u32 g_nnHidServiceHandle;
extern s32 FUN_0011c320(u32 *handle, u32 value);

/* Applies the stored HID service parameter. */
s32 FUN_0010fcdc(void)
{
    return FUN_0011c320(&g_nnHidServiceHandle, DAT_0040b750.value);
}

} /* extern "C" */
