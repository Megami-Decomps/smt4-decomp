#include "AsdSDK/AsdDebug.h"

struct StatusBustupResources {
    s8 users;
    u8 unk01[3];
    void *portraits;
    void *entries;
};
extern "C" {
extern StatusBustupResources DAT_00588fd8;
void asdTMTexTableLoadTmx(s32, s32);
void asdTMTexTableLoadSprites(s32);
void *asdMemoryAllocTracked(u32, u32, s32, u32, s32);
void rt_memclr(void *, u32);
}

/* Acquire the shared status portraits and their zero-initialized lookup buffers. */
extern "C" void statusAcquireBustUpResources(void)
{
    if (DAT_00588fd8.users <= 0) {
        asdTMTexTableLoadSprites(15);
        asdTMTexTableLoadTmx(25, 0);
        if (DAT_00588fd8.portraits == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusBustUp.cpp", 39);
            DAT_00588fd8.portraits = asdMemoryAllocTracked(256, 256, 0, 0x277, 1);
            rt_memclr(DAT_00588fd8.portraits, 0x277);
        }
        if (DAT_00588fd8.entries == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusBustUp.cpp", 43);
            DAT_00588fd8.entries = asdMemoryAllocTracked(256, 256, 0, 0x9A, 1);
            rt_memclr(DAT_00588fd8.entries, 0x9A);
        }
    }
    ++DAT_00588fd8.users;
}
