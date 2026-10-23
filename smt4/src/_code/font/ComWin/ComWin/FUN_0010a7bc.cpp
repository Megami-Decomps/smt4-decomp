/* NON_MATCHING: only paramsInit argument preparation differs (literal register, paired stack stores and adjacent-table address arithmetic); 126 instructions each. */
#include "ui/CommandWindow.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemAlloc(s32 heap, s32 alignmentClass, u32 flags, u32 size, s32 fromFront);
void memClear(void *memory, u32 size);
void comWindowProcessUpdate(void *task);
void FUN_0011a434(void *task);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 mode, s32 flags, void (*callback)(void *), u32 work, void *argument);
void taskCreateDraw(const char *name, s32 priority, s32 mode, s32 flags, void (*callback)(void *), u32 work, void *argument, u32 parent);
void drawParameterBlockClear(Params002c312c *packet);
void paramsInit(Params002c312c *packet, const void *first, u16 firstBytes, const void *second, u16 secondBytes,
                const void *third, u16 thirdBytes, const void *fourth, u16 fourthBytes, const void *fifth, u16 fifthBytes);
void uiSpriteInitializeState(UiSpriteState *sprite, s32 bank, s32 image, s32 animation, Params002c312c *packet, s32 flags, f32 scale);
void FUN_002bee58(UiSpriteState *sprite, s32 image);
extern const u8 DAT_0040384c[];

// Create the command window's update/draw tasks and initialize both upper-screen sprites.
void FUN_0010a7bc()
{
    struct ParameterView { u8 prefix[0x1c]; Params002c312c packet; };
    typedef char ParameterViewOffsetCheck[offsetof(ParameterView, packet) == 0x1c ? 1 : -1];
    if (!g_comWin) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\ComWin\\ComWin.cpp", 0x122);
        g_comWin = static_cast<CommandWindow *>(asdMemAlloc(0x100, 0x100, 0, sizeof(CommandWindow), 1));
    }
    CommandWindow *window = g_comWin;
    memClear(window, sizeof(CommandWindow));
    window->process = asdProcessCreateSimple("ComWin Calc", 1, 0, 0, comWindowProcessUpdate, 0, 0);
    taskCreateDraw("ComWin DrawUpLeft", 0x81, 0, 0, FUN_0011a434, 0, 0, window->process);
    taskCreateDraw("ComWin DrawUpRight", 0xdf, 0, 0, FUN_0011a434, 0, 0, window->process);
    window = g_comWin;
    // The aligned packet begins two bytes into the shared byte-array padding.
    ParameterView *parameters = reinterpret_cast<ParameterView *>(window);
    drawParameterBlockClear(&parameters->packet);
    paramsInit(&parameters->packet, 0, 0, DAT_0040384c - 0x60, 0x30, DAT_0040384c - 0x30, 0x30, 0, 0, DAT_0040384c, 0x118);
    uiSpriteInitializeState(&window->sprites[0], 0xe, -1, 2, &parameters->packet, 1, 1.0f);
    FUN_002bee58(&window->sprites[0], 0);
    uiSpriteInitializeState(&window->sprites[1], 0xe, -1, 3, &parameters->packet, 1, 1.0f);
    FUN_002bee58(&window->sprites[1], 2);
}
}
