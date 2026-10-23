/* NON_MATCHING: paramsInit size-argument scheduling adds one move, shifting the literal pool. */
#include "font/GuestWin/GuestWin.h"
#include "sys/Task.h"
#include "AsdSDK/AsdDebug.h"

// The UI object extends past the shared guest-window prefix.
struct GuestWinAllocationView {
    GuestWinWork prefix;
    /* 0x50 */ u8 uiTail[0x6C];
};
struct GuestWinParameterDefaults {
    u8 first[0x18];
    u8 second[0x18];
    u8 geometry[0x70];
};
extern "C" {
extern GuestWinWork* g_guestWin;
extern const GuestWinParameterDefaults DAT_00403964;
void* asdMemAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void memClear(void* memory, u32 size);
u32 asdProcessCreateSimple(const char* name, u32 priority, u32 size, u32 flags,
                           TaskFunc update, TaskFunc destroy, void* work);
u32 taskCreateDraw(const char* name, u32 priority, u32 size, u32 flags,
                   TaskFunc update, TaskFunc destroy, void* work, u32 parent);
void guestWinUpdate(void* work);
void FUN_0011aa94(void* work);
void drawParameterBlockClear(void* parameters);
void paramsInit(void* parameters, const void* first, u32 firstSize, const void* second,
                u32 secondSize, const void* third, u32 thirdSize, const void* fourth,
                u32 fourthSize, const void* fifth, u32 fifthSize);
void FUN_002bd954(void* object, s32 category, s32 resource, void* parameters, u32 enabled, f32 scale);
void FUN_002bee58(void* object, s32 state);

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
    work->job = asdProcessCreateSimple("GuestWin Calc", 1, 0, 0, guestWinUpdate, NULL, NULL);
    taskCreateDraw("GuestWin DrawUpLeft", 0x81, 0, 0, FUN_0011aa94, NULL, NULL, work->job);
    taskCreateDraw("GuestWin DrawUpRight", 0xDF, 0, 0, FUN_0011aa94, NULL, NULL, work->job);
    work = g_guestWin;
    drawParameterBlockClear(work->unk10);
    paramsInit(work->unk10, DAT_00403964.first, sizeof(DAT_00403964.first),
        DAT_00403964.second, sizeof(DAT_00403964.second), NULL, 0, NULL, 0,
        DAT_00403964.geometry, sizeof(DAT_00403964.geometry));
    FUN_002bd954(work->ui, 14, 0x87, work->unk10, 1, 1.0f);
    FUN_002bee58(work->ui, 0);
}
}
