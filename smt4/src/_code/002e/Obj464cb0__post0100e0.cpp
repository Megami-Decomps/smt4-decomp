#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
}

static __inline void commandQueuePushPair(u32 first, u32 second)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = first;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = second;
    g_modelCommandWordCount += 2;
}

/* Posts two commands with the value 1 (ids 0xf0111 and 0xf0110), then this object and id 0x100e0. */
void Obj464cb0::post0100e0()
{
    cursorResetFromParam();
    commandQueuePushPair(1, 0xf0111);
    commandQueuePushPair(1, 0xf0110);
    commandQueuePushPair((u32)this, 0x100e0);
    asdModelCommandBlockRelease();
}
