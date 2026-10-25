#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/GuestWin/GuestWin.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
u32 asdProcessCreateSimple(const char *, u32, u32, u32, void (*)(), u32, u32);
void taskCreateDraw(const char *, u32, u32, u32, void (*)(), u32, u32, u32);
void guestWinUpdate(void);
void FUN_00155840(void);
void paramsClearPacket(void *);

void FUN_0014e188(UiSpriteState *, u32, u32, void *, u32, f32);
void uiSpriteSelectAnim(UiSpriteState *, s32);
static const u32 guestWindowTextureParameters[] = { 0, 0, 0, 0x140, 0, 8 };
static const u32 guestWindowTransformParameters[] = { 0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 4 };
static const s32 guestWindowAnimationParameters[] = {
    1, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    0, 0, -3, 1, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0
};
extern GuestWinWorkA *g_guestWin;

// Allocate the guest window and create its update, left-screen and right-screen draw tasks.
void FUN_001409e4(void)
{
    // Full sprite extends beyond GuestWinWorkA's shared prefix.
    struct GuestWindowView {
        u32 process;
        u8 unk04[0xc];
        u8 parameters[0x20];
        UiSpriteState sprite;
    };
    typedef char GuestWindowOffsets[offsetof(GuestWindowView, sprite) == 0x30 &&
        sizeof(GuestWindowView) == 0xbc ? 1 : -1];
    if (!g_guestWin) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\GuestWin\\GuestWin.cpp", 248);
        g_guestWin = static_cast<GuestWinWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0xbc, 1));
    }
    GuestWindowView *work = reinterpret_cast<GuestWindowView *>(g_guestWin);
    sysMemClear(work, sizeof(*work));
    u32 process = asdProcessCreateSimple("GuestWin Calc", 3, 0, 0, guestWinUpdate, 0, 0);
    work->process = process;
    taskCreateDraw("GuestWin DrawUpLeft", 0x86, 0, 0, FUN_00155840, 0, 0, process);
    taskCreateDraw("GuestWin DrawUpRight", 0xe2, 0, 0, FUN_00155840, 0, 0, work->process);
    work = reinterpret_cast<GuestWindowView *>(g_guestWin);
    paramsClearPacket(work->parameters);
    paramsInit(reinterpret_cast<UiResourceParameters *>(work->parameters), guestWindowTextureParameters, 0x18, guestWindowTransformParameters, 0x18, 0, 0, 0, 0, guestWindowAnimationParameters, 0x70);
    FUN_0014e188(&work->sprite, 8, 0x87, work->parameters, 1, 1.0f);
    uiSpriteSelectAnim(&work->sprite, 0);
}
}
