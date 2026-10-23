#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct SWinWork {
    u32 process;
    u32 unk04;
    u32 values[8];
    Params002c312c parameters;
    UiAnimatedSprite sprite;
};
typedef char SWinWorkLayoutCheck[sizeof(SWinWork) == 0xD4 &&
    offsetof(SWinWork, parameters) == 0x28 && offsetof(SWinWork, sprite) == 0x48 ? 1 : -1];

extern "C" {
extern SWinWork *g_sWin;
extern const u8 DAT_0052fbe4[];
void *asdMemoryAllocTracked(s32 heap, s32 category, s32 flags, u32 bytes, s32 count);
void sysMemClear(void *work, u32 bytes);
void asdTMTexTableLoadTmx(s32 table, s32 entry);
s32 FUN_003d0958(u32 process);
s32 FUN_003d02bc(u32 process);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
void paramsClearPacket(Params002c312c *packet);
void paramsInit(Params002c312c *packet, s32 x, s32 y, const void *first, s32 firstCount,
    const void *second, s32 secondCount, u32 a, u32 b, u32 c, u32 d);
void FUN_0014e188(UiAnimatedSprite *sprite, s32 group, s32 entry, Params002c312c *parameters,
    s32 flags, f32 speed);

void FUN_00285020(s32 raisedPriority)
{
    if (!g_sWin) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\SWin\\SWin.cpp", 0x146);
        g_sWin = (SWinWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SWinWork), 1);
    }
    SWinWork *work = g_sWin;
    sysMemClear(work, sizeof(*work));
    s32 leftPriority = 0x80;
    s32 rightPriority = 0xdc;
    if (raisedPriority) {
        leftPriority = 0x85;
        rightPriority = 0xe1;
    }
    asdTMTexTableLoadTmx(0x34, 0);
    work->process = asdProcessCreateSimple((const s8 *)"SWin Calc", 3, 0, 0, FUN_003d0958, 0, 0);
    taskCreateDraw((const s8 *)"SWin DrawUpLeft", leftPriority, 0, 0, FUN_003d02bc, 0, 0, (void *)work->process);
    taskCreateDraw((const s8 *)"SWin DrawUpRight", rightPriority, 0, 0, FUN_003d02bc, 0, 0, (void *)work->process);
    work = g_sWin;
    work->values[0] = 0;
    work->values[1] = 0;
    work->values[2] = 0;
    work->values[3] = 0;
    work->values[4] = 0;
    work->values[5] = 0;
    work->values[6] = 0;
    work->values[7] = 0;
    paramsClearPacket(&work->parameters);
    /* The first animation packet immediately precedes the second in the shared table. */
    paramsInit(&work->parameters, 0, 0, DAT_0052fbe4 - 0x18, 0x18, DAT_0052fbe4, 0x18, 0, 0, 0, 0);
    FUN_0014e188(&work->sprite, 0x34, 0, &work->parameters, 0x15, 1.0f);
}
}
