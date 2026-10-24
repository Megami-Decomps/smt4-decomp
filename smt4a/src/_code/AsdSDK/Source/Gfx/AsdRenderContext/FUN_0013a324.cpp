/* NON_MATCHING: needs `_ZN10FloatStateC1Ev` renamed to _ZN10FloatStateC1Ev (the three FloatState member constructors); the allocation, null check, chained constructor results and the final tail call match, but armcc keeps the context pointer in r1 and rebases the four default stores differently, and the file-name literal is placed after the pool by retail */
#include "classes/FloatState.h"

extern "C" {
void *FUN_00178b04(u32 size, const char *file, s32 line);
void FUN_00145adc(void);
}

/* The render context: three float-pair states and the four-float default at 0x11d8. */
class AsdRenderContext {
public:
    AsdRenderContext()
    {
        defaults[0] = 1.0f;
        defaults[1] = 1.0f;
        defaults[2] = 1.0f;
        defaults[3] = 1.0f;
    }

    static void *operator new(u32 size, const char *file, s32 line) throw() { return FUN_00178b04(size, file, line); }

    /* 0x0000 */ u8 unk0000[0x4a0];
    /* 0x04a0 */ FloatState stateA;
    /* 0x0500 */ u8 unk0500[0xba0 - 0x500];
    /* 0x0ba0 */ FloatState stateB;
    /* 0x0c00 */ u8 unk0c00[0x10ac - 0xc00];
    /* 0x10ac */ FloatState stateC;
    /* 0x110c */ u8 unk110c[0x11d8 - 0x110c];
    /* 0x11d8 */ f32 defaults[4];
    /* 0x11e8 */ u8 unk11e8[0x13a8 - 0x11e8];
};

extern "C" {
extern AsdRenderContext *g_renderCtx;

/* Creates the global render context. */
void FUN_0013a324(void)
{
    g_renderCtx = new ("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\AsdRenderContext.cpp", 36) AsdRenderContext;
    FUN_00145adc();
}
}
