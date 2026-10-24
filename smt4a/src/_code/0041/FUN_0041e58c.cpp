/* NON_MATCHING: the two-entry placeholder loop unrolls here but not in retail; per-entry copies otherwise follow retail (word-wise row and label copies). */
#include "ui/SdCardMenu.h"

extern "C" {
static const MenuText kNoCardText = { "No SD card detected." };
u32 dataTableGet(u32 table);
MenuTableRow *dataTableGetEntries(void);
void pair10Clear(MenuPair *pair);

/* Resets the menu: the cleared positions, the table row for the current slot and the placeholder label. */
void FUN_0041e58c(SdCardMenu *menu)
{
    pair10Clear(&menu->pair);
    if (menu->slot == 0) {
        menu->enabled = 1;
        menu->pair.unk0C = 9;
    } else {
        menu->enabled = 0;
        menu->pair.unk0C = 8;
    }
    menu->secondCleared.first = 0;
    menu->secondCleared.second = 0;
    menu->secondCleared.scale = 0.0f;
    menu->cleared.first = 0;
    menu->cleared.second = 0;
    menu->cleared.scale = 0.0f;
    s32 slot = menu->slot;
    dataTableGet(0x3D);
    MenuTableRow *row = dataTableGetEntries() + slot;
    s32 i = 0;
    do {
        menu->entries[i].position.first = 0;
        menu->entries[i].position.second = 0;
        menu->entries[i].position.scale = 0.0f;
        for (s32 j = 0; j < 6; j++)
            menu->entries[i].row[j] = row->words[j];
        menu->entries[i].label = kNoCardText;
        i++;
    } while (i < 2);
    for (s32 j = 0; j < 6; j++)
        menu->row[j] = row->words[j];
    menu->label = kNoCardText;
    menu->pair.value.first = 0;
    menu->pair.value.second = 0;
    menu->pair.value.scale = 1.0f;
    menu->thirdCleared.first = 0;
    menu->thirdCleared.second = 0;
    menu->thirdCleared.scale = 0.0f;
    for (i = 0; i < menu->entryCount; i++) {
        bool scrolled = sdCardMenuEntryScrolled(menu, i);
        MenuEntry *entry = &menu->entries[i];
        if (scrolled) {
            entry->iconOn = 0x86;
            entry->iconOff = 0x98;
        } else {
            entry->iconOn = 0x85;
            entry->iconOff = 0x97;
        }
    }
}
}
