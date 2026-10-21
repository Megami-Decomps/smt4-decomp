#include "shard/Shard004A.h"

struct CountAt30;
struct CountAt5A;
struct ScreenCloseLists {
    u8 unk000[0x818];
    u8 regions[0x34]; // 0x818: embedded CountAt30 and alignment padding
    CountAt5A* entries; // 0x84c
};

extern "C" {
s32 FUN_0035db94(void);
void uiSpriteBankApplyPreset(void* object, s32 selection);
void messageDismissNumericBanner(s32 enabled);
void releaseEntriesB(CountAt5A* entries);
void releaseEntriesA(CountAt30* entries);

void FUN_004d0680(Screen4A* screen)
{
    screen->unk18 = 0;
    screen->state = 11;
    if (FUN_0035db94() == 1) {
        screen->unkA874 = 9;
    } else {
        screen->unkA874 = 11;
    }
    uiSpriteBankApplyPreset(screen->block0DC, static_cast<s16>(screen->unkA874));
    if (screen->unk0860 == 0) {
        messageDismissNumericBanner(1);
    }
    ScreenCloseLists* lists = reinterpret_cast<ScreenCloseLists*>(screen);
    releaseEntriesB(lists->entries);
    releaseEntriesA(reinterpret_cast<CountAt30*>(lists->regions));
}
}
