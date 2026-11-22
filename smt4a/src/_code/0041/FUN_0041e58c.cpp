/* NON_MATCHING: 193 lines: retail clears the pairs' two words with one stm of two zero registers (a 64-bit store;
 * a __packed u64 in ScaledPair scores worse), keeps the slot byte read twice (ldrb, then ldrsb) and copies the row
 * and label words through other registers. The pair resets go through one helper (five sites). */
#include "ui/SdCardMenu.h"

extern "C" {
static const MenuText kNoCardText = { "No SD card detected." };
u32 dataTableGet(u32 table);
MenuTableRow *dataTableGetEntries(void);
void pair10Clear(MenuPair *pair);

/* Clears a pair's two values and sets its scale. */
static __inline void scaledPairReset(ScaledPair *pair, f32 scale)
{
    pair->first = 0;
    pair->second = 0;
    pair->scale = scale;
}

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
    scaledPairReset(&menu->secondCleared, 0.0f);
    scaledPairReset(&menu->cleared, 0.0f);
    s32 slot = menu->slot;
    dataTableGet(0x3D);
    MenuTableRow *row = dataTableGetEntries() + slot;
    s32 i = 0;
    do {
        scaledPairReset(&menu->entries[i].position, 0.0f);
        for (s32 j = 0; j < 6; j++)
            menu->entries[i].row[j] = row->words[j];
        menu->entries[i].label = kNoCardText;
        i++;
    } while (i < 2);
    for (s32 j = 0; j < 6; j++)
        menu->row[j] = row->words[j];
    menu->label = kNoCardText;
    scaledPairReset(&menu->pair.value, 1.0f);
    scaledPairReset(&menu->thirdCleared, 0.0f);
    for (i = 0; i < menu->entryCount; i++) {
        bool scrolled = sdCardMenuEntryScrolled(menu, i);
        SdCardMenuEntry *entry = &menu->entries[i];
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
