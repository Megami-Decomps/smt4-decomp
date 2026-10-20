#include "common.h"

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

typedef struct Registry {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ u8 queue[4];
} Registry;

extern Registry *g_aocMain;

int sysPlaySe(int arg);
int FUN_001f4e20(int arg0, int arg1);
int FUN_0020401c(u8 *name);
int FUN_00215978(int arg);
int FUN_00284f90(int arg);
int FUN_002a49e4(u32 owner, int kind);
int FUN_0047e38c(void *queue);
int FUN_0047e3e4(void *queue);
int FUN_0047e4e4(void *queue);
int FUN_004b7d88(Menu *menu);

/* Opens the menu's queue on the first call; once the queue reports ready, closes it and applies the selected entry. */
void FUN_004b8a28(Menu *menu)
{
    if (menu->phase == 0) {
        FUN_0047e38c(g_aocMain->queue);
        sysPlaySe(0xa0);
        menu->phase = 1;
        return;
    }
    if (menu->phase == 1 && FUN_0047e4e4(g_aocMain->queue) != 0) {
        FUN_0047e3e4(g_aocMain->queue);
        FUN_004b7d88(menu);
        FUN_00215978(0);
        FUN_001f4e20(0, 0);
        FUN_002a49e4(menu->owner, menu->entry->kind);
        menu->phase = 0;
        menu->state = 5;
        menu->busy = 0;
        FUN_0020401c(menu->entry->name);
        FUN_00284f90(1);
    }
}

} /* extern "C" */
