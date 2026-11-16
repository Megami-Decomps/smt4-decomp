#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/GuestWin/GuestWin.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"

// The UI object extends past the shared guest-window prefix.
struct GuestWinAllocationView {
    GuestWinWork prefix;
    /* 0x50 */ u8 uiTail[0x6C];
};
extern "C" {
extern GuestWinWork* g_guestWin;
/* The guest window's sprite resource packets, in retail's order (0x18, 0x18 and 0x70 bytes). */
static const u32 sGuestWinPacketA[6] = {
    0x0, 0x0, 0x0, 0x140, 0x0, 0x8,
};
static const u32 sGuestWinPacketB[6] = {
    0x3f800000, 0x3f800000, 0x0, 0x3f800000, 0x0, 0x4,
};
static const u32 sGuestWinPacketE[28] = {
    0x1, 0x0, 0xfffffffd, 0x0, 0x0, 0xfffffffd, 0x0, 0xffffffff,
    0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0, 0x0, 0x0,
    0xfffffffd, 0x1, 0x0, 0xfffffffd, 0x0, 0xffffffff, 0x0, 0xffffffff,
    0xffffffff, 0x0, 0xffffffff, 0x0,
};
u32 taskCreateDraw(const char* name, u32 priority, u32 size, u32 flags,
                   TaskFunc update, TaskFunc destroy, void* work, u32 parent);
void guestWinUpdate(void* work);
void FUN_0011aa94(void* work);
void drawParameterBlockClear(void* parameters);

void FUN_002bd954(void* object, s32 category, s32 resource, void* parameters, u32 enabled, f32 scale);
void spriteStartAnimationByIndex(void* object, s32 state);

// Allocate and initialize the guest message window and its calculation/stereo drawing tasks.
void FUN_0010b3c0(void)
{
    if (g_guestWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\GuestWin\\GuestWin.cpp", 245);
        g_guestWin = static_cast<GuestWinWork*>(asdMemAlloc(0x100, 0x100, 0,
            sizeof(GuestWinAllocationView), 1));
    }
    GuestWinWork* work = g_guestWin;
    memClear(work, sizeof(GuestWinAllocationView));
    u32 job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("GuestWin Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(guestWinUpdate), NULL, NULL);
    work->job = job;
    taskCreateDraw("GuestWin DrawUpLeft", 0x81, 0, 0, FUN_0011aa94, NULL, NULL, job);
    taskCreateDraw("GuestWin DrawUpRight", 0xDF, 0, 0, FUN_0011aa94, NULL, NULL, work->job);
    work = g_guestWin;
    drawParameterBlockClear(work->unk10);
    paramsInit(reinterpret_cast<UiResourceParameters *>(work->unk10), sGuestWinPacketA, sizeof(sGuestWinPacketA),
        sGuestWinPacketB, sizeof(sGuestWinPacketB), NULL, 0, NULL, 0, sGuestWinPacketE, sizeof(sGuestWinPacketE));
    FUN_002bd954(work->ui, 14, 0x87, work->unk10, 1, 1.0f);
    spriteStartAnimationByIndex(work->ui, 0);
}
}
