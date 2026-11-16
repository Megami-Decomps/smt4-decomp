/* NON_MATCHING: allocation, null path, member constructors and tail call match; retail recovers the context pointer first (two subs from stateC) and addresses the 0x11d8 defaults from it (add #4096; add #472), the build bases them on stateC (+300); the file-name literal also sits after the pool in retail. */
#include "classes/FloatState.h"

extern "C" {
void *FUN_00178b04(u32 size, const char *file, s32 line);
void FUN_00145adc(void);
}

/* A four-float scale, all ones by default. */
struct RenderScale4 {
    void set(f32 value)
    {
        values[0] = value;
        values[1] = value;
        values[2] = value;
        values[3] = value;
    }
    f32 values[4];
};

/* The render context's first part: its three float-pair states. */
struct AsdRenderStates {
    /* 0x0000 */ u8 unk0000[0x4a0];
    /* 0x04a0 */ FloatState stateA;
    /* 0x0500 */ u8 unk0500[0xba0 - 0x500];
    /* 0x0ba0 */ FloatState stateB;
    /* 0x0c00 */ u8 unk0c00[0x10ac - 0xc00];
    /* 0x10ac */ FloatState stateC;
    /* 0x110c */ u8 unk110c[0x11d8 - 0x110c];
};

/* The render context: the states and the four-float default at 0x11d8. */
class AsdRenderContext : public AsdRenderStates {
public:
    AsdRenderContext() { defaults.set(1.0f); }

    static void *operator new(u32 size, const char *file, s32 line) throw() { return FUN_00178b04(size, file, line); }

    /* 0x11d8 */ RenderScale4 defaults;
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
