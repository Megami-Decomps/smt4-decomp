/* NON_MATCHING: paramsInit stack-argument scratch register, aligned memset helper and equivalent parameter-data relocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_SortMenu.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

struct SortMenuParameterData { u8 first[24], second[36], third[168]; };
extern "C" {
extern SortMenuSingleton g_useCounter;
extern const SortMenuParameterData DAT_00402d1c;
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);
s32 FUN_001a1f8c(u32);
s32 FUN_001a26dc(u32);
void drawParameterBlockClear(SortMenuParameters *);
void paramsInit(SortMenuParameters *, const void *, u32, const void *, u32, const void *, u32,
                const void *, u32, const void *, u32);
void FUN_002bd954(SortMenuSprite *, u32, u32, SortMenuParameters *, u32, f32);
void uiSpriteSetImageKeyframe(SortMenuSprite *, u32, u32);
void spriteStartAnimationByIndex(SortMenuSprite *, u32);
void timerStart(SortMenuSprite *, u32, u32);

void sortMenuCreate(u32 owner, u8 option)
{
    if (g_useCounter.useCount <= 0) {
        if (!g_useCounter.work) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\SortMenu\\SortMenu.cpp", 614);
            g_useCounter.work = (SortMenuWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(SortMenuWork), 1);
        }
        SortMenuWork *work = g_useCounter.work;
        memClear(work, sizeof(SortMenuWork));
        work->calculate = asdProcessCreateSimple("SORT CALC", 2, 0, 0, FUN_001a1f8c, NULL, 0);
        work->draw = taskCreateDraw("SORT DDRAW", 231, 0, 0, FUN_001a26dc, NULL, 0, work->calculate);
        SortMenuWork *current = g_useCounter.work;
        drawParameterBlockClear(&current->parameters);
        paramsInit(&current->parameters, DAT_00402d1c.first, 24, DAT_00402d1c.second, 36,
                   NULL, 0, NULL, 0, DAT_00402d1c.third, 168);
        for (s32 i = 0; i < 13; ++i) {
            FUN_002bd954(&current->sprites[i], 30, 0, &current->parameters, 1, 1.0f);
            uiSpriteSetImageKeyframe(&current->sprites[i], 0, 0);
        }
        FUN_002bd954(&current->sprites[10], 30, 0, &current->parameters, 1, 1.0f);
        spriteStartAnimationByIndex(&current->sprites[10], 0);
        FUN_002bd954(&current->sprites[11], 30, 0, &current->parameters, 1, 1.0f);
        timerStart(&current->sprites[11], 0, 0);
        FUN_002bd954(&current->sprites[12], 30, 0, &current->parameters, 1, 1.0f);
        spriteStartAnimationByIndex(&current->sprites[12], 1);
        memset(current->ids, -1, sizeof(current->ids));
        current->frame = 0;
        current->initialized = 1;
        work->option = option;
        work->owner = owner;
    }
    ++g_useCounter.useCount;
}
}
