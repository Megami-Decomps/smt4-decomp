/* NON_MATCHING: paramsInit's stack-argument scratch register and the aligned memset helper differ. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match6_SortMenu.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

/* The sort menu's image, scale, and animation parameter tables are compiled together. */
struct SortMenuParameterData { u32 first[6], second[15], third[70]; };
extern "C" const SortMenuParameterData DAT_0052ded8 = {
    {0x00000082, 0x0000FFC8, 0x00010028, 0x00000014, 0x00000000, 0x00000004},
    {0x00000000, 0x3F800000, 0x00000004, 0x3F800000, 0x3F000000, 0x00000014,
     0x3F000000, 0x3F800000, 0x00000028, 0x00000000, 0x3F800000, 0x0000001E,
     0x3F800000, 0x00000000, 0x0000001E},
    {0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000001, 0x00000000, 0xFFFFFFFD,
     0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000002, 0x00000000,
     0xFFFFFFFD, 0x00000000, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFE,
     0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
     0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFD, 0x00000000,
     0xFFFFFFFD, 0x00000003, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD,
     0x00000000, 0xFFFFFFFD, 0x00000004, 0x00000000, 0xFFFFFFFD, 0x00000000,
     0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD,
     0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000,
     0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFD, 0x00000000,
     0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
     0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000}
};
extern "C" {
extern SortMenuSingleton g_useCounter;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);
s32 FUN_0022a0a0(u32);
s32 FUN_0022a5d8(u32);
void paramsClearPacket(UiResourceParameters *);

void FUN_0014e188(SortMenuSprite *, u32, u32, UiResourceParameters *, u32, f32);
void uiSpriteSetImageKeyframe(SortMenuSprite *, u32, u32);
void uiSpriteSelectAnim(SortMenuSprite *, u32);

void sortMenuAcquire(u32 owner, u8 option)
{
    if (g_useCounter.useCount <= 0) {
        if (!g_useCounter.work) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\SortMenu\\SortMenu.cpp", 786);
            g_useCounter.work = (SortMenuWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(SortMenuWork), 1);
        }
        SortMenuWork *work = g_useCounter.work;
        sysMemClear(work, sizeof(SortMenuWork));
        work->calculate = asdProcessCreateSimple("SORT CALC", 4, 0, 0, FUN_0022a0a0, NULL, 0);
        work->draw = taskCreateDraw("SORT DDRAW", 235, 0, 0, FUN_0022a5d8, NULL, 0, work->calculate);
        SortMenuWork *current = g_useCounter.work;
        paramsClearPacket(&current->parameters);
        paramsInit(&current->parameters, DAT_0052ded8.first, sizeof(DAT_0052ded8.first),
                   DAT_0052ded8.second, sizeof(DAT_0052ded8.second), NULL, 0, NULL, 0,
                   DAT_0052ded8.third, sizeof(DAT_0052ded8.third));
        for (s32 i = 0; i < 13; ++i) {
            FUN_0014e188(&current->sprites[i], 21, 0, &current->parameters, 1, 1.0f);
            uiSpriteSetImageKeyframe(&current->sprites[i], 0, 0);
        }
        FUN_0014e188(&current->sprites[10], 21, 0, &current->parameters, 1, 1.0f);
        uiSpriteSelectAnim(&current->sprites[10], 0);
        FUN_0014e188(&current->sprites[11], 21, 0, &current->parameters, 1, 1.0f);
        uiSpriteSelectAnim(&current->sprites[11], 1);
        FUN_0014e188(&current->sprites[12], 21, 0, &current->parameters, 1, 1.0f);
        uiSpriteSelectAnim(&current->sprites[12], 2);
        memset(current->ids, -1, sizeof(current->ids));
        current->frame = 0;
        current->initialized = 1;
        work->option = option;
        work->owner = owner;
    }
    ++g_useCounter.useCount;
}
}
