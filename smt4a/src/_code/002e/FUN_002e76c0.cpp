/* NON_MATCHING: aggregate copy uses __aeabi_memcpy4 rather than rt_memcpy_w; loop registers and memset lowering also differ. */
#include "common.h"
#include <string.h>

struct PartyChoiceRecord {
    /* 0x000 */ u8 unk000[300];
    /* 0x12C */ u16 id;
    /* 0x12E */ u8 unk12e[6];
};
struct PartyChoices {
    PartyChoiceRecord records[12];
    /* 0xE70 */ u16 selectedId;
    /* 0xE72 */ u8 unkE72[2];
};
struct PartySelectionWork {
    /* 0x000 */ u8 unk000[0x260];
    /* 0x260 */ u8 menu[0x64];
    /* 0x2C4 */ u32 indices[12];
    /* 0x2F4 */ s32 firstVisible;
    /* 0x2F8 */ u8 unk2f8[0x2c];
    /* 0x324 */ s32 count;
    /* 0x328 */ s32 selected;
    /* 0x32C */ s32 current;
};
struct PartySelectionOwner {
    u32 unk00;
    PartySelectionWork *work;
};
extern "C" {
extern PartySelectionOwner g_callbackOwnerSlots;
PartyChoiceRecord *FUN_003e4d68(u32 index);
void FUN_00203b40(u8 *menu, s32 count, s32 visible, s32 a, s32 b, s32 c);
void FUN_002a4964(u8 *menu);

/* Builds the party menu from a value copy of the supplied record set. */
void FUN_002e76c0(PartyChoices input)
{
    PartySelectionWork *work = g_callbackOwnerSlots.work;
    if (work != NULL) {
        PartyChoices choices = input;
        work->selected = -1;
        memset(work->indices, 0xff, sizeof(work->indices));
        s32 count = 0;
        for (s32 i = 0; i < 12; ++i) {
            u16 id = choices.records[i].id;
            if (id != 0) {
                if (id == choices.selectedId && choices.selectedId != 0)
                    work->selected = count;
                u32 index = 0;
                for (; index < 12; ++index) {
                    if (FUN_003e4d68(index & 0xffff)->id == id)
                        break;
                }
                if (index == 12)
                    index = 0;
                work->indices[count++] = index;
            }
        }
        work->count = count;
        FUN_00203b40(work->menu, count, count, 1, 1, 1);
        if (work->selected >= 0) {
            FUN_002a4964(work->menu);
            work->current = work->selected;
            work->firstVisible = work->selected;
        }
    }
}
}
