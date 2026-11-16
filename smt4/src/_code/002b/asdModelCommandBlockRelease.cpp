#include "common.h"

extern "C" {

int asdModelAdvanceCommandCursor(int bytes);

extern struct {
    u32 unk0;
    int count;
} g_modelCommandBuffer;

void asdModelCommandBlockRelease(void)
{
    asdModelAdvanceCommandCursor(g_modelCommandBuffer.count << 2);
    g_modelCommandBuffer.unk0 = 0;
    g_modelCommandBuffer.count = 0;
}

} /* extern "C" */
