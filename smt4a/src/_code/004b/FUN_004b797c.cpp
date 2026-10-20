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
    /* 0x002C */ u32 stateArg;
    /* 0x0030 */ u8 unk0030[0xA58];
    /* 0x0A88 */ u8 busy;
    /* 0x0A89 */ u8 unk0A89[0x68F];
    /* 0x1118 */ Entry *entry;
    /* 0x111C */ u8 unk111C[0x20];
    /* 0x113C */ u32 owner;
    /* 0x1140 */ u8 unk1140[0x1C];
    /* 0x115C */ void *resourceA;
    /* 0x1160 */ void *resourceB;
    /* 0x1164 */ void *handle;
} Menu;

int asdMemFree(void *resource);
int scrScriptProcessDestroy(void *handle);
int dialogOpen(int arg0, int arg1);
int FUN_0020401c(u8 *name);
int FUN_00224880(void *handle);
int FUN_00284f90(int arg);
int FUN_002a49e4(u32 owner, int kind);

/* When the menu's handle is in state 2, releases its handle and resources, switches to state 5 and applies the selected entry. */
void FUN_004b797c(Menu *menu)
{
    if (FUN_00224880(menu->handle) == 2) {
        scrScriptProcessDestroy(menu->handle);
        menu->handle = NULL;
        asdMemFree(menu->resourceA);
        menu->resourceA = NULL;
        asdMemFree(menu->resourceB);
        menu->resourceB = NULL;
        dialogOpen(0, 0);
        u32 owner = menu->owner;
        FUN_002a49e4(owner, menu->entry->kind);
        menu->state = 5;
        menu->stateArg = 0;
        menu->busy = 0;
        FUN_0020401c(menu->entry->name);
        FUN_00284f90(1);
    }
}

} /* extern "C" */
