#include "common.h"

extern "C" {

void FUN_001d1f5c(void);
void FUN_001d2384(void *voice);
void FUN_001d239c(void *voice);

typedef struct Voice {
    /* 0x000 */ u8 unk000[0x139];
    /* 0x139 */ u8 playing;
    /* 0x13A */ u8 unk13A[0x72];
    /* 0x1AC */ struct Voice *next;
} Voice;

typedef struct Owner {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ u8 active;
    /* 0x006 */ u8 unk006[0x12A];
    /* 0x130 */ Voice *voices;
} Owner;

/* Stops the owner's voice list: FUN_001d1f5c, then FUN_001d239c on every playing voice, FUN_001d2384 on every voice, and clears the list and the active flag. */
void FUN_001d0b34(Owner *owner)
{
    Voice *voice;

    FUN_001d1f5c();
    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        if (voice->playing != 0) {
            FUN_001d239c(voice);
        }
    }
    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        FUN_001d2384(voice);
    }
    owner->voices = NULL;
    owner->active = 0;
}

} /* extern "C" */
