#include "ui/UiSpriteApi.h"
#include "ui/CommandWindow.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "font/ComWin/ComWin.h"

extern "C" {
void comWindowProcessUpdate(void *task);
void comWinDraw(void *task);
void taskCreateDraw(const char *name, s32 priority, s32 mode, s32 flags, void (*callback)(void *), u32 work, void *argument, u32 parent);
void drawParameterBlockClear(UiResourceParameters *packet);

/* The command window's sprite resource packets, in retail's order (0x30, 0x30 and 0x118 bytes). */
static const u32 sComWinPacketB[12] = {
    0x0, 0x3f800000, 0x4, 0x3f800000, 0x0, 0x4, 0x3f000000, 0x3f800000,
    0xa, 0x3f800000, 0x3f000000, 0x14,
};
static const u32 sComWinPacketC[12] = {
    0x3f4ccccd, 0x3f8ccccd, 0x4, 0x3f8ccccd, 0x3f800000, 0x1, 0x3f800000, 0x3f8ccccd,
    0x1, 0x3f8ccccd, 0x3f4ccccd, 0x3,
};
static const u32 sComWinPacketE[70] = {
    0xfffffffd, 0x0, 0xfffffffd, 0x0, 0x0, 0x0, 0x0, 0xfffffffd,
    0x0, 0xfffffffd, 0xfffffffd, 0x0, 0x1, 0x0, 0xffffffff, 0x0,
    0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0, 0xfffffffd, 0x0, 0xfffffffd,
    0x1, 0x0, 0x2, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0xfffffffd,
    0x0, 0x3, 0x0, 0xffffffff, 0x0, 0xffffffff, 0xffffffff, 0x0,
    0xffffffff, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x2, 0x0, 0xfffffffd,
    0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x3, 0x0, 0xfffffffd, 0x0,
    0xfffffffd, 0x0, 0xfffffffd, 0xfffffffe, 0x0, 0xfffffffd, 0x0, 0xffffffff,
    0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0,
};

// Create the command window's update/draw tasks and initialize both upper-screen sprites.
void comWindowCreate()
{
    struct ParameterView { u8 prefix[0x1c]; UiResourceParameters packet; };
    typedef char ParameterViewOffsetCheck[offsetof(ParameterView, packet) == 0x1c ? 1 : -1];
    if (!g_comWin) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\ComWin\\ComWin.cpp", 0x122);
        g_comWin = static_cast<CommandWindow *>(asdMemAlloc(0x100, 0x100, 0, sizeof(CommandWindow), 1));
    }
    CommandWindow *window = g_comWin;
    memClear(window, sizeof(CommandWindow));
    window->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("ComWin Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(comWindowProcessUpdate), 0, 0);
    taskCreateDraw("ComWin DrawUpLeft", 0x81, 0, 0, comWinDraw, 0, 0, window->process);
    taskCreateDraw("ComWin DrawUpRight", 0xdf, 0, 0, comWinDraw, 0, 0, window->process);
    window = g_comWin;
    // The aligned packet begins two bytes into the shared byte-array padding.
    ParameterView *parameters = reinterpret_cast<ParameterView *>(window);
    drawParameterBlockClear(&parameters->packet);
    paramsInit(&parameters->packet, NULL, 0, sComWinPacketB, sizeof(sComWinPacketB), sComWinPacketC, sizeof(sComWinPacketC),
               NULL, 0, sComWinPacketE, sizeof(sComWinPacketE));
    uiSpriteInitializeState(&window->sprites[0], 0xe, -1, 2, &parameters->packet, 1, 1.0f);
    spriteStartAnimationByIndex(&window->sprites[0], 0);
    uiSpriteInitializeState(&window->sprites[1], 0xe, -1, 3, &parameters->packet, 1, 1.0f);
    spriteStartAnimationByIndex(&window->sprites[1], 2);
}
}
