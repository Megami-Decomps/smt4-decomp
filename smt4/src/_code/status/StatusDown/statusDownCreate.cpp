#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

/* A 0x8C-byte UI sprite; only the field this initializer writes is named. */
struct StatusSprite {
    /* 0x00 */ u8 unk00[0x3a];
    /* 0x3a */ u16 layer;
    /* 0x3c */ u8 unk3c[0x50];
};

/* A row of animation keys handed to paramsInit. */
struct StatusKey {
    f32 first;
    f32 last;
    s32 duration;
};

/* The status screen's work area as built here (sizeof is the allocation size). */
struct StatusDownWork {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u32 drawTask;
    /* 0x0008 */ UiResourceParameters packet;
    /* 0x0028 */ StatusSprite sprites[7];
    /* 0x03fc */ u8 unk3fc[0x30];
    /* 0x042c */ u8 slots[0x29];      /* filled with 0xFF */
    /* 0x0455 */ u8 unk455[0x1e4b];
    /* 0x22a0 */ u32 memorySlot;
    /* 0x22a4 */ u8 unk22a4[0xed];
    /* 0x2391 */ u8 unk2391;
    /* 0x2392 */ u8 unk2392;
    /* 0x2393 */ u8 unk2393;
};

/* Animation tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFirst[18] = {
    65216, 0, 8, 320, 0, 8,
    0, 65216, 4, 0, 320, 4,
    300, 65476, 65576, 180, 65476, 65576,
};
static const StatusKey sKeysSecond[6] = {
    {1.0f, 0.5f, 20},
    {0.5f, 1.0f, 40},
    {0.0f, 0.8f, 20},
    {0.8f, 0.0f, 40},
    {0.0f, 1.0f, 5},
    {1.0f, 0.0f, 25},
};
static const StatusKey sKeysThird[2] = {
    {0.0f, 1.0f, 5},
    {1.0f, 3.0f, 25},
};
static const s32 sKeysFifth[77] = {
    -3, 0, -3, 0, 0, -3, 0, -3, 0, -3, 1, 0,
    -3, 0, -3, 0, -3, -2, 0, -3, 0, -1, 0, -1,
    -1, 0, -1, 0, -3, 0, -3, 2, 0, -3, 0, -3,
    0, -3, 3, 0, -3, 0, -3, 0, -3, -2, 0, -3,
    0, -1, 0, -1, -1, 0, -1, 0, -3, 0, -3, 4,
    0, 0, 0, -3, 0, -3, 5, 0, 1, 0, -1, 0,
    -1, -1, 0, -1, 0,
};

extern "C" {
extern StatusDownWork *g_statusDown;
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_001ca748(u32 handle);
s32 FUN_001cca14(u32 handle);
void drawParameterBlockClear(UiResourceParameters *packet);

void FUN_002bd954(StatusSprite *sprite, u32 group, u32 image, UiResourceParameters *owner, u16 id, f32 scale);
void FUN_002bd82c(u32 text, u32 value);
void timerStart(StatusSprite *sprite, s32 id, s32 arg);
void spriteStartAnimationByIndex(StatusSprite *sprite, s32 index);
void uiSpriteInitializeState(StatusSprite *sprite, u32 group, s32 image, s32 kind,
                             UiResourceParameters *owner, u16 id, f32 scale);
u32 asdTextCreate(u32 text);
void positionStateSet(u32 text, s32 arg, u32 color, f32 value);
void spriteSetLayer(StatusSprite *sprite, u16 layer);
void *__aeabi_memset4(void *dest, s32 size, s32 value);

/* Allocates and clears the status screen's work area, starts its calc/draw tasks and builds its sprites. */
void statusDownCreate(void)
{
    if (g_statusDown == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\StatusDown.cpp", 0xd1d);
        g_statusDown = static_cast<StatusDownWork *>(asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(StatusDownWork), 1));
    }
    StatusDownWork *status = g_statusDown;
    memClear(status, sizeof(StatusDownWork));
    status->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 2, 0, 0, FUN_001ca748, NULL, 0);
    status->drawTask = taskCreateDraw(reinterpret_cast<const s8 *>("TMD DDRAW"), 0xe7, 0, 0,
                                      FUN_001cca14, NULL, 0, reinterpret_cast<void *>(status->job));
    status = g_statusDown;
    drawParameterBlockClear(&status->packet);
    paramsInit(&status->packet, sKeysFirst, sizeof(sKeysFirst), sKeysSecond, sizeof(sKeysSecond),
               sKeysThird, sizeof(sKeysThird), NULL, 0, sKeysFifth, sizeof(sKeysFifth));
    FUN_002bd954(&status->sprites[0], 0x1a, 1000, &status->packet, 1, 1.0f);
    timerStart(&status->sprites[0], 0, 0);
    FUN_002bd954(&status->sprites[1], 0x1a, 1000, &status->packet, 1, 1.0f);
    spriteStartAnimationByIndex(&status->sprites[1], 0);
    FUN_002bd954(&status->sprites[2], 0x1a, 1000, &status->packet, 1, 1.0f);
    spriteStartAnimationByIndex(&status->sprites[2], 1);
    FUN_002bd954(&status->sprites[3], 0x1a, 1000, &status->packet, 1, 1.0f);
    timerStart(&status->sprites[3], 4, 0);
    FUN_002bd954(&status->sprites[4], 0x1a, 1000, &status->packet, 1, 1.0f);
    timerStart(&status->sprites[4], 5, 0);
    FUN_002bd954(&status->sprites[5], 0x1a, 1000, &status->packet, 1, 1.0f);
    timerStart(&status->sprites[5], 0, 0);
    uiSpriteInitializeState(&status->sprites[6], 0x1a, -1, 0x1c, &status->packet, 0xc9, 1.0f);
    spriteStartAnimationByIndex(&status->sprites[6], 2);
    spriteSetLayer(&status->sprites[6], 2);
    status->memorySlot = asdTextCreate(0);
    FUN_002bd82c(status->memorySlot, 0xff);
    positionStateSet(status->memorySlot, 0, 0x646464ff, 0.0f);
    __aeabi_memset4(status->slots, 0x29, -1);
    status->unk2392 = 1;
}

} /* extern "C" */
