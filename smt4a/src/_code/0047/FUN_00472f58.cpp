#include "addon/AocBoard.h"
#include "shard/W4_Match3_AocMainA.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
s32 aocBoardUpdateAnimation(u32 job);
s32 aocBoardDraw(u32 job);
s32 aocBoardDrawParameterOverlay(u32 job);
void taskCreateDraw(const char *, u32, u32, u32, s32 (*)(u32), void (*)(u32), AocBoardWork *, u32);
void *FUN_00473754(AocMain *, u32, void *);
extern const char DAT_005271ac[]; // "Aoc board CALC"
extern const char DAT_0052719c[]; // "Aoc board UP L"
extern const char DAT_0052718c[]; // "Aoc board UP R"
extern const char DAT_0052717c[]; // "Aoc board DOWN"
}

extern "C" void FUN_00472f58(AocBoardWork *board, u32 request, u8 mode, u32 context)
{
    board->owner.control.parameter = context;
    board->owner.control.frame = 0;
    board->owner.enabled = mode;
    board->owner.control.resource = reinterpret_cast<u32>(FUN_00473754(g_aocMain, request, board->owner.lines));
    board->setTransitionReady(false);
    if (!(board->owner.control.flags & 0x10)) {
        board->owner.control.flags |= 0x10;
        board->owner.spinnerFrame = 0;
        board->owner.control.process = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_005271ac), 4, 0, 0, aocBoardUpdateAnimation, 0, reinterpret_cast<u32>(board));
        taskCreateDraw(DAT_0052719c, 0x87, 1, 0, aocBoardDraw, 0, board, board->owner.control.process);
        taskCreateDraw(DAT_0052718c, 0xE3, 1, 0, aocBoardDraw, 0, board, board->owner.control.process);
        taskCreateDraw(DAT_0052717c, 0x160, 1, 0, aocBoardDrawParameterOverlay, 0, board, board->owner.control.process);
    }
}
