/* NON_MATCHING: both fields live behind g_gameGlobals.work (single global now); retail loads the pointer twice (no CSE) and addresses the 0x2018 byte as register + literal. */
#include "common.h"

namespace {
struct MessageWork {
    u8 unk0000[0x1383];
    u8 flag;
    u8 unk1384[0x2018 - 0x1384];
    u8 kind;
};
struct GlobalsWithWork {
    u32 unk00;
    MessageWork *work;
};
}

extern "C" {
extern GlobalsWithWork g_gameGlobals;

void FUN_002c85b0(u32 value)
{
    g_gameGlobals.work->flag = value == 8;
    if (value == 8) value = 3;
    g_gameGlobals.work->kind = value;
}
}
