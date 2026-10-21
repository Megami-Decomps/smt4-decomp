#include "common.h"

extern "C" {

struct CampCecViewWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 handle;
    /* 0x10 */ u8 unk10[0xA4];
    /* 0xB4 */ f32 value;
};
extern CampCecViewWork *g_campCecView;
void FUN_0019ff9c(u32 handle, f32 *value);

/* Update the camp view using its current handle and value. */
s32 campCecViewUpdateValue(void)
{
    FUN_0019ff9c(g_campCecView->handle, &g_campCecView->value);
    return 0;
}

}
