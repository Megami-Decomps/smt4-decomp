/* NON_MATCHING: retail re-extends the entry id (ldrh; uxth) and orders the flag bool moves moveq/movne; built does neither. */
#include "common.h"

struct MenuEntry {
    u8 unk00[4];
    u16 id; // 0x04
    u8 unk06[0x1a];
};

struct MenuTask {
    u8 unk00[0x14];
    s32 state;            // 0x14
    s32 stateTimer;       // 0x18
    u8 unk1c[4];
    u8 holder[0x841];     // 0x20
    u8 flag;              // 0x861
    u8 unk862[2];
    MenuEntry entries[1]; // 0x864, 0x20 bytes each
};

extern "C" {

s32 FUN_0035dbb0(void);
s32 flaggedValueHolderGetTotal(void *holder);
s32 FUN_004d0cd4(void);
void dispatchIfFound(s32 index, u32 id, bool flag);
void FUN_003343f0(s32 value);

static __inline u16 menuEntryId(MenuEntry *entries, s32 index)
{
    return entries[index].id;
}

void FUN_004a18ec(MenuTask *task)
{
    if (FUN_0035dbb0() != 0) {
        u16 id = menuEntryId(task->entries, flaggedValueHolderGetTotal(task->holder));
        s32 index = FUN_004d0cd4();
        if (index != -1) {
            dispatchIfFound(index, id, task->flag != 0);
        }
        FUN_003343f0(0);
        task->state = 2;
        task->stateTimer = 0;
    }
}

} /* extern "C" */
