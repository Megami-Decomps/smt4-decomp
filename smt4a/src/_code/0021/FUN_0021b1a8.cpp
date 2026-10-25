/* NON_MATCHING: register allocation only in the entry lookup loop (retail keeps the entry count in r5 and the id temp in ip; the build uses ip and r4). */
#include "common.h"

extern "C" {

typedef struct HelpEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ char text[0x5E];
} HelpEntry;                              /* 0x60 bytes */

typedef struct HelpMenu {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u8 list[0x64];
    /* 0x074 */ u32 ids[0x8E];
    /* 0x2AC */ HelpEntry *entries;
    /* 0x2B0 */ u32 entryCount;
} HelpMenu;

extern const char *DAT_0052ccbc[]; /* help texts for the fixed ids (odd slots are used here) */

extern int resourceRunOperationIfUnblocked(void *list);
extern int FUN_002a4894(void *list);
extern int FUN_0019de98(const char *text, u32 color);

/* Shows the help text of the selected item: fixed texts for ids 0x8B, 0x8C, 0x81 and 0x80, else the entry with the matching id. */
void FUN_0021b1a8(HelpMenu *menu)
{
    const char *text = NULL;
    u32 id;
    u32 i;
    int first = resourceRunOperationIfUnblocked(menu->list);
    int count = FUN_002a4894(menu->list);

    id = menu->ids[count + first];
    if (id == 0x8B) {
        text = DAT_0052ccbc[1];
    } else if (id == 0x8C) {
        text = DAT_0052ccbc[3];
    } else if (id == 0x81) {
        text = DAT_0052ccbc[5];
    } else if (id == 0x80) {
        text = DAT_0052ccbc[7];
    }
    if (text != NULL) {
        FUN_0019de98(text, 0xF4F4F4FF);
        return;
    }
    for (i = 0; i < menu->entryCount; i++) {
        if (menu->entries[i].id == id) {
            FUN_0019de98(menu->entries[i].text, 0xF4F4F4FF);
            return;
        }
    }
}

} /* extern "C" */
