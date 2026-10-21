#include "common.h"
extern "C" {
struct Entry { u8 unk00[0xADC]; u8 member[0x214]; u32 argument; };
Entry *QuestCenter_GetActiveEntry(void);
void FUN_0019de98(u32, u32);
void FUN_0038892c(void *, u32);
void questCenterInitializeDisplay(void) {
    void *member = QuestCenter_GetActiveEntry()->member;
    FUN_0019de98(0, 0xF4F4F4FF);
    FUN_0038892c(member, QuestCenter_GetActiveEntry()->argument);
}
}
