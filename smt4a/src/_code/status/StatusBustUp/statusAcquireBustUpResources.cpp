#include "AsdSDK/AsdDebug.h"

struct StatusBustupResources {
    s8 users;
    u8 unk01[3];
    void *portraits;
    void *entries;
};
extern "C" {
extern StatusBustupResources g_statusBustUpResources;
void asdTMTexTableLoadTmx(s32, s32);
void asdTMTexTableLoadSprites(s32);
void *asdMemoryAllocTracked(u32, u32, s32, u32, s32);
void rt_memclr(void *, u32);
}

/* Acquire the shared status portraits and their zero-initialized lookup buffers. */
extern "C" void statusAcquireBustUpResources(void)
{
    if (g_statusBustUpResources.users <= 0) {
        asdTMTexTableLoadSprites(15);
        asdTMTexTableLoadTmx(25, 0);
        if (g_statusBustUpResources.portraits == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusBustUp.cpp", 39);
            g_statusBustUpResources.portraits = asdMemoryAllocTracked(256, 256, 0, 0x277, 1);
            rt_memclr(g_statusBustUpResources.portraits, 0x277);
        }
        if (g_statusBustUpResources.entries == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusBustUp.cpp", 43);
            g_statusBustUpResources.entries = asdMemoryAllocTracked(256, 256, 0, 0x9A, 1);
            rt_memclr(g_statusBustUpResources.entries, 0x9A);
        }
    }
    ++g_statusBustUpResources.users;
}
