#include "shard/W4_Match3_AocMainA.h"

struct AocBoardWork {
    u32 flags;
    u32 job;
    u32 state;
    u32 context;
    void *resource;
    u8 parameters[0x400];
    u8 mode;
    u8 padding[3];
    u32 timer;
};
extern "C" {
s32 FUN_00472568(u32 job);
s32 FUN_00472820(u32 job);
s32 FUN_00472e1c(u32 job);
u32 asdProcessCreateSimple(const char *, u32, u32, u32, s32 (*)(u32), u32, AocBoardWork *);
void taskCreateDraw(const char *, u32, u32, u32, s32 (*)(u32), void (*)(u32), AocBoardWork *, u32);
void *FUN_00473754(AocMainA *, u32, void *);
extern const char DAT_005271ac[]; // "Aoc board CALC"
extern const char DAT_0052719c[]; // "Aoc board UP L"
extern const char DAT_0052718c[]; // "Aoc board UP R"
extern const char DAT_0052717c[]; // "Aoc board DOWN"
}

extern "C" void FUN_00472f58(AocBoardWork *board, u32 request, u8 mode, u32 context)
{
    board->context = context;
    board->state = 0;
    board->mode = mode;
    board->resource = FUN_00473754(g_aocMain, request, board->parameters);
    board->flags &= ~0x20;
    if (!(board->flags & 0x10)) {
        board->flags |= 0x10;
        board->timer = 0;
        board->job = asdProcessCreateSimple(DAT_005271ac, 4, 0, 0, FUN_00472568, 0, board);
        taskCreateDraw(DAT_0052719c, 0x87, 1, 0, FUN_00472820, 0, board, board->job);
        taskCreateDraw(DAT_0052718c, 0xE3, 1, 0, FUN_00472820, 0, board, board->job);
        taskCreateDraw(DAT_0052717c, 0x160, 1, 0, FUN_00472e1c, 0, board, board->job);
    }
}
