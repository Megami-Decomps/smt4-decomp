#include "common.h"

struct DebugBackground {
    u32 unk00; // 0x00
    u8 unk04;  // 0x04
};

extern "C" {
extern DebugBackground* DAT_00589168;
void asdMemFree(void* allocation, u32 flag);

void titleDbgBgFree(void)
{
    DebugBackground* background = DAT_00589168;
    background->unk04 = 1;
    if (background != NULL) {
        asdMemFree(background, 1);
        DAT_00589168 = NULL;
    }
}
}
