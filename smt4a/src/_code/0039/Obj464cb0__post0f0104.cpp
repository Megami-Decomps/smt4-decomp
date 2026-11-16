#include "classes/Obj464cb0.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
}

/* Posts this object and message id 0xf0104 to the command queue. */
void Obj464cb0::post0f0104()
{
    cursorResetFromParam();
    g_modelCommandBuffer[g_modelCommandWordCount] = (u32)this;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = 0xf0104;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
