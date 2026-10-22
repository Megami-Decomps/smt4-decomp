#include "shard/W4_Match3_AocMainA.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 name[0x3D];
    /* 0x3F */ u8 kind;
} Entry;

typedef struct Menu {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 phase;         /* 0 = opening, 1 = waiting */
    /* 0x0030 */ u8 unk0030[0xA58];
    /* 0x0A88 */ u8 busy;
    /* 0x0A89 */ u8 unk0A89[0x68F];
    /* 0x1118 */ Entry *entry;
    /* 0x111C */ u8 unk111C[0x20];
    /* 0x113C */ u32 owner;
} Menu;



int sysPlaySe(int arg);
int dialogOpen(int arg0, int arg1);
int placeWinStartText(u8 *name);
int FUN_00215978(int arg);
int placeWinSetValue(int arg);
int infoWinSetText(u32 owner, int kind);
int scriptHolderReset(void *queue);
int scriptHolderFree3(void *queue);
int scriptHolderUpdateSimple(void *queue);
int FUN_004b7d88(Menu *menu);

/* Opens the menu's queue on the first call; once the queue reports ready, closes it and applies the selected entry. */
void FUN_004b8a28(Menu *menu)
{
    if (menu->phase == 0) {
        scriptHolderReset(&g_aocMain->scriptHolder);
        sysPlaySe(0xa0);
        menu->phase = 1;
        return;
    }
    if (menu->phase == 1 && scriptHolderUpdateSimple(&g_aocMain->scriptHolder) != 0) {
        scriptHolderFree3(&g_aocMain->scriptHolder);
        FUN_004b7d88(menu);
        FUN_00215978(0);
        dialogOpen(0, 0);
        infoWinSetText(menu->owner, menu->entry->kind);
        menu->phase = 0;
        menu->state = 5;
        menu->busy = 0;
        placeWinStartText(menu->entry->name);
        placeWinSetValue(1);
    }
}

} /* extern "C" */
