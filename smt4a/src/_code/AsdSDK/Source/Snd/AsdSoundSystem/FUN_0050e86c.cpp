/* NON_MATCHING: retail keeps the defaults pointer in ip and pools it before 1.0f; the build keeps it in r0 and pools 1.0f first. */
#include "common.h"
#include "util/PackNibbles.h"
struct StartupVectorDefaults {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ f32 unk1C[4];
    /* 0x2C */ f32 vectors[4][4];
};
extern "C" {
extern StartupVectorDefaults DAT_006306f8;
extern u32 DAT_0063098c[5];
void vectorSetAllOne(f32*);
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void (*)(f32*), u32, u32);

void FUN_0050e86c(void)
{
    DAT_006306f8.unk1C[0] = 1.0f;
    DAT_006306f8.unk1C[1] = 1.0f;
    DAT_006306f8.unk1C[2] = 1.0f;
    DAT_006306f8.unk1C[3] = 1.0f;
    __aeabi_vec_ctor_nocookie_nodtor(DAT_006306f8.vectors, vectorSetAllOne, sizeof(DAT_006306f8.vectors[0]), 4);
    DAT_0063098c[0] = packNibblesAndByte(6, 7, 0);
    DAT_0063098c[1] = packNibblesAndByte(6, 1, 0);
    DAT_0063098c[2] = packNibblesAndByte(6, 1, 2);
    DAT_0063098c[3] = packNibblesAndByte(5, 0, 1);
    DAT_0063098c[4] = packNibblesAndByte(0, 2, 0);
}
}
