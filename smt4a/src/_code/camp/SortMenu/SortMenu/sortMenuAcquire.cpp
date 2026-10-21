/* NON_MATCHING: paramsInit stack-argument scratch register, aligned memset helper and equivalent parameter-data relocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_SortMenu.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

struct SortMenuParameterData { u8 first[24], second[60], third[280]; };
extern "C" {
extern SortMenuSingleton g_useCounter;
extern const SortMenuParameterData DAT_0052ded8;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);
s32 FUN_0022a0a0(u32);
s32 FUN_0022a5d8(u32);
void paramsClearPacket(SortMenuParameters *);
void paramsInit(SortMenuParameters *, const void *, u32, const void *, u32, const void *, u32,
                const void *, u32, const void *, u32);
void FUN_0014e188(SortMenuSprite *, u32, u32, SortMenuParameters *, u32, f32);
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
        paramsInit(&current->parameters, DAT_0052ded8.first, 24, DAT_0052ded8.second, 60,
                   NULL, 0, NULL, 0, DAT_0052ded8.third, 280);
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
