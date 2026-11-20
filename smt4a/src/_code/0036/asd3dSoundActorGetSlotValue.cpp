#include "common.h"
#include <stddef.h>

/* A playing sound: only the word read here is known. */
struct SoundSlotView {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u32 value;
};

/* The 3D sound manager block inside the sound system: its table of sixteen sounds. */
struct SoundSlotTableView {
    /* 0x000 */ u8 unk000[0x8BC];
    /* 0x8BC */ SoundSlotView *slots[16];
};
typedef char SoundSlotTableViewLayoutCheck[offsetof(SoundSlotTableView, slots) == 0x8BC &&
    offsetof(SoundSlotView, value) == 0xB0 ? 1 : -1];

extern "C" {
/* Weak like the sound system's other references: retail tests the block's address before using it. */
extern __weak SoundSlotTableView g_nwSound3DManager;

/* Returns the word at 0xB0 of sound `index`, or -1 when the index is out of range or the slot is empty. */
u32 asd3dSoundActorGetSlotValue(s32 index)
{
    SoundSlotTableView *table = &g_nwSound3DManager;
    u32 value = 0xffffffff;
    if (index >= 0 && index < 16 && table != NULL) {
        SoundSlotView *entry = table->slots[index];
        if (entry != NULL) {
            value = entry->value;
        }
    }
    return value;
}

} /* extern "C" */
