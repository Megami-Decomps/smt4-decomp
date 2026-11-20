#include "common.h"
#include <stddef.h>

/* A playing sound: only the word read here is known. */
struct SoundEntryView {
    /* 0x00 */ u8 unk00[0x9c];
    /* 0x9C */ u32 value;
};

/* The 3D sound manager block inside the sound system (0x784 bytes in): its table of sounds. */
struct SoundEntryTableView {
    /* 0x000 */ u8 unk000[0x87c];
    /* 0x87C */ SoundEntryView *entries[16];
};
typedef char SoundEntryTableViewLayoutCheck[offsetof(SoundEntryTableView, entries) == 0x87c &&
    offsetof(SoundEntryView, value) == 0x9c ? 1 : -1];

extern "C" {
/* Weak like soundApplyVolumeToSlots' reference: retail tests the block's address before using it. */
extern __weak SoundEntryTableView g_nwSound3DManager;

/* Returns the word at 0x9C of sound `index`, or -1 when the index is out of range or the slot is empty. */
u32 asd3dSoundActorGetSlotValue(s32 index)
{
    SoundEntryTableView *table = &g_nwSound3DManager;
    u32 value = 0xffffffff;
    if (index >= 0 && index < 16 && table != NULL) {
        SoundEntryView *entry = table->entries[index];
        if (entry != NULL) {
            value = entry->value;
        }
    }
    return value;
}
}
