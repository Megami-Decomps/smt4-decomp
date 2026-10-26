/* NON_MATCHING: only final paramsInit address/count argument scheduling differs; allocation, text defaults and all jobs match. */
#include "ui/MessageMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "util/asdTextSetBaseColor.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
// The parameter block at 0xa4 lies in padding beginning at the unaligned offset 0x36
// of MessageWork. Use an aligned local view instead of changing the shared union alignment.
struct MessageInitializationView {
    u32 job;
    AsdText *text;
    u8 state;
    u8 unk09[0x29];
    u8 unk32, unk33, unk34, closeRequested;
    u8 unk36[0x47];
    u8 unk7D, unk7E;
    u8 unk7F[0x25];
    UiResourceParameters parameters;
    u8 unkC4[0x94D];
    u8 displayMode;
    u8 unkA12[0x14];
    u8 enabled;
    u8 unkA27[0x11];
    s32 taskValue;
};
typedef char MessageInitializationOffsetsCheck[sizeof(MessageInitializationView) == sizeof(MessageWork) &&
    offsetof(MessageInitializationView, parameters) == 0xA4 &&
    offsetof(MessageInitializationView, displayMode) == 0xA11 &&
    offsetof(MessageInitializationView, enabled) == 0xA26 &&
    offsetof(MessageInitializationView, taskValue) == 0xA38 ? 1 : -1];
}

extern "C" {
extern const u8 DAT_00403df8[];
void FUN_002bc0e0(void);
AsdText *asdTextCreate(u32 flags);
void asdTextSetValueFlagsAndScalar(AsdText *text, u32 value, u32 flags, f32 scalar);
void positionStateSet(AsdText *text, u32 first, u32 second, f32 scalar);
s32 FUN_00114474(u32 handle);
s32 FUN_00116a54(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
void drawParameterBlockClear(UiResourceParameters *parameters);


// Allocate a message window, its text object and calculation/stereo drawing jobs.
MessageWork *FUN_002c4a34(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\message.cpp", 0x144);
    MessageInitializationView *work = static_cast<MessageInitializationView *>(asdMemAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(MessageInitializationView), 1));
    memClear(work, sizeof(MessageInitializationView));
    work->displayMode = 20;
    FUN_002bc0e0();
    work->text = asdTextCreate(0);
    asdTextSetBaseColor(work->text, 0x320202FF);
    asdTextSetValueFlagsAndScalar(work->text, 3, ~0u, 0.0f);
    positionStateSet(work->text, 0, 0x646464FF, 0.0f);
    work->state = 0;
    work->unk34 = 0;
    work->closeRequested = 0;
    work->enabled = 1;
    work->unk32 = 0;
    work->unk7D = 0;
    work->unk7E = 0;
    work->unk33 = 0;
    work->taskValue = -2;
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("MESS_C"), 2, 0, 0, FUN_00114474, NULL, reinterpret_cast<u32>(work));
    taskCreateDraw(reinterpret_cast<const s8 *>("MESS_U LEFT"), 0x81, 0, 0,
        FUN_00116a54, NULL, reinterpret_cast<u32>(work), reinterpret_cast<void *>(work->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("MESS_U RIGHT"), 0xDF, 0, 0,
        FUN_00116a54, NULL, reinterpret_cast<u32>(work), reinterpret_cast<void *>(work->job));
    drawParameterBlockClear(&work->parameters);
    // Three contiguous parameter streams precede the final resource stream.
    paramsInit(&work->parameters, DAT_00403df8 - 0x54 - 0x48 - 0x78, 0x78, DAT_00403df8 - 0x54 - 0x48, 0x48, DAT_00403df8 - 0x54, 0x54, 0, 0, DAT_00403df8, 0x310);
    return reinterpret_cast<MessageWork *>(work);
}
}
