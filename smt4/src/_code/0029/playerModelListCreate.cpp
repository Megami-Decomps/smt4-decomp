#include "common.h"

extern "C" {

typedef struct ModelSlot002947c0 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 loaded;
    /* 0x08 */ u32 list;
} ModelSlot002947c0;

u32 asdMdlManagerCreateSecondList(const char *path);

/* Loads the player model list and marks the slot as loaded. */
void playerModelListCreate(ModelSlot002947c0 *slot)
{
    u32 list = asdMdlManagerCreateSecondList("player/pl01_00.bam");

    slot->loaded = 1;
    slot->list = list;
}

} /* extern "C" */
