#include "common.h"

struct StoredValues {
    u32 first;  // 0x00
    u32 second; // 0x04
};

extern "C" {
extern StoredValues g_startMenuPostHook;
extern u32 DAT_005b4024;

void sysSetCachedPair(u32 firstValue, u32 secondValue)
{
    g_startMenuPostHook.first = firstValue;
    g_startMenuPostHook.second = secondValue;
}
}
