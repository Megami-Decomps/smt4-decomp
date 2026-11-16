#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
}

static __inline void commandQueuePushPair(u32 first, u32 second)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = first;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = second;
    g_modelCommandWordCount += 2;
}

/* Posts the value 0xe40100 with id 0x20100, then this object and id 0xf0101. */
void Obj464cb0::post0f0101()
{
    cursorResetFromParam();
    commandQueuePushPair(0xe40100, 0x20100);
    commandQueuePushPair((u32)this, 0xf0101);
    asdModelCommandBlockRelease();
    FUN_003c8538(0);
}
