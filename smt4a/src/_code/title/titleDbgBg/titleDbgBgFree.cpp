#include "common.h"

struct DebugBackground {
    u32 unk00; // 0x00
    u8 unk04;  // 0x04
};

extern "C" {
extern DebugBackground* g_titleDbgBg;
void asdMemFree(void* allocation, u32 flag);

void titleDbgBgFree(void)
{
    DebugBackground* background = g_titleDbgBg;
    background->unk04 = 1;
    if (background != NULL) {
        asdMemFree(background, 1);
        g_titleDbgBg = NULL;
    }
}
}
