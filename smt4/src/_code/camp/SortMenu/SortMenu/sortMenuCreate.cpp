/* NON_MATCHING: paramsInit's stack-argument scratch register differs (retail keeps the second byte count 36 in r2, built uses r0). */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match6_SortMenu.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

/* The sort menu's image, scale, and animation parameter tables are compiled together. */
struct SortMenuParameterData { u32 first[6], second[9], third[42]; };
extern "C" const SortMenuParameterData DAT_00402d1c = {
    {0x00000082, 0x0000FFC8, 0x00010028, 0x00000014, 0x00000000, 0x00000004},
    {0x00000000, 0x3F800000, 0x00000004, 0x3F800000, 0x3F000000, 0x00000014,
     0x3F000000, 0x3F800000, 0x00000028},
    {0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000001, 0x00000000, 0xFFFFFFFD,
     0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFD, 0x00000002, 0x00000000,
     0xFFFFFFFD, 0x00000000, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFE,
     0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
     0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000,
     0xFFFFFFFD, 0x00000000, 0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF,
     0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000}
};

extern "C" {
extern SortMenuSingleton g_useCounter;
void __aeabi_memset4(void *destination, u32 bytes, s32 value);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);
s32 FUN_001a1f8c(u32);
s32 FUN_001a26dc(u32);
void drawParameterBlockClear(UiResourceParameters *);

void FUN_002bd954(SortMenuSprite *, u32, u32, UiResourceParameters *, u32, f32);
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
        work->calculate = asdProcessCreateSimple(reinterpret_cast<const s8 *>("SORT CALC"), 2, 0, 0, FUN_001a1f8c, NULL, 0);
        work->draw = taskCreateDraw("SORT DDRAW", 231, 0, 0, FUN_001a26dc, NULL, 0, work->calculate);
        SortMenuWork *current = g_useCounter.work;
        drawParameterBlockClear(&current->parameters);
        paramsInit(&current->parameters, DAT_00402d1c.first, sizeof(DAT_00402d1c.first),
                   DAT_00402d1c.second, sizeof(DAT_00402d1c.second), NULL, 0, NULL, 0,
                   DAT_00402d1c.third, sizeof(DAT_00402d1c.third));
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
        __aeabi_memset4(current->ids, sizeof(current->ids), -1);
        current->frame = 0;
        current->initialized = 1;
        work->option = option;
        work->owner = owner;
    }
    ++g_useCounter.useCount;
}
}
