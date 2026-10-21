#include "common.h"

struct MessageState {
    u8 unk00[0x19DA];
    u8 mode; // 0x19DA
};

struct MessageMain {
    u32 unk00;               // 0x00
    MessageState* primary;   // 0x04
    MessageState* secondary; // 0x08
};

extern "C" {
extern MessageMain g_messageMain;

void messageSetMode(u8 mode)
{
    g_messageMain.secondary->mode = mode;
    g_messageMain.primary->mode = mode;
}
}
