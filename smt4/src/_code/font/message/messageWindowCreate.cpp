#include "ui/MessageMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_AsdText.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
/* The message window's sprite resource packets, in retail's order (0x78, 0x48, 0x54 and 0x310 bytes). */
static const u32 sMessagePacketA[30] = {
    0xff38, 0xa, 6, 0xa, 0, 2, 0x140, 0xffec,
    6, 0, 0xfec0, 4, 0xfec0, 0, 8, 0,
    2, 2, 2, 0, 3, 0, 0x20000, 8,
    0, 0xff06, 6, 0xff06, 0, 6,
};
static const u32 sMessagePacketB[18] = {
    0, 0x3f800000, 8, 0, 0x3f800000, 4, 0x3f800000, 0,
    4, 0x3f800000, 0x3dcccccd, 0x10014, 0, 0x3f800000, 8, 0x3f800000,
    0, 3,
};
static const u32 sMessagePacketC[21] = {
    0, 0x3f800000, 8, 0, 0x3f800000, 2, 0x3f8ccccd, 0x3f800000,
    4, 0, 0x3fa66666, 0x10014, 0, 0x3f8ccccd, 8, 0x3f8ccccd,
    0x3f800000, 2, 0, 0x3f800000, 4,
};
static const u32 sMessagePacketD[196] = {
    0xfffffffd, 0, 0xfffffffd, 0, 0, 0, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0, 0,
    0xfffffffd, 0, 0, 0xfffffffd, 0, 1, 0, 0xffffffff,
    0xffffffff, 0, 0xffffffff, 0, 0xffffffff, 0, 0, 0,
    0, 0, 0, 0xfffffffd, 0, 0xfffffffd, 2, 0,
    0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff,
    0, 0xfffffffd, 0, 0xfffffffd, 1, 0, 2, 0,
    0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 7,
    0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 7, 1,
    0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0, 0xfffffffe, 0, 0xfffffffd,
    0xfffffffd, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xfffffffd, 0, 0xfffffffd, 0, 0,
    4, 0, 0xfffffffd, 0, 0xfffffffd, 0xfffffffd, 0, 5,
    0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    2, 0, 0xfffffffd, 0, 0, 0xfffffffd, 0, 0xffffffff,
    0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 3, 0,
    0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xffffffff, 0, 0,
    0, 0, 0, 0, 4, 0, 0xffffffff, 0xffffffff,
    0, 0xffffffff, 0, 0xffffffff, 0, 0, 0, 0,
    0, 0, 5, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd,
    0, 6, 0, 0xfffffffd, 0xfffffffd, 0, 0xfffffffd, 0,
    0xfffffffe, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0, 0xffffffff,
    0, 0, 0, 0, 0, 0, 0xfffffffd, 0,
    0xfffffffd, 4, 0, 6, 0, 0xffffffff, 0, 0,
    0, 0, 0, 0,
};
void gxResetUniformQuadColorsAndScale(void);
AsdText *asdTextCreate(u32 flags);
void asdTextSetValueFlagsAndScalar(AsdText *text, u32 value, u32 flags, f32 scalar);
void positionStateSet(AsdText *text, u32 first, u32 second, f32 scalar);
s32 FUN_00114474(u32 handle);
s32 messageWindowDraw(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
void drawParameterBlockClear(UiResourceParameters *parameters);

// Allocate a message window, its text object and calculation/stereo drawing jobs.
MessageWindow *messageWindowCreate(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\message.cpp", 0x144);
    MessageWindow *window = static_cast<MessageWindow *>(asdMemAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(MessageWindow), 1));
    memClear(window, sizeof(MessageWindow));
    window->displayMode = 20;
    gxResetUniformQuadColorsAndScale();
    /* The text box is kept as a handle word; this is the one place that creates it. */
    window->box = reinterpret_cast<u32>(asdTextCreate(0));
    asdTextSetBaseColor(reinterpret_cast<AsdText *>(window->box), 0x320202FF);
    asdTextSetValueFlagsAndScalar(reinterpret_cast<AsdText *>(window->box), 3, ~0u, 0.0f);
    positionStateSet(reinterpret_cast<AsdText *>(window->box), 0, 0x646464FF, 0.0f);
    window->state = 0;
    window->unk034 = 0;
    window->closeRequested = 0;
    window->enabled = 1;
    window->unk032 = 0;
    window->wideValue = 0;
    window->smallValue = 0;
    window->unk033 = 0;
    window->taskValue = -2;
    window->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("MESS_C"), 2, 0, 0, FUN_00114474, NULL, reinterpret_cast<u32>(window));
    taskCreateDraw(reinterpret_cast<const s8 *>("MESS_U LEFT"), 0x81, 0, 0,
        messageWindowDraw, NULL, reinterpret_cast<u32>(window), reinterpret_cast<void *>(window->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("MESS_U RIGHT"), 0xDF, 0, 0,
        messageWindowDraw, NULL, reinterpret_cast<u32>(window), reinterpret_cast<void *>(window->job));
    drawParameterBlockClear(&window->parameters);
    paramsInit(&window->parameters, sMessagePacketA, sizeof(sMessagePacketA), sMessagePacketB, sizeof(sMessagePacketB),
               sMessagePacketC, sizeof(sMessagePacketC), NULL, 0, sMessagePacketD, sizeof(sMessagePacketD));
    return window;
}
}
