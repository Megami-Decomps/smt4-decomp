#include "common.h"

extern "C" {

int linkListEraseManagerNode(u32 a, int b);
int nw_snd_internal_TaskManager_CancelTasksByKey(u32 a, u32 b);
int nw_snd_internal_driver_Voice_Stop(void);
extern u32 FUN_002bb020(void);
extern u32 _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);

typedef struct Voice {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u8 unk00C;
    /* 0x00D */ u8 active;
    /* 0x00E */ u8 unk00E[0x36];
    /* 0x044 */ u8 unk044[0x1C];
    /* 0x060 */ u32 unk060;
    /* 0x064 */ u8 unk064[0x6C];
    /* 0x0D0 */ u32 count;
    /* 0x0D4 */ u8 unk0D4[0x34];
    /* 0x108 */ u8 slots[1];
} Voice;

void FUN_0037ecdc(Voice *voice)
{
    u32 a;
    u32 b;
    u32 i;

    b = voice->unk060;
    a = FUN_002bb020();
    nw_snd_internal_TaskManager_CancelTasksByKey(a, b);
    for (i = 0; i < voice->count; i++) {
        if (*(int *)((u8 *)voice + i * 0x340 + 0x108) != 0) {
            nw_snd_internal_driver_Voice_Stop();
        }
    }
    if (voice->active != 0) {
        a = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        linkListEraseManagerNode(a, (int)voice + 0x44);
        voice->active = 0;
    }
}

} /* extern "C" */
